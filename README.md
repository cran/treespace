[![Travis-CI Build Status](https://travis-ci.org/thibautjombart/treespace.png?branch=master)](https://travis-ci.org/thibautjombart/treespace)
[![Build status](https://ci.appveyor.com/api/projects/status/klr8khh1ieb26rh4/branch/master?svg=true)](https://ci.appveyor.com/project/thibautjombart/treespace/branch/master)
[![CRAN Status Badge](http://www.r-pkg.org/badges/version/treespace)](https://cran.r-project.org/package=treespace)
[![CRAN Downloads](https://cranlogs.r-pkg.org/badges/treespace)](https://cran.r-project.org/package=treespace)




*treespace*: exploration of landscapes of phylogenetic trees
============================================================

*treespace* implements new methods for the exploration and a nalysis of
distributions of phylogenetic trees for a given set of taxa.


Installing *treespace*
-------------
To install the development version from github:

```r
library(devtools)
install_github("thibautjombart/treespace")
```

The stable version can be installed from CRAN using:

```r
install.packages("treespace")
```

Then, to load the package, use:

```r
library("treespace")
```

```
## Loading required package: ape
```

```
## Loading required package: ade4
```

```
## Creating a generic function for 'toJSON' from package 'jsonlite' in package 'googleVis'
```


Content overview
----------------

The main functions implemented in *treespace* are:

* __`treespace`__: explore landscapes of phylogenetic trees

* __`treespaceServer`__: open up an application in a web browser for an
  interactive exploration of the diversity in a set of trees

* __`findGroves`__: identify clusters of similar trees

* __`plotGroves`__: scatterplot of groups of trees, and __`plotGrovesD3`__ which
  enables interactive plotting based on d3.js

* __`medTree`__: find geometric median tree(s) to summarise a group of trees


Other functions are central to the computations of distances between trees:

* __`treeVec`__: characterise a tree by a vector

* __`treeDist`__: find the distance between two tree vectors

* __`multiDist`__: find the pairwise distances of a list of trees

* __`refTreeDist`__: find the distances of a list of trees from a reference tree

* __`tipDiff`__: for a pair of trees, list the tips with differing ancestry

* __`plotTreeDiff`__: plot a pair of trees, highlighting the tips with differing
  ancestry


Distributed datasets include:

* __`woodmiceTrees`__: illustrative set of 201 trees built using the
  neighbour-joining and bootstrapping example from the *woodmice* dataset in the
  *ape* documentation.

* __`DengueTrees`__: 500 trees sampled from a BEAST posterior set of trees from
  (Drummond and Rambaut, 2007)

* __`DengueSeqs`__: 17 dengue virus serotype 4 sequences from (Lanciotti *et
  al.*, 1997), from which the `DengueTrees` were inferred.

* __`DengueBEASTMCC`__: the maximum clade credibility (MCC) tree from the
  `DengueTrees`.




<br>

Documentation
-------------

*treespace* is fully documented on a [dedicated
 website](https://thibautjombart.github.io/treespace/). 

It also comes with the following vignettes:

-
  [*introduction*](https://thibautjombart.github.io/treespace/articles/introduction.html):
  general introduction using a worked example.

- [*Dengue
  example*](https://thibautjombart.github.io/treespace/articles/DengueVignette.html):
  worked example using a Dengue dataset, used in the *treespace* publication.

- [*transmission
  trees*](https://thibautjombart.github.io/treespace/articles/TransmissionTreesVignette.html):
  worked example using transmission trees.




Contributing / asking a question
--------------------------------
Contributions are welcome via **pull requests**.

Please note that this project is released with a [Contributor Code of
Conduct](CONDUCT.md). By participating in this project you agree to abide by its
terms.

Questions, feature requests and bugs can be reported using the package's [issue
system](https://github.com/thibautjombart/treespace/issues).




Authors
-------
Authors:
* [Thibaut Jombart](https://sites.google.com/site/thibautjombart/)
* [Michelle Kendall](http://www.imperial.ac.uk/people/m.kendall)

Contributors:
* [Jacob Almagro-Garcia](http://www.well.ox.ac.uk/jacob-almagro-garcia)
* [Caroline Colijn](http://www.imperial.ac.uk/people/c.colijn)

Maintainer of the CRAN version:
* [Michelle Kendall](http://www.imperial.ac.uk/people/m.kendall)



See details of contributions on: <br>
https://github.com/reconhub/outbreaker2/graphs/contributors

