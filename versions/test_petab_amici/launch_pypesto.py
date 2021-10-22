import pypesto
import pypesto.petab
import pypesto.optimize as optimize
import os
import numpy as np

dir_name = os.path.dirname(__file__)
yaml_config = os.path.join(dir_name, 'PEtab_cc300', 'v1.0.yaml')

importer = pypesto.petab.PetabImporter.from_yaml(yaml_config)
objective = importer.create_objective(guess_steadystate=False)
problem = importer.create_problem(objective)

optimizer = optimize.ScipyOptimizer()

# engine = pypesto.engine.SingleCoreEngine()
engine = pypesto.engine.MultiProcessEngine()

optimize_options = optimize.OptimizeOptions(startpoint_resample=True)

# do the optimization
result = optimize.minimize(problem=problem, optimizer=optimizer,
                           n_starts=1, engine=engine, options=optimize_options)

print(result)


# import petab

# petab_problem = petab.Problem.from_yaml(yaml_config)
# importer = pypesto.petab.PetabImporter(petab_problem)

# model = importer.create_model()

# import libsbml
# converter_config = libsbml.SBMLLocalParameterConverter()\
#     .getDefaultProperties()
# petab_problem.sbml_document.convert(converter_config)

# obj = importer.create_objective()

# ret = obj(petab_problem.x_nominal_scaled, mode='mode_fun', sensi_orders=(0,1), return_dict=True)
# print(ret)

# problem = importer.create_problem(obj)
# objective = problem.objective
# ret = objective(petab_problem.x_nominal_free_scaled, sensi_orders=(0,1))
# print(ret)