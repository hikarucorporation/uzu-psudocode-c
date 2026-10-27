// Function : obj_moveinletfirst
// Namespace: 
// Entry    : 00539470
// Prototype: undefined obj_moveinletfirst(long param_1, long param_2)
// Body     : 00539470 - 005394a1


void obj_moveinletfirst(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != param_2) {
    lVar2 = lVar1;
    do {
      lVar3 = lVar2;
      if (lVar3 == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 8);
    } while (*(long *)(lVar3 + 8) != param_2);
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(param_2 + 8);
    *(long *)(param_2 + 8) = lVar1;
    *(long *)(param_1 + 0x20) = param_2;
  }
  return;
}


