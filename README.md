# `cell_cycle_model`

[![DOI](https://zenodo.org/badge/311147606.svg)](https://zenodo.org/badge/latestdoi/311147606)

`cell_cycle_model` is a repository that stores several cell cycle model versions. It also provides utility functions to compare different cell cycle model versions.

## Models

Models are of different degree of complexity. They typically include `Copasi`, `BNGL` or `SBML` model specifications.

* v0.0.1: Submodels leading to the full model.
* v1.0.0: Initial full cell cycle model.
* v2.0.0: Rescaled cell cycle length to 20 h (H1 human embryonic stem cells). Hard coded/eliminated parameters f1-f4 that were once introduced to describe loss of enzymatic
access if target is in complex. Renamed species to avoid ambiguity in case-insensitive software. Ran version 1.0.0 for 9950 time units and used this state as initial conditions in version 2.0.0. Deleted observables.
* v2.1.0: Removed the simplifying assumption from the ODE model that (un)binding of transcription
factor to promoter does not affect the concentration of free transcription factor.
* v2.1.1: Created separate promoters for Ce, Ca, E2f, Emi and Fox from one E2f activated
promoter (formerly called Px).
* v2.1.2: Introduced observables for parameter optimisation purposes.
* v2.1.3: ntroduced interfaces for small molecule mediated inhibition of Ce and transcriptional/translational inhibition for Cb.
* v2.1.4: Introduced interface for small molecule mediated inhibition of Wee1 and removed it for Ce.
* v3.0.0: same as v2.1.4 in BNGL and auto-generated SBML format.
* v3.0.1: added refinements to reaction rules of v3.0.0.
* v3.1.0: added DNA damage checkpoint (SKP2 and TP53 and CDKN1A).
* v3.2.0: added CDKN1B.
* v4.0.0: added compartments.
* v4.0.1: scaled promoters to 2 per cell; added observables.


## Development team
This package was developed by [Paul F. Lang](paul.lang100@gmail.com) at the University of Oxford, UK.

## Questions and comments
Please contact [Paul F. Lang](mailto:paul.lang@wolfson.ox.ac.uk) with any questions or comments.
