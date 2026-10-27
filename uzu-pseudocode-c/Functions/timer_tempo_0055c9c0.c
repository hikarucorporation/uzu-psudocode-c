// Function : timer_tempo
// Namespace: 
// Entry    : 0055c9c0
// Prototype: undefined timer_tempo(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0055c9c0 - 0055ca27


void timer_tempo(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
                char *param_13,undefined8 param_14)

{
  double dVar1;
  undefined8 extraout_XMM0_Qa;
  double dVar2;
  
  dVar2 = (double)*(float *)(param_9 + 0x40);
  dVar1 = clock_gettimesincewithunits(*(double *)(param_9 + 0x30),dVar2,*(int *)(param_9 + 0x44));
  *(double *)(param_9 + 0x38) = dVar1 + *(double *)(param_9 + 0x38);
  clock_getlogicaltime();
  *(undefined8 *)(param_9 + 0x30) = extraout_XMM0_Qa;
  parsetimeunits(param_1,dVar2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 (float *)(param_9 + 0x40),(undefined4 *)(param_9 + 0x44),param_13,param_14);
  return;
}


