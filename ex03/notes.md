BSP:

- points in convex hull of triangles vertixes are inside triangle.
- check number of points in convex hull with point in question. If 3 == interior, if 4 = exterior.

- v0  vertex = a
- vb  vertex = b
- vc  vertex = c
- v1 = v0 -> b
- v2 = v0 -> c
- v = to_find

constant h and k

h = (vxv2y - vyv2x - v0xv2y + v0yv2x) / v1xv2y - v1yv2x

k = (-vxv1y + vxv1x + v0xv1y - v0yv1x) / (-v1xv2y + v1yv2x)

-	determinant of the matrix
	math objects used analysis solution systems linear equations. -> Cramers rule unique solution if det non zero.
	det for square matrixes

-	column vector v1 and v2
	m x 1 matrix
	a11
	a21
	..
	am1