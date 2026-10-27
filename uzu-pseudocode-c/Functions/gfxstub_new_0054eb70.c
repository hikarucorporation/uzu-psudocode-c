// Function : gfxstub_new
// Namespace: 
// Entry    : 0054eb70
// Prototype: undefined gfxstub_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined * param_10, char * param_11, long * param_12, char * param_13, undefined8 param_14)
// Body     : 0054eb70 - 0054edd8


void gfxstub_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,undefined *param_10,char *param_11,long *param_12,char *param_13,
                undefined8 param_14)

{
  long *plVar1;
  size_t sVar2;
  long *plVar3;
  undefined8 *puVar4;
  char *pcVar5;
  long *plVar6;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined *puVar7;
  long *param2;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar8;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  char local_13c8 [2];
  char acStack_13c6 [1006];
  char local_fd8 [4008];
  
  puVar7 = param_10;
  if (gfxstub_list != (long *)0x0) {
    plVar6 = gfxstub_list;
    plVar3 = gfxstub_list;
    do {
      while (((undefined *)plVar3[2] == param_10 && (plVar6 != (long *)0x0))) {
        do {
          param2 = plVar6;
          while ((undefined *)param2[2] != param_10) {
            param2 = (long *)param2[4];
            if (param2 == (long *)0x0) goto LAB_0054ecb0;
          }
          sprintf(local_fd8,".gfxstub%lx",(ulong)param2);
          puVar4 = gensym(local_fd8);
          puVar7 = &DAT_006552a4;
          pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      0x65470f,"s",*puVar4,param_12,param_13,param_14,(char)param_9);
          param2[1] = 0;
          plVar6 = (long *)&gfxstub_list;
          if (gfxstub_list != param2) {
            plVar1 = gfxstub_list;
            do {
              plVar6 = plVar1;
              plVar1 = (long *)plVar6[4];
              if (plVar1 == (long *)0x0) goto LAB_0054ec73;
            } while (plVar1 != param2);
            plVar6 = plVar6 + 4;
          }
          *plVar6 = param2[4];
LAB_0054ec73:
          param_12 = (long *)0x0;
          plVar6 = gfxstub_list;
        } while (gfxstub_list != (long *)0x0);
        plVar3 = (long *)plVar3[4];
        plVar6 = (long *)0x0;
        if (plVar3 == (long *)0x0) goto LAB_0054ecc3;
      }
LAB_0054ecb0:
      plVar3 = (long *)plVar3[4];
      param_12 = plVar6;
    } while (plVar3 != (long *)0x0);
  }
LAB_0054ecc3:
  sVar2 = strlen(param_11);
  if (sVar2 - 0xf6f < 0xfffffffffffff05f) {
    uVar8 = bug(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                "audio dialog too long",puVar7,extraout_RDX,param_12,param_13,param_14,(char)param_9
               );
    bug(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"%s",param_11,extraout_RDX_00,
        param_12,param_13,param_14,(char)param_9);
  }
  else {
    plVar3 = pd_new(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    gfxstub_class,puVar7,extraout_RDX,param_12,param_13,param_14);
    sprintf(local_fd8,".gfxstub%lx",(ulong)plVar3);
    puVar4 = gensym(local_fd8);
    pd_bind(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3,
            (long)puVar4,extraout_RDX_01,param_12,param_13,param_14);
    plVar3[1] = param_9;
    plVar3[3] = (long)puVar4;
    plVar3[2] = (long)param_10;
    plVar3[4] = (long)gfxstub_list;
    gfxstub_list = plVar3;
    pcVar5 = strchr(param_11,0x25);
    sVar2 = (long)(pcVar5 + 2) - (long)param_11;
    strncpy(local_13c8,param_11,sVar2);
    local_13c8[sVar2] = '\0';
    sprintf(local_fd8,local_13c8,*puVar4);
    strncat(local_fd8,pcVar5 + 2,4000 - sVar2);
    sys_gui(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  return;
}


