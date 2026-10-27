// Function : white_ch
// Namespace: 
// Entry    : 00572260
// Prototype: undefined white_ch(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00572260 - 00572273


void white_ch(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9)

{
  float fVar1;
  
  fVar1 = (float)param_1;
  if ((float)param_1 <= DAT_005d9038) {
    fVar1 = DAT_005d9038;
  }
  *(int *)(param_9 + 0x44) = (int)fVar1;
  canvas_update_dsp(CONCAT44((int)((ulong)param_1 >> 0x20),fVar1),param_2,param_3,param_4,param_5,
                    param_6,param_7,param_8);
  return;
}


