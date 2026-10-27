// Function : choice_print
// Namespace: 
// Entry    : 004dcc60
// Prototype: undefined choice_print(long param_1)
// Body     : 004dcc60 - 004dcd3b


void choice_print(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar2 = 0x28;
    lVar3 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x30);
      post((double)*(float *)(lVar1 + -0x24 + lVar2),(double)*(float *)(lVar1 + -0x20 + lVar2),
           (double)*(float *)(lVar1 + -0x1c + lVar2),(double)*(float *)(lVar1 + -0x18 + lVar2),
           (double)*(float *)(lVar1 + -0x14 + lVar2),(double)*(float *)(lVar1 + -0x10 + lVar2),
           (double)*(float *)(lVar1 + -0xc + lVar2),(double)*(float *)(lVar1 + -8 + lVar2),
           "%2d age %2d w %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f");
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x2c;
    } while (lVar3 < *(int *)(param_1 + 0x38));
  }
  return;
}


