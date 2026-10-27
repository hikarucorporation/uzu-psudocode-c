// Function : canvas_undo_doisdirty
// Namespace: 
// Entry    : 0052ecf0
// Prototype: undefined8 canvas_undo_doisdirty(long param_1)
// Body     : 0052ecf0 - 0052ed6b


undefined8 canvas_undo_doisdirty(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  undefined7 extraout_var;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0;
  if ((param_1 != 0) &&
     (lVar4 = canvas_undo_get(param_1), puVar2 = PTR_canvas_class_00715918, lVar4 != 0)) {
    if (*(long *)(lVar4 + 8) == *(long *)(lVar4 + 0x10)) {
      for (plVar1 = *(long **)(param_1 + 0x30); plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
        if (((*plVar1 == *(long *)puVar2) &&
            (bVar3 = canvas_isabstraction((long)plVar1), (int)CONCAT71(extraout_var,bVar3) == 0)) &&
           (uVar5 = canvas_undo_doisdirty((long)plVar1), (int)uVar5 != 0)) goto LAB_0052ed13;
      }
    }
    else {
LAB_0052ed13:
      uVar6 = 1;
    }
  }
  return uVar6;
}


