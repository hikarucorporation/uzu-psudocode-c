// Function : canvas_undo_cleardirty
// Namespace: 
// Entry    : 0052e550
// Prototype: undefined canvas_undo_cleardirty(long param_1)
// Body     : 0052e550 - 0052e5ae


void canvas_undo_cleardirty(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  undefined7 extraout_var;
  
  lVar4 = canvas_undo_get(param_1);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar4 + 8);
  }
  puVar2 = PTR_canvas_class_00715918;
  for (plVar1 = *(long **)(param_1 + 0x30); plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    if ((*plVar1 == *(long *)puVar2) &&
       (bVar3 = canvas_isabstraction((long)plVar1), (int)CONCAT71(extraout_var,bVar3) == 0)) {
      canvas_undo_cleardirty((long)plVar1);
    }
  }
  return;
}


