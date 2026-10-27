// Function : getoken
// Namespace: 
// Entry    : 005c6360
// Prototype: undefined8 getoken(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, float * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005c6360 - 005c6b1c


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
getoken(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
       float *param_10,undefined8 param_11,undefined8 param_12,char *param_13,undefined8 param_14)

{
  long *plVar1;
  long lVar2;
  byte bVar3;
  char *pcVar4;
  long lVar5;
  double dVar6;
  undefined8 uVar7;
  byte *pbVar8;
  ushort **ppuVar9;
  uint uVar10;
  undefined8 extraout_RDX;
  long lVar11;
  char *pcVar12;
  byte *__nptr;
  size_t sVar13;
  size_t sVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined1 in_stack_ffffffffffffff98;
  size_t local_60;
  byte *local_58;
  long lStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  size_t local_38;
  uint switchD_005c63cc::switchdataD_0065f128;
  
  if (*(byte **)(param_9 + 0x48) == (byte *)0x0) {
    post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
         "expr: getoken: expression string not set\n");
    return 0;
  }
  plVar1 = (long *)(param_9 + 0x48);
  pbVar8 = *(byte **)(param_9 + 0x48);
switchD_005c63cc_caseD_9:
  __nptr = pbVar8;
  if (*__nptr == 0x3b) {
    *plVar1 = (long)(__nptr + 1);
LAB_005c6499:
    param_10[0] = 0.0;
    param_10[1] = 0.0;
    param_10[2] = 0.0;
    param_10[3] = 0.0;
    return 0;
  }
  if (*__nptr == 0) goto LAB_005c6499;
  param_10[2] = 4.2039e-45;
  param_10[3] = 0.0;
  pbVar8 = __nptr + 1;
  *plVar1 = (long)pbVar8;
  uVar10 = (int)(char)*__nptr - 9;
  if (0x75 < uVar10) goto switchD_005c63cc_caseD_a;
  switch((int)(char)*__nptr) {
  case 9:
  case 0x20:
  case 0x5c:
    goto switchD_005c63cc_caseD_9;
  default:
switchD_005c63cc_caseD_a:
    *plVar1 = (long)__nptr;
    bVar3 = *__nptr;
    if ((((byte)((bVar3 & 0xdf) + 0xbf) < 0x1a) || (bVar3 == 0x5f)) || ((byte)(bVar3 - 0x30) < 10))
    {
      lVar11 = 0;
      sVar14 = 1;
      do {
        do {
          sVar13 = sVar14;
          lVar11 = lVar11 + 0x100000000;
          bVar3 = __nptr[1];
          __nptr = __nptr + 1;
          sVar14 = sVar13 + 1;
        } while ((byte)((bVar3 & 0xdf) + 0xbf) < 0x1a);
      } while ((bVar3 == 0x5f) || ((byte)(bVar3 - 0x30) < 10));
      pcVar12 = malloc(sVar14);
      *(char **)param_10 = pcVar12;
      strncpy(pcVar12,(char *)*plVar1,lVar11 >> 0x20);
      pcVar12[sVar13] = '\0';
      *plVar1 = (long)__nptr;
      param_10[2] = 5.60519e-45;
      param_10[3] = 0.0;
      return 0;
    }
switchD_005c6586_caseD_3a:
    pcVar12 = "expr: syntax error: %s\n";
LAB_005c6980:
    post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pcVar12);
    return 1;
  case 0x21:
    if (*pbVar8 == 0x3d) {
      param_10[0] = 8.26531e-40;
      param_10[1] = 0.0;
      *plVar1 = *plVar1 + 1;
      return 0;
    }
    param_10[0] = 1.285729e-39;
    param_10[1] = 0.0;
    return 0;
  case 0x22:
    uVar16 = 0;
    uVar17 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = (byte *)0x0;
    lStack_50 = 0;
    if ((*pbVar8 == 0x24) && (__nptr[2] == 0x73)) {
      uVar7 = getoken(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      (float *)&local_58,param_11,
                      (long)&switchD_005c63cc::switchdataD_0065f128 +
                      (long)(int)(&switchD_005c63cc::switchdataD_0065f128)[uVar10],param_13,param_14
                     );
      if ((int)uVar7 != 0) {
        return 1;
      }
      if (lStack_50 == 0xd) {
        pcVar4 = (char *)*plVar1;
        pcVar12 = pcVar4 + 1;
        *plVar1 = (long)pcVar12;
        if (*pcVar4 == '\"') {
          *(undefined8 *)(param_10 + 4) = local_48;
          *(undefined8 *)(param_10 + 6) = uStack_40;
          *(byte **)param_10 = local_58;
          param_10[2] = 1.82169e-44;
          param_10[3] = 0.0;
          ex_error(local_58,local_48,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                   "expr: deprecated old func(\"$s#\") format detected;\nDouble quotes should no longer be used\nUse func($s#) instead"
                   ,extraout_RDX,pcVar12,param_13,param_14,in_stack_ffffffffffffff98);
          return 0;
        }
      }
      *plVar1 = (long)pbVar8;
      uVar16 = extraout_XMM0_Da;
      uVar17 = extraout_XMM0_Db;
    }
    param_1 = CONCAT44(uVar17,uVar16);
    sVar14 = 1;
    bVar3 = __nptr[1];
    while( true ) {
      if (bVar3 == 0x22) {
        local_60 = sVar14 - 1;
        local_38 = local_60;
        pcVar12 = calloc(sVar14,1);
        if (pcVar12 == (char *)0x0) {
          post(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,"expr: no memory %s: %d\n");
          return 1;
        }
        strncpy(pcVar12,(char *)pbVar8,local_38);
        *plVar1 = (long)(__nptr + sVar14 + 1);
        uVar7 = ex_getsym(pcVar12,(undefined8 *)param_10);
        free(pcVar12);
        if ((int)uVar7 == 0) {
          param_10[2] = 9.80909e-45;
          param_10[3] = 0.0;
          *(byte *)(param_10 + 6) = *(byte *)(param_10 + 6) & 0xfe;
          return 0;
        }
        post(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,
             "expr: syntax error: getoken: problms with ex_getsym %s:%d\n/home/runner/work/UZU/UZU/libpd/pure-data/src/x_vexp.c"
            );
        return 1;
      }
      if (bVar3 == 0) break;
      sVar14 = sVar14 + 1;
      bVar3 = __nptr[sVar14];
    }
    local_60 = sVar14 - 1;
    pcVar12 = "expr: syntax error: missing \'\"\': \n";
    goto LAB_005c6980;
  case 0x24:
    pbVar8 = __nptr + 2;
    *plVar1 = (long)pbVar8;
    uVar7 = 0xb;
    switch(__nptr[1]) {
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
switchD_005c6586_caseD_30:
      *plVar1 = (long)(pbVar8 + -1);
      pcVar12 = atoif((char *)(pbVar8 + -1),param_10,&local_60);
      if (pcVar12 == (char *)0x0) {
        return 1;
      }
      if (local_60 == 1) {
        *plVar1 = (long)pcVar12;
        uVar7 = _UNK_005d99f8;
        *(undefined8 *)param_10 = _DAT_005d99f0;
        *(undefined8 *)(param_10 + 2) = uVar7;
        return 0;
      }
      post(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,param_6
           ,param_7,param_8,"expr: syntax error: %s\n");
      return 1;
    default:
      goto switchD_005c6586_caseD_3a;
    case 0x46:
    case 0x66:
      uVar7 = 0xc;
      break;
    case 0x49:
    case 0x69:
      break;
    case 0x53:
    case 0x73:
      uVar7 = 0xd;
      break;
    case 0x56:
    case 0x76:
      if ((*(byte *)(param_9 + 0x30) & 5) == 0) {
        uVar7 = 0xe;
        break;
      }
      pcVar12 = "$v? works only for expr~";
LAB_005c689a:
      param_1 = post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pcVar12);
      goto LAB_005c6a16;
    case 0x58:
    case 0x78:
      if ((*(byte *)(param_9 + 0x30) & 3) != 0) {
        pcVar12 = "$x? works only for fexpr~";
        goto LAB_005c689a;
      }
      param_10[2] = 2.52234e-44;
      param_10[3] = 0.0;
      ppuVar9 = __ctype_b_loc();
      if ((*(byte *)((long)*ppuVar9 + (long)(char)*pbVar8 * 2 + 1) & 8) == 0) {
        param_10[0] = 0.0;
        param_10[1] = 0.0;
        *(undefined8 *)(param_9 + 0x6a0) = 0x12;
        return 0;
      }
      goto LAB_005c69d0;
    case 0x59:
    case 0x79:
      if ((*(byte *)(param_9 + 0x30) & 3) != 0) {
        post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             "$y works only for fexpr~");
        pbVar8 = (byte *)*plVar1;
        goto switchD_005c6586_caseD_30;
      }
      param_10[2] = 2.24208e-44;
      param_10[3] = 0.0;
      ppuVar9 = __ctype_b_loc();
      if ((*(byte *)((long)*ppuVar9 + (long)(char)*pbVar8 * 2 + 1) & 8) == 0) {
        param_10[0] = 0.0;
        param_10[1] = 0.0;
        *(undefined8 *)(param_9 + 0x6a0) = 0x10;
        return 0;
      }
      goto LAB_005c69d0;
    }
    *(undefined8 *)(param_10 + 2) = uVar7;
LAB_005c69d0:
    pbVar8 = (byte *)atoif((char *)pbVar8,param_10,&local_60);
    param_1 = CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03);
    if (pbVar8 == (byte *)0x0) {
LAB_005c6a16:
      pcVar12 = "expr: syntax error: %s\n";
      goto LAB_005c6980;
    }
    if (local_60 != 1) {
      pcVar12 = "expr: syntax error: %s\n";
      goto LAB_005c6980;
    }
    lVar11 = *(long *)param_10;
    if (lVar11 != 0) {
      lVar2 = lVar11 + -1;
      *(long *)param_10 = lVar2;
      if (lVar11 < 0x65) {
        if ((lVar2 == 0) &&
           (((*(uint *)(param_9 + 0x30) & 3) == 0 || ((*(uint *)(param_9 + 0x30) & 5) == 0)))) {
          lVar11 = *(long *)(param_10 + 2);
          if (lVar11 - 0xbU < 3) {
            pcVar12 = "first inlet of expr~/fexpr~ can only be a vector";
LAB_005c6652:
            post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pcVar12);
            return 1;
          }
        }
        else {
          lVar11 = *(long *)(param_10 + 2);
        }
        if (lVar11 == 0x10) goto LAB_005c64b6;
        lVar5 = *(long *)(param_9 + 0x6a0 + lVar2 * 0x20);
        if (lVar5 == 0) {
          *(long *)(lVar2 * 0x20 + param_9 + 0x6a0) = lVar11;
          goto LAB_005c64b6;
        }
        if (lVar5 == lVar11) goto LAB_005c64b6;
        pcVar12 = "expr: syntax error: inlets can only have one type: %s\n";
        goto LAB_005c6980;
      }
    }
    pcVar12 = "expr: syntax error: inlet or outlet out of range: %s\n";
    goto LAB_005c6980;
  case 0x25:
    param_10[0] = 1.193887e-39;
    param_10[1] = 0.0;
    return 0;
  case 0x26:
    if (*pbVar8 == 0x26) {
      *plVar1 = (long)(__nptr + 2);
      param_10[0] = 4.59183e-40;
      param_10[1] = 0.0;
      return 0;
    }
    param_10[0] = 7.34694e-40;
    param_10[1] = 0.0;
    return 0;
  case 0x28:
    param_10[0] = 1.37757e-39;
    param_10[1] = 0.0;
    return 0;
  case 0x29:
    param_10[0] = 1.377569e-39;
    param_10[1] = 0.0;
    return 0;
  case 0x2a:
    param_10[0] = 1.19389e-39;
    param_10[1] = 0.0;
    return 0;
  case 0x2b:
    param_10[0] = 1.10205e-39;
    param_10[1] = 0.0;
    return 0;
  case 0x2c:
    param_10[0] = 1.83674e-40;
    param_10[1] = 0.0;
    return 0;
  case 0x2d:
    param_10[0] = 1.102048e-39;
    param_10[1] = 0.0;
    return 0;
  case 0x2e:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    *plVar1 = (long)__nptr;
    dVar6 = strtod((char *)__nptr,(char **)&local_58);
    fVar15 = strtof((char *)__nptr,(char **)&local_58);
    if ((long)dVar6 == (long)(int)fVar15) {
      if (__nptr == local_58) {
        return 1;
      }
      break;
    }
    param_10[2] = 2.8026e-45;
    param_10[3] = 0.0;
    *param_10 = fVar15;
    goto joined_r0x005c646e;
  case 0x2f:
    param_10[0] = 1.193888e-39;
    param_10[1] = 0.0;
    return 0;
  case 0x3b:
    pcVar12 = "expr: syntax error: \';\' not implemented\n";
    goto LAB_005c6652;
  case 0x3c:
    if (*pbVar8 == 0x3d) {
      param_10[0] = 9.18372e-40;
      param_10[1] = 0.0;
      *plVar1 = *plVar1 + 1;
      return 0;
    }
    if (*pbVar8 == 0x3c) {
      param_10[0] = 1.010211e-39;
      param_10[1] = 0.0;
      *plVar1 = *plVar1 + 1;
      return 0;
    }
    param_10[0] = 9.18373e-40;
    param_10[1] = 0.0;
    return 0;
  case 0x3d:
    if (*pbVar8 == 0x3d) {
      *plVar1 = (long)(__nptr + 2);
      param_10[0] = 8.26532e-40;
      param_10[1] = 0.0;
      return 0;
    }
    param_10[0] = 2.75546e-40;
    param_10[1] = 0.0;
    return 0;
  case 0x3e:
    if (*pbVar8 == 0x3d) {
      param_10[0] = 9.18369e-40;
      param_10[1] = 0.0;
      *plVar1 = *plVar1 + 1;
      return 0;
    }
    if (*pbVar8 == 0x3e) {
      param_10[0] = 1.01021e-39;
      param_10[1] = 0.0;
      *plVar1 = *plVar1 + 1;
      return 0;
    }
    param_10[0] = 9.1837e-40;
    param_10[1] = 0.0;
    return 0;
  case 0x5b:
    param_10[0] = 1.377567e-39;
    param_10[1] = 0.0;
    return 0;
  case 0x5d:
    param_10[0] = 1.377566e-39;
    param_10[1] = 0.0;
    return 0;
  case 0x5e:
    param_10[0] = 6.42857e-40;
    param_10[1] = 0.0;
    return 0;
  case 0x7c:
    if (*pbVar8 == 0x7c) {
      *plVar1 = (long)(__nptr + 2);
      param_10[0] = 3.67346e-40;
      param_10[1] = 0.0;
      return 0;
    }
    param_10[0] = 5.5102e-40;
    param_10[1] = 0.0;
    return 0;
  case 0x7e:
    param_10[0] = 1.285728e-39;
    param_10[1] = 0.0;
    return 0;
  }
  do {
    bVar3 = *__nptr;
    if ((char)bVar3 < 'X') {
      if ((bVar3 == 0x2e) || (bVar3 == 0x45)) goto LAB_005c645e;
    }
    else {
      if ((bVar3 == 0x58) || (bVar3 == 0x78)) break;
      if (bVar3 == 0x65) {
LAB_005c645e:
        param_10[2] = 2.8026e-45;
        param_10[3] = 0.0;
        *param_10 = fVar15;
        goto joined_r0x005c646e;
      }
    }
    __nptr = __nptr + 1;
  } while (__nptr != local_58);
  param_10[2] = 1.4013e-45;
  param_10[3] = 0.0;
  *(long *)param_10 = (long)dVar6;
joined_r0x005c646e:
  pbVar8 = local_58;
  if (local_58 == (byte *)0x0) {
    return 1;
  }
LAB_005c64b6:
  *plVar1 = (long)pbVar8;
  return 0;
}


