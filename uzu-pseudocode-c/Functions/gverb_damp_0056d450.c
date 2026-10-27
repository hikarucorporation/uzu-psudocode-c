// Function : gverb_damp
// Namespace: 
// Entry    : 0056d450
// Prototype: undefined gverb_damp(float param_1, long param_2)
// Body     : 0056d450 - 0056d48a


void gverb_damp(float param_1,long param_2)

{
  undefined8 *puVar1;
  float fVar2;
  
  if (DAT_005d9038 <= param_1) {
    param_1 = DAT_005d9038;
  }
  fVar2 = 0.0;
  if (0.0 <= param_1) {
    fVar2 = param_1;
  }
  *(float *)(param_2 + 0x90) = fVar2;
  puVar1 = *(undefined8 **)(param_2 + 0x68);
  *(float *)*puVar1 = fVar2;
  *(float *)puVar1[1] = fVar2;
  *(float *)puVar1[2] = fVar2;
  *(float *)puVar1[3] = fVar2;
  return;
}


