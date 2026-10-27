// Function : canvas_undo_disconnect
// Namespace: 
// Entry    : 005057b0
// Prototype: undefined8 canvas_undo_disconnect(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, int * param_10, int param_11)
// Body     : 005057b0 - 00505813


undefined8
canvas_undo_disconnect
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
          int *param_10,int param_11)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulong)param_4 >> 0x20);
  uVar2 = (undefined4)((ulong)param_3 >> 0x20);
  uVar1 = (undefined4)((ulong)param_2 >> 0x20);
  if (param_11 == 0) {
    freebytes(param_10);
    return 1;
  }
  if (param_11 == 2) {
    canvas_disconnect((float)*param_10,CONCAT44(uVar1,(float)param_10[1]),
                      CONCAT44(uVar2,(float)param_10[2]),CONCAT44(uVar3,(float)param_10[3]),param_5,
                      param_6,param_7,param_8,param_9);
    return 1;
  }
  if (param_11 == 1) {
    canvas_connect((float)*param_10,CONCAT44(uVar1,(float)param_10[1]),
                   CONCAT44(uVar2,(float)param_10[2]),CONCAT44(uVar3,(float)param_10[3]),param_5,
                   param_6,param_7,param_8,param_9);
  }
  return 1;
}


