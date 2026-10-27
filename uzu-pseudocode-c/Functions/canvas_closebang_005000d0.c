// Function : canvas_closebang
// Namespace: 
// Entry    : 005000d0
// Prototype: undefined canvas_closebang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14)
// Body     : 005000d0 - 00500157


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void canvas_closebang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                     undefined8 param_13,undefined8 param_14)

{
  long *plVar1;
  undefined *puVar2;
  double in_RAX;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = gensym("loadbang");
  puVar2 = PTR_canvas_class_00715918;
  for (plVar1 = *(long **)(param_9 + 0x30); plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    if ((*plVar1 != *(long *)puVar2) && (lVar4 = zgetfn(plVar1,(long)puVar3), lVar4 != 0)) {
      pd_vmess(_DAT_00653f50,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar1,
               puVar3,0x651ee3,param_12,param_13,param_14,in_RAX);
    }
  }
  return;
}


