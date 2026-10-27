// Function : gobj_shouldvis
// Namespace: 
// Entry    : 004fcef0
// Prototype: bool gobj_shouldvis(long * param_1, long * param_2)
// Body     : 004fcef0 - 004fd124


bool gobj_shouldvis(long *param_1,long *param_2)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  undefined7 extraout_var;
  long *plVar4;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if ((((*(ushort *)(param_2 + 0x1d) & 0x101) == 0x100) && ((long *)param_2[9] != (long *)0x0)) &&
     ((*(ushort *)(param_2 + 0x1d) & 0x800) == 0)) {
    bVar3 = gobj_shouldvis(param_2,(long *)param_2[9]);
    if ((int)CONCAT71(extraout_var,bVar3) == 0) {
      return false;
    }
    if ((*(byte *)(param_2 + 0x1d) & 0x80) != 0) {
      if (*param_1 == *(long *)PTR_scalar_class_00715810) {
        return true;
      }
      if (*param_1 == *(long *)PTR_garray_class_00715780) {
        return true;
      }
      if ((*(undefined8 **)(*param_2 + 0x68) == (undefined8 *)0x0) ||
         (pcVar1 = (code *)**(undefined8 **)(*param_2 + 0x68), pcVar1 == (code *)0x0)) {
        local_28 = 0;
        local_24 = 0;
        local_30 = 10;
        local_2c = 10;
        iVar2 = local_30;
      }
      else {
        (*pcVar1)(param_2,param_2[9],&local_24,&local_28,&local_2c,&local_30);
        iVar2 = local_2c;
        if (local_2c < local_24) {
          iVar2 = local_24;
          local_24 = local_2c;
        }
        local_2c = iVar2;
        iVar2 = local_30;
        if (local_30 < local_28) {
          iVar2 = local_28;
          local_28 = local_30;
        }
      }
      local_30 = iVar2;
      if ((*(undefined8 **)(*param_1 + 0x68) == (undefined8 *)0x0) ||
         (pcVar1 = (code *)**(undefined8 **)(*param_1 + 0x68), pcVar1 == (code *)0x0)) {
        local_18 = 0;
        local_20 = 10;
        local_1c = 10;
        local_14 = 0;
      }
      else {
        (*pcVar1)(param_1,param_2,&local_14,&local_18,&local_1c,&local_20);
      }
      if (local_14 < local_24) {
        return false;
      }
      if (local_2c < local_14) {
        return false;
      }
      if (local_1c < local_24) {
        return false;
      }
      if (local_2c < local_1c) {
        return false;
      }
      if (local_18 < local_28) {
        return false;
      }
      if (local_30 < local_18) {
        return false;
      }
      if (local_20 < local_28) {
        return false;
      }
      if (local_30 < local_20) {
        return false;
      }
    }
  }
  plVar4 = pd_checkobject(param_1);
  bVar3 = true;
  if ((plVar4 != (long *)0x0) && ((*(ushort *)(param_2 + 0x1d) & 1) == 0)) {
    if (*plVar4 == *(long *)PTR_canvas_class_00715918) {
      if ((*(byte *)((long)plVar4 + 0xe9) & 1) != 0) {
        return true;
      }
    }
    else if (*(undefined **)(*plVar4 + 0x68) != PTR_text_widgetbehavior_00715630) {
      return true;
    }
    bVar3 = false;
    if ((*(ushort *)(param_2 + 0x1d) & 0x80) != 0) {
      return (*(byte *)((long)plVar4 + 0x2e) & 3) == 0;
    }
  }
  return bVar3;
}


