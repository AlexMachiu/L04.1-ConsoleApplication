#include "my_struct.h"

void InitializeCircle(Circle *c, double radius, double originX, double originY);
void InitializeRectangle(Rectangle *r, double minX, double maxX, double minY, double maxY);
void InitializeTriangle(Triangle *t, double pt1X, double pt2X, double minY, double maxY);

double GetCircleArea(Circle *c);
double GetRectangleArea(Rectangle *r);
double GetTriangleArea(Triangle *t);

void GetCircleBoundingBox(Circle *c, double *bbox);
void GetRectangleBoundingBox(Rectangle *r, double *bbox);
void GetTriangleBoundingBox(Triangle *t, double *bbox);


