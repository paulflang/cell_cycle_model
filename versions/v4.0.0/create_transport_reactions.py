# Can be run with:
# exec(open('C:\\Users\\wolf5212\\OneDrive - Nexus365\\DPhil Project\\Project04_Full cell cycle modelling\\cell_cycle_model\\versions\\v4.0.0\\create_transport_reactions.py').read())

import os

species_file = 'species.csv'
rate_contants = ''
rules_1 = ''
rules_2 = ''

with open(species_file, 'r') as file:
    for line in file.readlines():
        species_name = line.rstrip(os.linesep)
        if 'promoter' not in species_name:
            reaction_name = species_name.replace('()', '').replace('@', '_').replace('::', '__')\
                .replace(').', ')_').replace('(', '_').replace(')', '_')\
                .replace(',', '_').replace('~', '').replace('!', '')
            reaction_name = 'Im'+reaction_name
            rate_contants = rate_contants + f"kIm{reaction_name}_1 1e9/6.022e23\nkEx{reaction_name}_1 1e9/6.022e23\n"
            rule_1 = f"{reaction_name}_1: @Cyt:{species_name} + @Num:NUP(pSites~u) <-> @Nuc:{species_name} + @Num:NUP(pSites~u) kIm{reaction_name}_1,kEx{reaction_name}_1"
            rules_1 = rules_1+rule_1+'\n'
            rule_2 = f"{reaction_name}_2: @Cyt:{species_name} + @Num:NUP(pSites~p) <-> @Nuc:{species_name} + @Num:NUP(pSites~p) kIm_2,kEx_2"
            rules_2 = rules_2+rule_2+'\n'

rate_contants = rate_contants + 'kIm_2 1e10/6.022e23\nkEx_2 1e10/6.022e23'

text = rate_contants+'\n\n'+rules_1+'\n'+rules_2

with open('transport_rules.txt', 'w') as file:
    file.write(text)