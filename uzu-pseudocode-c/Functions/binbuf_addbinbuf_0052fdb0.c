// Function : binbuf_addbinbuf
// Namespace: 
// Entry    : 0052fdb0
// Prototype: undefined binbuf_addbinbuf(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, int * param_9, uint * param_10, undefined8 param_11, ulong param_12, char * param_13, undefined8 param_14)
// Body     : 0052fdb0 - 00530081


void binbuf_addbinbuf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     int *param_9,uint *param_10,undefined8 param_11,ulong param_12,char *param_13,
                     undefined8 param_14)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint *puVar7;
  void *pvVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulong extraout_RDX;
  ulong uVar13;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  ulong extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined4 *puVar14;
  int *piVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  char *pcVar19;
  ulong uVar20;
  int iVar21;
  char *pcVar22;
  long lVar23;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar24;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar26;
  undefined4 extraout_XMM0_Db_01;
  undefined8 uVar25;
  undefined4 extraout_XMM0_Db_02;
  undefined1 in_stack_fffffffffffffbd8;
  char local_418 [1000];
  
  puVar7 = getbytes(0x10);
  *puVar7 = 0;
  pvVar8 = getbytes(0);
  *(void **)(puVar7 + 2) = pvVar8;
  uVar16 = *param_10;
  uVar17 = (ulong)(int)uVar16;
  puVar14 = *(undefined4 **)(param_10 + 2);
  uVar20 = (long)(int)*puVar7 + uVar17;
  pcVar22 = (char *)((long)(int)*puVar7 * 0x10);
  pcVar19 = pcVar22;
  pvVar8 = resizebytes(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                       param_6,param_7,param_8,pvVar8,(ulong)pcVar22,uVar20 * 0x10);
  uVar25 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
  if (pvVar8 == (void *)0x0) {
    pcVar19 = "binbuf_addmessage: out of space";
    uVar25 = pd_error(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,0,"binbuf_addmessage: out of space",
                      extraout_RDX,param_12,param_13,param_14);
    uVar13 = extraout_RDX_00;
  }
  else {
    *(void **)(puVar7 + 2) = pvVar8;
    *puVar7 = (uint)uVar20;
    uVar13 = extraout_RDX;
    if (uVar16 == 0) goto LAB_0052fe94;
    pcVar22 = (char *)((long)pvVar8 + (long)pcVar22);
    param_12 = (ulong)(uVar16 - 1);
    uVar12 = uVar16 & 3;
    uVar13 = (ulong)uVar12;
    uVar24 = extraout_XMM0_Da_00;
    uVar26 = extraout_XMM0_Db_00;
    if (uVar12 != 0) {
      pcVar19 = (char *)0x0;
      do {
        uVar24 = *puVar14;
        uVar26 = puVar14[1];
        uVar4 = puVar14[2];
        uVar5 = puVar14[3];
        puVar14 = puVar14 + 4;
        *(undefined4 *)pcVar22 = uVar24;
        *(undefined4 *)(pcVar22 + 4) = uVar26;
        *(undefined4 *)(pcVar22 + 8) = uVar4;
        *(undefined4 *)(pcVar22 + 0xc) = uVar5;
        pcVar22 = pcVar22 + 0x10;
        uVar18 = (int)pcVar19 + 1;
        pcVar19 = (char *)(ulong)uVar18;
      } while (uVar12 != uVar18);
      uVar17 = (ulong)(uVar16 - uVar18);
    }
    uVar25 = CONCAT44(uVar26,uVar24);
    if (2 < uVar16 - 1) {
      param_12 = 0;
      do {
        uVar25 = ((undefined8 *)((long)puVar14 + param_12))[1];
        *(undefined8 *)(pcVar22 + param_12) = *(undefined8 *)((long)puVar14 + param_12);
        *(undefined8 *)(pcVar22 + param_12 + 8) = uVar25;
        puVar9 = (undefined8 *)((long)puVar14 + param_12 + 0x10);
        uVar25 = puVar9[1];
        *(undefined8 *)(pcVar22 + param_12 + 0x10) = *puVar9;
        *(undefined8 *)(pcVar22 + param_12 + 0x10 + 8) = uVar25;
        puVar9 = (undefined8 *)((long)puVar14 + param_12 + 0x20);
        uVar25 = puVar9[1];
        *(undefined8 *)(pcVar22 + param_12 + 0x20) = *puVar9;
        *(undefined8 *)(pcVar22 + param_12 + 0x20 + 8) = uVar25;
        puVar9 = (undefined8 *)((long)puVar14 + param_12 + 0x30);
        uVar24 = *(undefined4 *)((long)puVar9 + 4);
        uVar25 = *puVar9;
        uVar26 = *(undefined4 *)(puVar9 + 1);
        uVar4 = *(undefined4 *)((long)puVar9 + 0xc);
        pcVar1 = pcVar22 + param_12 + 0x30;
        *(undefined4 *)pcVar1 = *(undefined4 *)puVar9;
        *(undefined4 *)(pcVar1 + 4) = uVar24;
        *(undefined4 *)(pcVar1 + 8) = uVar26;
        *(undefined4 *)(pcVar1 + 0xc) = uVar4;
        param_12 = param_12 + 0x40;
        uVar16 = (int)uVar17 - 4;
        uVar17 = (ulong)uVar16;
      } while (uVar16 != 0);
    }
  }
  uVar20 = (ulong)*puVar7;
LAB_0052fe94:
  if ((int)uVar20 < 1) {
LAB_0052ff99:
    puVar9 = *(undefined8 **)(puVar7 + 2);
    uVar16 = (uint)uVar20;
    lVar23 = (long)(int)uVar16 + (long)*param_9;
    uVar17 = (long)*param_9 * 0x10;
    pvVar8 = resizebytes(uVar25,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         *(void **)(param_9 + 2),uVar17,lVar23 * 0x10);
    if (pvVar8 == (void *)0x0) {
      pd_error(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,0,"binbuf_addmessage: out of space",extraout_RDX_03,param_12,
               param_13,param_14);
    }
    else {
      *(void **)(param_9 + 2) = pvVar8;
      *param_9 = (int)lVar23;
      if (uVar16 != 0) {
        puVar11 = (undefined8 *)((long)pvVar8 + uVar17);
        if ((uVar20 & 3) != 0) {
          uVar12 = 0;
          do {
            uVar25 = *puVar9;
            uVar6 = puVar9[1];
            puVar9 = puVar9 + 2;
            *puVar11 = uVar25;
            puVar11[1] = uVar6;
            puVar11 = puVar11 + 2;
            uVar12 = uVar12 + 1;
          } while ((uVar16 & 3) != uVar12);
          uVar20 = (ulong)(uVar16 - uVar12);
        }
        if (2 < uVar16 - 1) {
          lVar23 = 0;
          do {
            uVar25 = ((undefined8 *)((long)puVar9 + lVar23))[1];
            *(undefined8 *)((long)puVar11 + lVar23) = *(undefined8 *)((long)puVar9 + lVar23);
            ((undefined8 *)((long)puVar11 + lVar23))[1] = uVar25;
            puVar2 = (undefined8 *)((long)puVar9 + lVar23 + 0x10);
            uVar25 = puVar2[1];
            puVar3 = (undefined8 *)((long)puVar11 + lVar23 + 0x10);
            *puVar3 = *puVar2;
            puVar3[1] = uVar25;
            puVar2 = (undefined8 *)((long)puVar9 + lVar23 + 0x20);
            uVar25 = puVar2[1];
            puVar3 = (undefined8 *)((long)puVar11 + lVar23 + 0x20);
            *puVar3 = *puVar2;
            puVar3[1] = uVar25;
            puVar2 = (undefined8 *)((long)puVar9 + lVar23 + 0x30);
            uVar25 = puVar2[1];
            puVar3 = (undefined8 *)((long)puVar11 + lVar23 + 0x30);
            *puVar3 = *puVar2;
            puVar3[1] = uVar25;
            lVar23 = lVar23 + 0x40;
            uVar16 = (int)uVar20 - 4;
            uVar20 = (ulong)uVar16;
          } while (uVar16 != 0);
        }
      }
    }
    freebytes(*(void **)(puVar7 + 2));
    freebytes(puVar7);
    return;
  }
  piVar15 = *(int **)(puVar7 + 2);
  iVar21 = 0;
LAB_0052fee1:
  switch(*piVar15) {
  case 1:
    break;
  case 2:
    pbVar10 = (byte *)**(undefined8 **)(piVar15 + 2);
    param_12 = 0;
    do {
      uVar16 = *pbVar10 - 0x24;
      pcVar19 = (char *)(ulong)uVar16;
      if (((byte)uVar16 < 0x39) &&
         (pcVar19 = (char *)(ulong)(uVar16 & 0xff),
         (0x100000000800101U >> ((ulong)pcVar19 & 0x3f) & 1) != 0)) {
        param_12 = 1;
      }
      else if (*pbVar10 == 0) goto LAB_0052ff6e;
      pbVar10 = pbVar10 + 1;
    } while( true );
  default:
    uVar25 = bug(uVar25,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"binbuf_addbinbuf",
                 pcVar19,uVar13,param_12,param_13,param_14,in_stack_fffffffffffffbd8);
    uVar13 = extraout_RDX_02;
    break;
  case 4:
    *piVar15 = 2;
    pcVar22 = ";";
    goto LAB_0052fec4;
  case 5:
    *piVar15 = 2;
    pcVar22 = ",";
    goto LAB_0052fec4;
  case 8:
    pcVar19 = "$%d";
    sprintf(local_418,"$%d",(ulong)(uint)piVar15[2]);
    goto LAB_0052ff8b;
  case 9:
    goto switchD_0052fef2_caseD_9;
  }
  goto switchD_0052fef2_caseD_1;
LAB_0052ff6e:
  uVar13 = 0;
  if ((int)param_12 != 0) {
switchD_0052fef2_caseD_9:
    pcVar19 = local_418;
    atom_string(uVar25,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar15,pcVar19,
                (uint *)0x3e8,param_12,param_13,param_14,in_stack_fffffffffffffbd8);
LAB_0052ff8b:
    pcVar22 = local_418;
    *piVar15 = 2;
LAB_0052fec4:
    puVar9 = gensym(pcVar22);
    uVar25 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
    *(undefined8 **)(piVar15 + 2) = puVar9;
    uVar13 = extraout_RDX_01;
  }
switchD_0052fef2_caseD_1:
  iVar21 = iVar21 + 1;
  piVar15 = piVar15 + 4;
  uVar20 = (ulong)*puVar7;
  if ((int)*puVar7 <= iVar21) goto LAB_0052ff99;
  goto LAB_0052fee1;
}


