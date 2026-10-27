// Function : canvas_f
// Namespace: 
// Entry    : 005022b0
// Prototype: undefined canvas_f(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 param_10, int param_11, long param_12)
// Body     : 005022b0 - 005023d2


void canvas_f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long *param_9,undefined8 param_10,int param_11,long param_12)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  float fVar5;
  
  if ((1 < param_11) && ((canvas_f_warned & 1) == 0)) {
    post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
         "** ignoring width or font settings from future Pd version **");
    canvas_f_warned = 1;
  }
  plVar3 = (long *)param_9[6];
  if ((long *)param_9[6] != (long *)0x0) {
    do {
      plVar2 = plVar3;
      plVar3 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != (long *)0x0);
    plVar3 = pd_checkobject(plVar2);
    if (plVar3 != (long *)0x0) {
      fVar5 = (float)atom_getfloatarg(0,param_11,param_12);
      *(short *)((long)plVar3 + 0x2c) = (short)(int)fVar5;
      if (((*(byte *)(param_9 + 0x1d) & 8) == 0) &&
         (lVar4 = glist_getcanvas((long)param_9), (*(byte *)(lVar4 + 0xe8) & 2) != 0)) {
        if ((*(long *)(*plVar2 + 0x68) != 0) &&
           ((*(long *)(*(long *)(*plVar2 + 0x68) + 0x28) != 0 &&
            (bVar1 = gobj_shouldvis(plVar2,param_9), (int)CONCAT71(extraout_var,bVar1) != 0)))) {
          (**(code **)(*(long *)(*plVar2 + 0x68) + 0x28))(plVar2,param_9,0);
        }
        if (((*(long *)(*plVar2 + 0x68) != 0) && (*(long *)(*(long *)(*plVar2 + 0x68) + 0x28) != 0))
           && (bVar1 = gobj_shouldvis(plVar2,param_9), (int)CONCAT71(extraout_var_00,bVar1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x005023c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)(*plVar2 + 0x68) + 0x28))(plVar2,param_9,1);
          return;
        }
      }
    }
  }
  return;
}


