import os
import re
import warnings

def make_petab_compatible(path_in, path_out):
    """Replaces PEtab incopatible characters in SBML
    
    Args:
        path (:obj:`str`): path to SBML file
    """
    with open(path_in, 'r') as file:
        text = file.read()

    text = re.sub('[^<]'+'!', lambda matchobj: matchobj.group(0)[0]+'_', text)
    text = re.sub('<model id="[a-zA-Z_0-9.]+">', lambda matchobj: re.sub('v[0-9].[0-9].[0-9]', lambda matchobj: matchobj.group(0).replace('.', '_'), matchobj.group(0)), text)
    text = text.replace('()', '').replace('@', '_').replace('::', '__')\
            .replace(').', ')_').replace('(', '_').replace(')', '_')\
            .replace(',', '_').replace('~', '')

    text = text.split('\n')
    if len(text) < 10:
        raise warning(f'Only detected {len(text)} lines in file. I likely not substituted `names` for `ids`')
    id_to_name = {}
    for i_line in range(len(text)):
        if text[i_line].strip().startswith('<species id="'):
            id = text[i_line].strip().split(' ')[1][4:-1]
            name = text[i_line].strip().split(' ')[-1][6:-3]
            id_to_name[id] = name
    text = '\n'.join(text)
    for id, name in id_to_name.items():
        text = text.replace('"'+id+'"', '"'+name+'"')
        text = text.replace('<ci> '+id+' </ci>', '<ci> '+name+' </ci>')

    with open(path_out, 'w') as file:
        file.write(text)


version = 'v3.0.1'
base_dir = os.path.join('results', 'cell_cycle_'+version, '2022-03-24_15-01-35')
file = 'cell_cycle_'+version+'_'
in_file = os.path.join(base_dir, file+'sbml.xml')
out_file = os.path.join(base_dir, file+'petab.xml')

make_petab_compatible(in_file, out_file)
