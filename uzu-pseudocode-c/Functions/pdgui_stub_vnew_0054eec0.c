// Function : pdgui_stub_vnew
// Namespace: 
// Entry    : 0054eec0
// Prototype: undefined pdgui_stub_vnew(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined * param_10, char * param_11, char * param_12, char * param_13, undefined8 param_14, undefined1 param_15)
// Body     : 0054eec0 - 0054f120


void pdgui_stub_vnew(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9,undefined *param_10,char *param_11,char *param_12,char *param_13,
                    undefined8 param_14,undefined1 param_15)

{
  char in_AL;
  undefined8 *puVar1;
  char *pcVar2;
  long *param2;
  undefined8 *puVar3;
  char *pcVar4;
  char *extraout_RDX;
  char *pcVar5;
  undefined8 extraout_RDX_00;
  undefined *puVar6;
  char *param2_00;
  char *pcVar7;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar8;
  undefined1 in_stack_fffffffffffffea8;
  uint local_138 [2];
  undefined1 *local_130;
  undefined1 *local_128;
  undefined1 local_e8 [32];
  char *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  
  if (in_AL != '\0') {
    local_b8 = param_1;
    local_a8 = param_2;
    local_98 = param_3;
    local_88 = param_4;
    local_78 = param_5;
    local_68 = param_6;
    local_58 = param_7;
    local_48 = param_8;
  }
  pcVar4 = param_12;
  pcVar5 = param_11;
  puVar6 = param_10;
  local_c8 = param_13;
  local_c0 = param_14;
  if (gfxstub_list != (long *)0x0) {
    pcVar2 = (char *)gfxstub_list;
    pcVar7 = (char *)gfxstub_list;
    do {
      while ((*(char **)(pcVar7 + 0x10) == param_11 && (pcVar2 != (char *)0x0))) {
        do {
          param2_00 = pcVar2;
          while (*(char **)(param2_00 + 0x10) != param_11) {
            param2_00 = *(char **)(param2_00 + 0x20);
            if (param2_00 == (char *)0x0) goto LAB_0054f050;
          }
          sprintf((char *)local_138,".gfxstub%lx",(ulong)param2_00);
          puVar1 = gensym((char *)local_138);
          puVar6 = &DAT_006552a4;
          param_1 = pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,
                                param_8,0x65470f,"s",*puVar1,pcVar4,param_13,param_14,
                                in_stack_fffffffffffffea8);
          param2_00[8] = '\0';
          param2_00[9] = '\0';
          param2_00[10] = '\0';
          param2_00[0xb] = '\0';
          param2_00[0xc] = '\0';
          param2_00[0xd] = '\0';
          param2_00[0xe] = '\0';
          param2_00[0xf] = '\0';
          pcVar4 = (char *)&gfxstub_list;
          pcVar5 = extraout_RDX;
          if (gfxstub_list != (long *)param2_00) {
            pcVar5 = (char *)gfxstub_list;
            do {
              pcVar4 = pcVar5;
              pcVar5 = *(char **)(pcVar4 + 0x20);
              if (pcVar5 == (char *)0x0) goto LAB_0054f014;
            } while (pcVar5 != param2_00);
            pcVar4 = pcVar4 + 0x20;
          }
          *(undefined8 *)pcVar4 = *(undefined8 *)(param2_00 + 0x20);
LAB_0054f014:
          pcVar4 = (char *)0x0;
          pcVar2 = (char *)gfxstub_list;
        } while (gfxstub_list != (long *)0x0);
        pcVar7 = *(char **)(pcVar7 + 0x20);
        pcVar2 = (char *)0x0;
        if (pcVar7 == (char *)0x0) goto LAB_0054f063;
      }
LAB_0054f050:
      pcVar7 = *(char **)(pcVar7 + 0x20);
      pcVar4 = pcVar2;
    } while (pcVar7 != (char *)0x0);
  }
LAB_0054f063:
  param2 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,gfxstub_class,
                  puVar6,pcVar5,pcVar4,param_13,param_14);
  sprintf((char *)local_138,".gfxstub%lx",(ulong)param2);
  puVar3 = gensym((char *)local_138);
  puVar1 = puVar3;
  uVar8 = pd_bind(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param2
                  ,(long)puVar3,extraout_RDX_00,pcVar4,param_13,param_14);
  param2[1] = param_9;
  param2[3] = (long)puVar3;
  param2[2] = (long)param_11;
  param2[4] = (long)gfxstub_list;
  gfxstub_list = param2;
  uVar8 = _pdguistub_vamess(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                            (long)param_10,puVar1,*puVar3,pcVar4,param_13,param_14,
                            in_stack_fffffffffffffea8);
  local_128 = local_e8;
  local_130 = &param_15;
  local_138[0] = 0x20;
  local_138[1] = 0x30;
  uVar8 = pdgui_vamess(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,param_12,
                       local_138);
  pdgui_endmess(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}


