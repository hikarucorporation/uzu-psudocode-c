// Function : graph_yticks
// Namespace: 
// Entry    : 00519010
// Prototype: undefined graph_yticks(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long * param_9, undefined8 param_10, undefined8 param_11, char * param_12, char * param_13, ulong param_14)
// Body     : 00519010 - 0051902e


void graph_yticks(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 double param_5,double param_6,double param_7,undefined8 param_8,long *param_9,
                 undefined8 param_10,undefined8 param_11,char *param_12,char *param_13,
                 ulong param_14)

{
  *(int *)((long)param_9 + 0x9c) = (int)param_1;
  *(int *)(param_9 + 0x14) = (int)param_2;
  *(int *)((long)param_9 + 0xa4) = (int)(float)param_3;
  glist_redraw(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13,param_14);
  return;
}


