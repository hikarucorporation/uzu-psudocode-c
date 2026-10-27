// Function : canvas_reflecttitle
// Namespace: 
// Entry    : 004fe0b0
// Prototype: undefined canvas_reflecttitle(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, char * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14, undefined1 param_15)
// Body     : 004fe0b0 - 004fe2d0


void canvas_reflecttitle(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        ,long param_9,char *param_10,undefined8 param_11,undefined8 param_12,
                        char *param_13,undefined8 param_14,undefined1 param_15)

{
  ushort uVar1;
  long lVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined4 in_stack_fffffffffffffbd8;
  undefined2 local_418;
  undefined1 local_416;
  undefined1 local_31;
  
  if (param_9 == 0) {
    param_1 = bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"canvas_getenv",
                  param_10,param_11,param_12,param_13,param_14,(char)in_stack_fffffffffffffbd8);
    param_11 = extraout_RDX;
    lVar5 = lRam00000000000000e0;
  }
  else {
    lVar5 = *(long *)(param_9 + 0xe0);
  }
  if (lVar5 == 0) {
    lVar6 = param_9;
    do {
      lVar6 = *(long *)(lVar6 + 0x48);
      if (lVar6 == 0) {
        param_1 = bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      "t_canvasenvironment",param_10,param_11,param_12,param_13,param_14,
                      (char)in_stack_fffffffffffffbd8);
        param_11 = extraout_RDX_00;
      }
      lVar5 = *(long *)(lVar6 + 0xe0);
    } while (lVar5 == 0);
  }
  uVar1 = *(ushort *)(param_9 + 0xe8);
  if ((uVar1 & 1) == 0) {
    bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"canvas_reflecttitle",
        param_10,param_11,param_12,param_13,param_14,param_15);
    return;
  }
  if (*(int *)(lVar5 + 8) == 0) {
    local_418 = (ushort)local_418._1_1_ << 8;
  }
  else {
    local_416 = 0;
    local_418 = 0x2820;
    if (0 < *(int *)(lVar5 + 8)) {
      lVar7 = 0;
      lVar6 = 0;
      do {
        sVar3 = strlen((char *)&local_418);
        if (0x1ef < sVar3) break;
        if (lVar6 != 0) {
          sVar3 = strlen((char *)&local_418);
          *(undefined2 *)((long)&local_418 + sVar3) = 0x20;
        }
        lVar2 = *(long *)(lVar5 + 0x10);
        sVar3 = strlen((char *)&local_418);
        param_10 = (char *)((long)&local_418 + sVar3);
        atom_string(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    (int *)(lVar2 + lVar7),param_10,(uint *)0x1f4,param_12,param_13,param_14,
                    (char)in_stack_fffffffffffffbd8);
        lVar6 = lVar6 + 1;
        lVar7 = lVar7 + 0x10;
      } while (lVar6 < *(int *)(lVar5 + 8));
      uVar1 = *(ushort *)(param_9 + 0xe8);
    }
    sVar3 = strlen((char *)&local_418);
    *(undefined2 *)((long)&local_418 + sVar3) = 0x29;
    param_11 = extraout_RDX_01;
    param_1 = extraout_XMM0_Qa_00;
  }
  if ((uVar1 & 0x20) != 0) {
    sVar3 = strlen((char *)&local_418);
    param_10 = " [edit]";
    strncat((char *)&local_418," [edit]",999 - sVar3);
    local_31 = 0;
    param_11 = extraout_RDX_02;
    param_1 = extraout_XMM0_Qa_01;
  }
  puVar4 = *(undefined8 **)(param_9 + 0xe0);
  if (puVar4 == (undefined8 *)0x0) {
    lVar5 = param_9;
    do {
      lVar5 = *(long *)(lVar5 + 0x48);
      if (lVar5 == 0) {
        param_1 = bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      "t_canvasenvironment",param_10,param_11,param_12,param_13,param_14,
                      (char)in_stack_fffffffffffffbd8);
        param_11 = extraout_RDX_03;
      }
      puVar4 = *(undefined8 **)(lVar5 + 0xe0);
    } while (puVar4 == (undefined8 *)0x0);
    uVar1 = *(ushort *)(param_9 + 0xe8);
  }
  pdgui_vmess(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x653fcc,"^ sss i",
              param_9,*(undefined8 *)*puVar4,**(undefined8 **)(param_9 + 200),&local_418,
              (byte)(uVar1 >> 2) & 1);
  return;
}


