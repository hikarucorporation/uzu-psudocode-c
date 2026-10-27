// Function : text_select
// Namespace: 
// Entry    : 0052b850
// Prototype: undefined text_select(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, long * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0052b850 - 0052b905


void text_select(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long *param_9,long *param_10,undefined8 param_11,undefined8 param_12,char *param_13,
                undefined8 param_14)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  undefined7 extraout_var;
  undefined1 uVar4;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  char local_408 [1000];
  
  lVar3 = glist_findrtext(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          (long)param_10,(long)param_9,param_11,param_12,param_13,param_14);
  rtext_select(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar3,
               (int)param_11);
  uVar2 = glist_isvisible((long)param_10);
  if (uVar2 != 0) {
    bVar1 = gobj_shouldvis(param_9,param_10);
    if ((int)CONCAT71(extraout_var,bVar1) != 0) {
      lVar3 = rtext_gettag(lVar3);
      sprintf(local_408,"%sR",lVar3);
      uVar4 = 0x4c;
      if ((int)param_11 == 0) {
        uVar4 = 0x51;
      }
      pdgui_vmess(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                  "crs rr",param_10,"itemconfigure",local_408,"-fill",uVar4);
    }
  }
  return;
}


