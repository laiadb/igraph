/* -*- mode: C -*-  */
/* 
   IGraph library.
   Copyright (C) 2009  Gabor Csardi <csardi@rmki.kfki.hu>
   MTA RMKI, Konkoly-Thege Miklos st. 29-33, Budapest 1121, Hungary
   
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc.,  51 Franklin Street, Fifth Floor, Boston, MA 
   02110-1301 USA

*/

#ifndef IGRAPH_CONSTRUCTORS_H
#define IGRAPH_CONSTRUCTORS_H

#undef __BEGIN_DECLS
#undef __END_DECLS
#ifdef __cplusplus
# define __BEGIN_DECLS extern "C" {
# define __END_DECLS }
#else
# define __BEGIN_DECLS /* empty */
# define __END_DECLS /* empty */
#endif

#include "igraph_constants.h"
#include "igraph_types.h"
#include "igraph_matrix.h"
#include "igraph_datatype.h"

__BEGIN_DECLS

/* -------------------------------------------------- */
/* Constructors, deterministic                        */
/* -------------------------------------------------- */

int igraph_create(igraph_t *graph, const igraph_vector_t *edges, igraph_integer_t n, 
		  igraph_bool_t directed);
int igraph_small(igraph_t *graph, igraph_integer_t n, igraph_bool_t directed, 
		 ...);
int igraph_adjacency(igraph_t *graph, igraph_matrix_t *adjmatrix,
		     igraph_adjacency_t mode);
int igraph_weighted_adjacency(igraph_t *graph, igraph_matrix_t *adjmatrix,
		              igraph_adjacency_t mode, const char* attr, 
			      igraph_bool_t loops);
int igraph_star(igraph_t *graph, igraph_integer_t n, igraph_star_mode_t mode, 
		igraph_integer_t center);
int igraph_lattice(igraph_t *graph, const igraph_vector_t *dimvector, igraph_integer_t nei, 
		   igraph_bool_t directed, igraph_bool_t mutual, igraph_bool_t circular);
int igraph_ring(igraph_t *graph, igraph_integer_t n, igraph_bool_t directed, 
		igraph_bool_t mutual, igraph_bool_t circular);
int igraph_tree(igraph_t *graph, igraph_integer_t n, igraph_integer_t children, 
		igraph_tree_mode_t type);
int igraph_full(igraph_t *graph, igraph_integer_t n, igraph_bool_t directed, igraph_bool_t loops);
int igraph_full_citation(igraph_t *graph, igraph_integer_t n, 
			 igraph_bool_t directed);
int igraph_atlas(igraph_t *graph, int number);
int igraph_extended_chordal_ring(igraph_t *graph, igraph_integer_t nodes, 
				 const igraph_matrix_t *W);
int igraph_connect_neighborhood(igraph_t *graph, igraph_integer_t order,
				igraph_neimode_t mode);
int igraph_linegraph(const igraph_t *graph, igraph_t *linegraph);

int igraph_de_bruijn(igraph_t *graph, igraph_integer_t m, igraph_integer_t n);
int igraph_kautz(igraph_t *graph, igraph_integer_t m, igraph_integer_t n);
int igraph_famous(igraph_t *graph, const char *name);
int igraph_lcf_vector(igraph_t *graph, igraph_integer_t n,
		      const igraph_vector_t *shifts, 
		      igraph_integer_t repeats);
int igraph_lcf(igraph_t *graph, igraph_integer_t n, ...);

__END_DECLS

#endif
