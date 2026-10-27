// Function : canvas_hitbox
// Namespace: 
// Entry    : 0050b1f0
// Prototype: undefined8 canvas_hitbox(long * param_1, long * param_2, int param_3, int param_4, int * param_5, int * param_6, int * param_7, int * param_8)
// Body     : 0050b1f0 - 0050b291


undefined8
canvas_hitbox(long *param_1,long *param_2,int param_3,int param_4,int *param_5,int *param_6,
             int *param_7,int *param_8)

{
  bool bVar1;
  undefined7 extraout_var;
  undefined8 uVar2;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int *local_38;
  
  local_38 = param_6;
  bVar1 = gobj_shouldvis(param_2,param_1);
  uVar2 = 0;
  if ((int)CONCAT71(extraout_var,bVar1) != 0) {
    gobj_getrect(param_2,param_1,&local_3c,&local_40,&local_44,&local_48);
    if ((((local_3c <= param_3) && (param_3 <= local_44)) && (local_40 <= param_4)) &&
       (param_4 <= local_48)) {
      *param_5 = local_3c;
      *local_38 = local_40;
      *param_7 = local_44;
      *param_8 = local_48;
      uVar2 = 1;
    }
  }
  return uVar2;
}


