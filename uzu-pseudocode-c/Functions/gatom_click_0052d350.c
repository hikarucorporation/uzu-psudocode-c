// Function : gatom_click
// Namespace: 
// Entry    : 0052d350
// Prototype: undefined gatom_click(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0052d350 - 0052d3ab


void gatom_click(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                char *param_13,undefined8 param_14)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = (float)param_4;
  fVar3 = (float)param_3;
  fVar2 = (float)param_2;
  uVar1 = pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,
                   "gatom_click is obsolete and may be deleted in future",param_11,param_12,param_13
                   ,param_14);
  gatom_doclick(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_9[7],
                (int)(float)param_1,(int *)(ulong)(uint)(int)fVar2,(char *)(ulong)(uint)(int)fVar3,
                (byte *)(ulong)(uint)(int)fVar4,0,1);
  return;
}


