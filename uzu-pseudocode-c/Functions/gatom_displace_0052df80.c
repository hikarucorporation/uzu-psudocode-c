// Function : gatom_displace
// Namespace: 
// Entry    : 0052df80
// Prototype: undefined gatom_displace(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, ulong param_10, int param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0052df80 - 0052e00b


void gatom_displace(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long *param_9,ulong param_10,int param_11,undefined8 param_12,char *param_13,
                   undefined8 param_14)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 extraout_XMM0_Qa;
  char local_418 [1008];
  
  text_displace(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                param_11,param_12,param_13,param_14);
  uVar1 = glist_isvisible(param_10);
  if (uVar1 != 0) {
    sprintf(local_418,"%p.l",param_9);
    uVar2 = glist_getcanvas(param_10);
    pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs ii",
                uVar2,"move",local_418,(ulong)(uint)(param_11 * *(int *)(param_10 + 0xec)),
                (char)param_12 * (char)*(int *)(param_10 + 0xec));
  }
  return;
}


