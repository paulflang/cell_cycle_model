# `cell_cycle_model`

`cell_cycle_model` is a repository that stores several cell cycle model versions. It also provides utility functions to compare different cell cycle model versions.

## Models

Models are of different degree of complexity. They typicall include `BNGL` and `SBML` model specifications.

* v2.1.4: basic cell cycle model in SBML format.
* v3.0.0: same as v2.1.4 in BNGL and auto-generated SBML format.
* v3.0.1: added refinements to reaction rules of v3.0.0.
* v3.1.0: added DNA damage checkpoint (SKP2 and TP53 and CDKN1A).
* v3.2.0: added CDKN1B.
* v4.0.0: added compartments.
* v4.0.1: scaled promoters to 2 per cell; added observables.

## License
The package is released under the [MIT license](https://github.com/paulflang/cell_cycle_model/blob/develop/LICENSE).

## Development team
This package was developed by [Paul F. Lang](https://www.linkedin.com/in/paul-lang-7b54a81a3/) at the University of Oxford, UK.

## Questions and comments
Please contact [Paul F. Lang](mailto:paul.lang@wolfson.ox.ac.uk) with any questions or comments.
