// Function : bng_draw_update
// Namespace: 
// Entry    : 005a2fb0
// Prototype: undefined bng_draw_update(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10)
// Body     : 005a2fb0 - 005a3037


void bng_draw_update(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9,long param_10)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 extraout_XMM0_Qa;
  char local_98 [128];
  
  uVar1 = glist_isvisible(param_10);
  if (uVar1 != 0) {
    sprintf(local_98,"%pBUT",(void *)param_9);
    uVar2 = glist_getcanvas(param_10);
    pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs rk",
                uVar2,"itemconfigure",local_98,"-fill",
                (char)*(undefined4 *)(param_9 + 0x44c + (ulong)(*(int *)(param_9 + 0x490) == 0) * 4)
               );
  }
  return;
}


