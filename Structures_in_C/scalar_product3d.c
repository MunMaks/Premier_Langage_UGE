typedef struct vector3d{
  int x;
  int y;
  int z;
}Vector3d;

int scalar_product3d(Vector3d *u, Vector3d *v){
    return (u->x * v->x) + (u->y * v->y) + (u->z * v->z);
}