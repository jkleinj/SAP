#include <stdio.h>
#include <math.h>
#include "sort.h"

/* SHELL SORT */

void sorts(short *a, int n)
{
    register int i, j, m;

    if (n <= 1)
	return;			/* DEAL WITH TRIVIAL CASES */
    m = n;
    while (1) {			/* LOOP OF DECREASING SWOP SPAN */
	m = m / 2;
	if (m == 0)
	    return;
	for (i = 0; i < n - m; i++) {	/* LOOP OVER SWOPS */
	    j = i;		/* LOOP TO BUBBLE UP */
	    while (1) {
		register int b;
		if (a[j + m] >= a[j])
		    break;
		b = a[j];
		a[j] = a[j + m];	/* EXCHANGE VALUES */
		a[j + m] = b;
		j = j - m;	/* RETURN TO TOP OF LIST */
		if (j < 0)
		    break;	/* ONLY IF ROOM */
	    }
	}
    }
}

void sorti(int *a, int n)
{
    register int i, j, m;

    if (n <= 1)
	return;			/* DEAL WITH TRIVIAL CASES */
    m = n;
    while (1) {			/* LOOP OF DECREASING SWOP SPAN */
	m = m / 2;
	if (m == 0)
	    return;
	for (i = 0; i < n - m; i++) {	/* LOOP OVER SWOPS */
	    j = i;		/* LOOP TO BUBBLE UP */
	    while (1) {
		register int b;
		if (a[j + m] >= a[j])
		    break;
		b = a[j];
		a[j] = a[j + m];	/* EXCHANGE VALUES */
		a[j + m] = b;
		j = j - m;	/* RETURN TO TOP OF LIST */
		if (j < 0)
		    break;	/* ONLY IF ROOM */
	    }
	}
    }
}

void sortf(float *a, int n)
{
    register int i, j, m;

    if (n <= 1)
	return;			/* DEAL WITH TRIVIAL CASES */
    m = n;
    while (1) {			/* LOOP OF DECREASING SWOP SPAN */
	m = m / 2;
	if (m == 0)
	    return;
	for (i = 0; i < n - m; i++) {	/* LOOP OVER SWOPS */
	    j = i;		/* LOOP TO BUBBLE UP */
	    while (1) {
		register int b;
		if (a[j + m] >= a[j])
		    break;
		b = a[j];
		a[j] = a[j + m];	/* EXCHANGE VALUES */
		a[j + m] = b;
		j = j - m;	/* RETURN TO TOP OF LIST */
		if (j < 0)
		    break;	/* ONLY IF ROOM */
	    }
	}
    }
}

/* BINARY SORTS ON (p/f/i)a WITH POINTERS p (a IS UNCHANGED), BIGGEST TO TOP */

void sort(Pairs * pa, float *fa, int *ia, int *p, int n, int init_pointers)
{
    register int i, j, m;
    int pair = 0, floating = 0, integer = 0;

    if (n <= 0)
	return;			/* DEAL WITH TRIVIAL CASES */
    if (n == 1) {
	p[0] = 0;
	return;
    }
    if (ia)
	integer = 1;		/* SET NUMBER MODE */
    if (fa)
	floating = 1;
    if (pa)
	pair = 1;
    if (init_pointers)
	for (i = 0; i < n; i++)
	    p[i] = i;		/* INITIALISE THE POINTERS */
    m = n;
    while (1) {			/* LOOP OF DECREASING SWOP SPAN */
	m = m / 2;
	if (m == 0)
	    return;
	for (i = 0; i < n - m; i++) {	/* LOOP OVER SWOPS */
	    j = i;		/* LOOP TO BUBBLE UP */
	    while (1) {
		register int jp;
		if (pair && pa[p[j + m]].s <= pa[p[j]].s)
		    break;
		if (floating && fa[p[j + m]] <= fa[p[j]])
		    break;
		if (integer && ia[p[j + m]] <= ia[p[j]])
		    break;
		jp = p[j];
		p[j] = p[j + m];	/* EXCHANGE POINTERS */
		p[j + m] = jp;
		j = j - m;	/* RETURN TO TOP OF LIST */
		if (j < 0)
		    break;	/* ONLY IF ROOM */
	    }
	}
    }
}
