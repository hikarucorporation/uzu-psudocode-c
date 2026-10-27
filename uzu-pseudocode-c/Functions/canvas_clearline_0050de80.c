// Function : canvas_clearline
// Namespace: 
// Entry    : 0050de80
// Prototype: undefined canvas_clearline(long param_1)
// Body     : 0050de80 - 0050df16


void canvas_clearline(long param_1)

{
  byte *pbVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 extraout_RDX;
  char *pcVar7;
  char *in_R8;
  undefined8 in_R9;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  
  lVar2 = *(long *)(param_1 + 0xc0);
  if ((*(byte *)(lVar2 + 0x88) & 0x20) == 0) {
    return;
  }
  iVar3 = *(int *)(lVar2 + 0x70);
  iVar4 = *(int *)(lVar2 + 0x78);
  fVar8 = (float)*(int *)(lVar2 + 0x74);
  fVar9 = (float)*(int *)(lVar2 + 0x7c);
  uVar12 = CONCAT44(fVar9,(float)iVar4);
  fVar10 = fVar8;
  fVar11 = fVar8;
  fVar13 = fVar9;
  fVar14 = fVar9;
  canvas_disconnect((float)iVar3,CONCAT44(fVar8,fVar8),uVar12,CONCAT44(fVar9,fVar9),in_XMM4_Qa,
                    in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,param_1);
  puVar6 = getbytes(0x10);
  uVar5 = CONCAT44((int)fVar8,(int)(float)iVar3);
  *puVar6 = uVar5;
  puVar6[1] = CONCAT44((int)fVar9,(int)(float)iVar4);
  pcVar7 = (char *)0x2;
  canvas_undo_add(uVar5,CONCAT44(fVar11,fVar10),uVar12,CONCAT44(fVar14,fVar13),in_XMM4_Qa,in_XMM5_Qa
                  ,in_XMM6_Qa,in_XMM7_Qa,param_1,2,"disconnect",puVar6,in_R8,in_R9);
  pbVar1 = (byte *)(*(long *)(param_1 + 0xc0) + 0x88);
  *pbVar1 = *pbVar1 & 0xdf;
  canvas_dirty(DAT_005d9038,CONCAT44(fVar11,fVar10),uVar12,CONCAT44(fVar14,fVar13),in_XMM4_Qa,
               in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,param_1,pcVar7,extraout_RDX,puVar6,in_R8,in_R9);
  return;
}


