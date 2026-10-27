// Function : gverb_dsp
// Namespace: 
// Entry    : 0056b810
// Prototype: undefined8 gverb_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10)
// Body     : 0056b810 - 0056b85a


undefined8
gverb_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
         undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
         undefined8 *param_10)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 in_RAX;
  undefined8 uVar4;
  
  iVar2 = *(int *)(param_9 + 0x30);
  puVar3 = (undefined4 *)*param_10;
  fVar1 = (float)puVar3[4];
  if ((float)iVar2 != fVar1) {
    *(int *)(param_9 + 0x30) = (int)fVar1;
  }
  uVar4 = CONCAT44((int)((ulong)in_RAX >> 0x20),*puVar3);
  dsp_add((ulong)(uint)fVar1,CONCAT44((int)((ulong)param_2 >> 0x20),(float)iVar2),param_3,param_4,
          param_5,param_6,param_7,param_8,PTR_gverb_perform_00715d78,5,param_9,
          *(undefined8 *)(puVar3 + 2),*(undefined8 *)(param_10[1] + 8),
          *(undefined8 *)(param_10[2] + 8),uVar4);
  return uVar4;
}


