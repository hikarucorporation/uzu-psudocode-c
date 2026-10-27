// Function : delay_tempo
// Namespace: 
// Entry    : 0055c1d0
// Prototype: undefined delay_tempo(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0055c1d0 - 0055c202


void delay_tempo(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
                char *param_13,undefined8 param_14)

{
  int local_10;
  float local_c;
  
  parsetimeunits(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 &local_c,&local_10,param_13,param_14);
  clock_setunit((double)local_c,*(double **)(param_9 + 0x30),local_10);
  return;
}


