// Function : helmholtz_perform
// Namespace: 
// Entry    : 00572bc0
// Prototype: long helmholtz_perform(undefined8 param_1_00, undefined8 param_2, ulong param_3, ulong param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00572bc0 - 00572c48


/* WARNING: Unknown calling convention: __cdecl */
/* helmholtz_perform(long*) */

long __cdecl
helmholtz_perform(undefined8 param_1_00,undefined8 param_2,ulong param_3,ulong param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = *(long *)(param_9 + 8);
  Helmholtz::iosamples
            (param_1_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             *(Helmholtz **)(lVar1 + 0x68),*(undefined4 **)(param_9 + 0x10),
             *(long *)(param_9 + 0x18),*(uint *)(param_9 + 0x20));
  fVar3 = *(float *)(lVar1 + 0x5c);
  fVar2 = (float)Helmholtz::getperiod(*(Helmholtz **)(lVar1 + 0x68));
  fVar3 = fVar3 / fVar2;
  fVar2 = (float)Helmholtz::getfidelity(*(Helmholtz **)(lVar1 + 0x68));
  if (((fVar3 != *(float *)(lVar1 + 0x50)) &&
      (*(float *)(lVar1 + 0x58) <= fVar2 && fVar2 != *(float *)(lVar1 + 0x58))) &&
     (fVar3 < *(float *)(lVar1 + 0x60))) {
    *(float *)(lVar1 + 0x50) = fVar3;
    *(float *)(lVar1 + 0x54) = fVar2;
    clock_delay(0.0,*(double **)(lVar1 + 0x38));
  }
  return param_9 + 0x28;
}


