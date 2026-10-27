// Function : canvas_findhitbox
// Namespace: 
// Entry    : 0050e370
// Prototype: long * canvas_findhitbox(long * param_1, int param_2, int param_3, int * param_4, int * param_5, int * param_6, int * param_7)
// Body     : 0050e370 - 0050e539


long * canvas_findhitbox(long *param_1,int param_2,int param_3,int *param_4,int *param_5,
                        int *param_6,int *param_7)

{
  bool bVar1;
  undefined7 extraout_var;
  long *plVar2;
  undefined7 extraout_var_00;
  long *plVar3;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  long *local_50;
  int *local_48;
  int *local_40;
  int *local_38;
  
  *param_4 = -0x7fffffff;
  plVar3 = (long *)param_1[6];
  local_48 = param_4;
  local_40 = param_5;
  local_38 = param_6;
  if (plVar3 == (long *)0x0) {
    local_50 = (long *)0x0;
  }
  else {
    local_50 = (long *)0x0;
    do {
      bVar1 = gobj_shouldvis(plVar3,param_1);
      if (((((int)CONCAT71(extraout_var,bVar1) != 0) &&
           (gobj_getrect(plVar3,param_1,&local_54,&local_58,&local_5c,&local_60),
           local_54 <= param_2)) && (param_2 <= local_5c)) &&
         (((local_58 <= param_3 && (param_3 <= local_60)) && (*local_48 < local_54)))) {
        *local_48 = local_54;
        *local_40 = local_58;
        *local_38 = local_5c;
        *param_7 = local_60;
        local_50 = plVar3;
      }
      plVar3 = (long *)plVar3[1];
    } while (plVar3 != (long *)0x0);
  }
  if (((param_1[0x18] != 0) && (plVar3 = *(long **)(param_1[0x18] + 0x20), plVar3 != (long *)0x0))
     && (plVar3[1] != 0)) {
    plVar2 = plVar3;
    do {
      if (*plVar2 == 0) {
        return local_50;
      }
      plVar2 = (long *)plVar2[1];
    } while (plVar2 != (long *)0x0);
    do {
      plVar2 = (long *)*plVar3;
      bVar1 = gobj_shouldvis(plVar2,param_1);
      if (((((int)CONCAT71(extraout_var_00,bVar1) != 0) &&
           (gobj_getrect(plVar2,param_1,&local_54,&local_58,&local_5c,&local_60),
           local_54 <= param_2)) && (param_2 <= local_5c)) &&
         ((local_58 <= param_3 && (param_3 <= local_60)))) {
        *local_48 = local_54;
        *local_40 = local_58;
        *local_38 = local_5c;
        *param_7 = local_60;
        local_50 = (long *)*plVar3;
      }
      plVar3 = (long *)plVar3[1];
    } while (plVar3 != (long *)0x0);
  }
  return local_50;
}


