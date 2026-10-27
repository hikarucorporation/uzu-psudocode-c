// Function : graph_bounds
// Namespace: 
// Entry    : 00518ee0
// Prototype: undefined graph_bounds(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long * param_9, undefined8 param_10, undefined8 param_11, char * param_12, char * param_13, ulong param_14)
// Body     : 00518ee0 - 00518f23


void graph_bounds(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 double param_5,double param_6,double param_7,undefined8 param_8,long *param_9,
                 undefined8 param_10,undefined8 param_11,char *param_12,char *param_13,
                 ulong param_14)

{
  undefined8 extraout_RDX;
  char *pcVar1;
  undefined8 uVar2;
  
  *(float *)(param_9 + 0xb) = (float)param_1;
  *(float *)(param_9 + 0xc) = (float)param_3;
  *(float *)((long)param_9 + 0x5c) = (float)param_2;
  *(float *)((long)param_9 + 100) = (float)param_4;
  if (((float)param_1 == (float)param_3) || ((float)param_2 == (float)param_4)) {
    pcVar1 = "graph: empty bounds rectangle";
    uVar2 = pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                     "graph: empty bounds rectangle",param_11,param_12,param_13,param_14);
    glist_redraw(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,pcVar1,
                 extraout_RDX,param_12,param_13,param_14);
    return;
  }
  glist_redraw(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13,param_14);
  return;
}


