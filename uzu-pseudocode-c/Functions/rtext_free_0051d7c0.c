// Function : rtext_free
// Namespace: 
// Entry    : 0051d7c0
// Prototype: undefined rtext_free(undefined8 * param_1)
// Body     : 0051d7c0 - 0051d830


void rtext_free(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  lVar1 = *(long *)(param_1[6] + 0xc0);
  if (*(undefined8 **)(lVar1 + 0x28) == param_1) {
    *(undefined8 *)(lVar1 + 0x28) = 0;
    puVar2 = *(undefined8 **)(lVar1 + 0x18);
  }
  else {
    puVar2 = *(undefined8 **)(lVar1 + 0x18);
  }
  if (puVar2 == param_1) {
    puVar3 = (undefined8 *)(lVar1 + 0x18);
  }
  else {
    do {
      puVar3 = puVar2;
      if (puVar3 == (undefined8 *)0x0) goto LAB_0051d813;
      puVar2 = (undefined8 *)puVar3[0xe];
    } while ((undefined8 *)puVar3[0xe] != param_1);
    puVar3 = puVar3 + 0xe;
  }
  *puVar3 = param_1[0xe];
LAB_0051d813:
  freebytes((void *)*param_1);
  freebytes(param_1);
  return;
}


