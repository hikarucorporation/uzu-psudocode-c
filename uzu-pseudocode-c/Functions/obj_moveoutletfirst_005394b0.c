// Function : obj_moveoutletfirst
// Namespace: 
// Entry    : 005394b0
// Prototype: undefined obj_moveoutletfirst(long param_1, long param_2)
// Body     : 005394b0 - 005394e1


void obj_moveoutletfirst(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x18);
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
    *(long *)(param_1 + 0x18) = param_2;
  }
  return;
}


