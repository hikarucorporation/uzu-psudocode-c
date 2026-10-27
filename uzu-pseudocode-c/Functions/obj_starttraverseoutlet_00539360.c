// Function : obj_starttraverseoutlet
// Namespace: 
// Entry    : 00539360
// Prototype: long obj_starttraverseoutlet(long param_1, long * param_2, int param_3)
// Body     : 00539360 - 005393bf


long obj_starttraverseoutlet(long param_1,long *param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  for (lVar1 = *(long *)(param_1 + 0x18); (lVar2 = lVar1, param_3 != 0 && (lVar2 = 0, lVar1 != 0));
      lVar1 = *(long *)(lVar1 + 8)) {
    param_3 = param_3 + -1;
  }
  *param_2 = lVar2;
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar2 + 0x10);
    if (lVar1 != 0) {
      if (**(long **)(lVar1 + 8) == *(long *)PTR_backtracer_class_00715ba0) {
        return (*(long **)(lVar1 + 8))[1];
      }
      return lVar1;
    }
  }
  return 0;
}


