// Function : canvas_mouseup
// Namespace: 
// Entry    : 0050ccc0
// Prototype: undefined canvas_mouseup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14, undefined1 param_15)
// Body     : 0050ccc0 - 0050ce63


void canvas_mouseup(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                   char *param_13,undefined8 param_14,undefined1 param_15)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  undefined8 uVar11;
  float fVar12;
  undefined1 in_stack_ffffffffffffffd8;
  uint switchD_0050cd4c::switchdataD_006544c0;
  
  fVar12 = (float)param_4;
  if (param_9[0x18] == 0) {
    bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"editor",param_10,param_11,
        param_12,param_13,param_14,param_15);
    return;
  }
  iVar7 = (int)(float)param_1;
  iVar9 = (int)SUB84(param_2,0);
  dVar10 = sys_getrealtime();
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar4 = **(long **)(*plVar3 + 0x48);
  *(double *)(lVar4 + 0x48) = dVar10;
  *(int *)(lVar4 + 0x50) = iVar7;
  *(int *)(lVar4 + 0x54) = iVar9;
  lVar4 = param_9[0x18];
  switch(*(byte *)(lVar4 + 0x88) & 7) {
  case 1:
  case 6:
    puVar2 = *(undefined8 **)(lVar4 + 0x20);
    if ((puVar2 != (undefined8 *)0x0) && (puVar2[1] == 0)) {
      gobj_activate((long *)*puVar2);
    }
    break;
  case 2:
    canvas_doconnect(dVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,iVar7,
                     iVar9,(int)fVar12,1,param_14);
    break;
  case 3:
    iVar5 = *(int *)(lVar4 + 0x68);
    iVar8 = iVar7;
    if (iVar5 < iVar7) {
      iVar8 = iVar5;
    }
    iVar1 = *(int *)(lVar4 + 0x6c);
    if (iVar5 < iVar7) {
      iVar5 = iVar7;
    }
    iVar7 = iVar1;
    if (iVar1 < iVar9) {
      iVar7 = iVar9;
      iVar9 = iVar1;
    }
    uVar11 = canvas_selectinrect(dVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                 (long)param_9,iVar8,iVar9,iVar5,iVar7);
    pdgui_vmess(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs",param_9,
                "delete",&DAT_005db3a7,param_14,in_stack_ffffffffffffffd8);
    *(byte *)(param_9[0x18] + 0x88) = *(byte *)(param_9[0x18] + 0x88) & 0xf8;
    break;
  case 4:
    pcVar6 = *(code **)(lVar4 + 0x38);
    if (pcVar6 == (code *)0x0) {
      bug(dVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"e_motionfn",param_10,
          &switchD_0050cd4c::switchdataD_006544c0,0,param_13,param_14,in_stack_ffffffffffffffd8);
      lVar4 = param_9[0x18];
      pcVar6 = *(code **)(lVar4 + 0x38);
    }
    (*pcVar6)((float)(iVar7 - *(int *)(lVar4 + 0x68)),(float)(iVar9 - *(int *)(lVar4 + 0x6c)),
              DAT_005d9038,*(undefined8 *)(lVar4 + 0x30));
  }
  *(byte *)(param_9[0x18] + 0x88) = *(byte *)(param_9[0x18] + 0x88) & 0xf8;
  return;
}


