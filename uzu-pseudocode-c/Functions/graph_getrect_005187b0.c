// Function : graph_getrect
// Namespace: 
// Entry    : 005187b0
// Prototype: undefined graph_getrect(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, int * param_11, int * param_12, int * param_13, int * param_14)
// Body     : 005187b0 - 00518975


void graph_getrect(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,long param_10,int *param_11,int *param_12,int *param_13,int *param_14
                  )

{
  undefined *puVar1;
  bool bVar2;
  ushort uVar3;
  undefined7 extraout_var;
  long *plVar4;
  long *plVar5;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int *local_38;
  
  local_48 = 0x7fffffff;
  local_4c = 0x7fffffff;
  local_58 = -0x7fffffff;
  local_5c = -0x7fffffff;
  if ((*(byte *)(param_9 + 0xe9) & 1) == 0) {
    (**(code **)PTR_text_widgetbehavior_00715630)
              (param_9,param_10,&local_48,&local_4c,&local_58,&local_5c);
  }
  else {
    graph_graphrect(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10
                    ,&local_48,&local_4c,&local_58,&local_5c);
    bVar2 = canvas_showtext(param_9);
    if ((int)CONCAT71(extraout_var,bVar2) != 0) {
      (**(code **)PTR_text_widgetbehavior_00715630)
                (param_9,param_10,&local_3c,&local_40,&local_50,&local_54);
      if (local_58 < local_50) {
        local_58 = local_50;
      }
      if (local_5c < local_54) {
        local_5c = local_54;
      }
    }
    uVar3 = *(ushort *)(param_9 + 0xe8);
    if ((uVar3 & 0x80) == 0) {
      local_44 = uVar3 & 1;
      uVar3 = uVar3 & 0xfffe;
      *(ushort *)(param_9 + 0xe8) = uVar3;
      puVar1 = PTR_garray_class_00715780;
      plVar5 = *(long **)(param_9 + 0x30);
      if (plVar5 != (long *)0x0) {
        local_38 = param_14;
        do {
          if (*plVar5 != *(long *)puVar1) {
            plVar4 = pd_checkobject(plVar5);
            if (plVar4 == (long *)0x0) {
              gobj_getrect(plVar5,param_9,&local_3c,&local_40,&local_50,&local_54);
              if (local_58 < local_50) {
                local_58 = local_50;
              }
              if (local_5c < local_54) {
                local_5c = local_54;
              }
            }
          }
          plVar5 = (long *)plVar5[1];
        } while (plVar5 != (long *)0x0);
        uVar3 = *(ushort *)(param_9 + 0xe8);
        param_14 = local_38;
      }
      *(ushort *)(param_9 + 0xe8) = (ushort)local_44 | uVar3 & 0xfffe;
    }
  }
  *param_11 = local_48;
  *param_12 = local_4c;
  *param_13 = local_58;
  *param_14 = local_5c;
  return;
}


