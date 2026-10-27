// Function : binbuf_read
// Namespace: 
// Entry    : 00530c10
// Prototype: undefined8 binbuf_read(undefined8 param_1, undefined8 param_2, long param_3, long param_4, long param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, uint * param_9, char * param_10, char * param_11, int param_12, undefined8 param_13, undefined8 param_14)
// Body     : 00530c10 - 00530ff6


/* WARNING: Removing unreachable block (ram,0x00530dd0) */
/* WARNING: Removing unreachable block (ram,0x00530e66) */
/* WARNING: Removing unreachable block (ram,0x00530ee4) */
/* WARNING: Removing unreachable block (ram,0x00530eb8) */
/* WARNING: Removing unreachable block (ram,0x00530daf) */
/* WARNING: Removing unreachable block (ram,0x00530da6) */
/* WARNING: Removing unreachable block (ram,0x00530e5d) */
/* WARNING: Removing unreachable block (ram,0x00530e7f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
binbuf_read(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
           undefined8 param_6,undefined8 param_7,undefined8 param_8,uint *param_9,char *param_10,
           char *param_11,int param_12,undefined8 param_13,undefined8 param_14)

{
  ulong uVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  undefined1 auVar5 [12];
  int __fd;
  size_t __nbytes;
  __off_t _Var6;
  byte *__buf;
  ssize_t sVar7;
  undefined8 uVar8;
  size_t sVar9;
  ulong uVar10;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  char *pcVar11;
  char cVar14;
  undefined8 uVar12;
  undefined1 extraout_XMM0 [16];
  char cVar15;
  undefined1 auVar13 [16];
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  undefined8 uVar16;
  undefined8 extraout_XMM1_Qa_01;
  undefined8 extraout_XMM1_Qb;
  undefined1 auVar17 [16];
  byte bVar18;
  int iVar19;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  undefined1 auVar20 [12];
  byte bVar25;
  undefined1 auVar21 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  char acStackY_498 [128];
  uint in_stack_fffffffffffffbe8;
  
  if (*param_11 == '\0') {
    pcVar11 = param_10;
    uVar12 = pd_snprintf(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         acStackY_498 + 0x80,999,"%s",param_10,param_10,param_14,
                         (char)in_stack_fffffffffffffbe8);
    param_11 = param_10;
    uVar8 = extraout_RDX_00;
    uVar16 = extraout_XMM1_Qa_00;
  }
  else {
    uVar12 = pd_snprintf(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         acStackY_498 + 0x80,999,"%s/%s",param_11,param_10,param_14,
                         (char)in_stack_fffffffffffffbe8);
    uVar8 = extraout_RDX;
    pcVar11 = param_10;
    uVar16 = extraout_XMM1_Qa;
  }
  __fd = sys_open(uVar12,uVar16,param_3,param_4,param_5,param_6,param_7,param_8,acStackY_498 + 0x80,
                  0,uVar8,param_11,pcVar11,param_14,in_stack_fffffffffffffbe8);
  auVar28._8_8_ = extraout_XMM1_Qb;
  auVar28._0_8_ = extraout_XMM1_Qa_01;
  if (__fd < 0) {
    fwrite("open: ",6,1,*(FILE **)PTR_stderr_00715948);
    perror(acStackY_498 + 0x80);
    uVar8 = 1;
  }
  else {
    __nbytes = lseek(__fd,0,2);
    if ((((long)__nbytes < 0) || (_Var6 = lseek(__fd,0,0), _Var6 < 0)) ||
       (__buf = getbytes(__nbytes), __buf == (byte *)0x0)) {
      fwrite("lseek: ",7,1,*(FILE **)PTR_stderr_00715948);
      perror(acStackY_498 + 0x80);
      close(__fd);
      uVar8 = 1;
    }
    else {
      sVar7 = read(__fd,__buf,__nbytes);
      auVar17 = _DAT_00655df0;
      auVar13 = _s__005d99d0;
      uVar16 = auVar28._0_8_;
      uVar8 = extraout_XMM0._0_8_;
      if ((long)(int)sVar7 < (long)__nbytes) {
        fprintf(*(FILE **)PTR_stderr_00715948,"read (%d %ld) -> %d\n",__fd,__nbytes,(int)sVar7);
        perror(acStackY_498 + 0x80);
        close(__fd);
        freebytes(__buf);
        uVar8 = 1;
      }
      else {
        if ((param_12 != 0) && (__nbytes != 0)) {
          if (0xf < __nbytes) {
            sVar9 = __nbytes & 0xfffffffffffffff0;
            uVar10 = 0;
            do {
              uVar1 = *(ulong *)(__buf + uVar10);
              auVar26._8_8_ = 0;
              auVar26._0_8_ = uVar1;
              bVar18 = -((char)uVar1 == auVar13[0]);
              bVar22 = -((char)(uVar1 >> 8) == auVar13[1]);
              auVar3[1] = bVar22;
              auVar3[0] = bVar18;
              auVar3[2] = -((char)(uVar1 >> 0x10) == auVar13[2]);
              cVar14 = auVar13[4];
              bVar23 = -((char)(uVar1 >> 0x28) == auVar13[5]);
              bVar24 = -((char)(uVar1 >> 0x30) == auVar13[6]);
              cVar15 = auVar13[7];
              uVar4 = (uint)CONCAT12(bVar24,CONCAT11(bVar23,-((char)(uVar1 >> 0x20) == cVar14)));
              uVar8 = CONCAT17(-(auVar13[0xb] == '\0'),
                               CONCAT16(-(auVar13[10] == '\0'),
                                        CONCAT15(-(auVar13[9] == '\0'),
                                                 CONCAT14(-(auVar13[8] == '\0'),uVar4))));
              auVar5[8] = -(auVar13[0xc] == '\0');
              auVar5._0_8_ = uVar8;
              auVar5[9] = -(auVar13[0xd] == '\0');
              auVar5[10] = -(auVar13[0xe] == '\0');
              auVar5[0xb] = -(auVar13[0xf] == '\0');
              if ((bVar18 & 1) != 0) {
                __buf[uVar10] = 0x3b;
              }
              auVar3._3_4_ = uVar4 << 8;
              auVar3._7_4_ = (int)((ulong)uVar8 >> 0x20) << 8;
              auVar3._11_4_ = auVar5._8_4_ << 8;
              auVar3[0xf] = 0;
              if ((bVar22 & 1) != 0) {
                __buf[uVar10 + 1] = 0x3b;
              }
              auVar28 = pshuflw(auVar3 << 8,auVar26,0x55);
              if (auVar28[4] == cVar14) {
                __buf[uVar10 + 2] = 0x3b;
              }
              if ((char)(uVar1 >> 0x18) == auVar13[3]) {
                __buf[uVar10 + 3] = 0x3b;
              }
              if ((bVar23 & 1) != 0) {
                __buf[uVar10 + 5] = 0x3b;
              }
              if ((bVar24 & 1) != 0) {
                __buf[uVar10 + 6] = 0x3b;
              }
              if ((char)(uVar1 >> 0x38) == cVar15) {
                __buf[uVar10 + 7] = 0x3b;
              }
              uVar1 = *(ulong *)(__buf + uVar10 + 8);
              auVar27._8_8_ = 0;
              auVar27._0_8_ = uVar1;
              bVar18 = -((char)uVar1 == auVar13[0]);
              bVar22 = -((char)(uVar1 >> 8) == auVar13[1]);
              bVar23 = -((char)(uVar1 >> 0x18) == auVar13[3]);
              iVar19 = CONCAT13(bVar23,CONCAT12(-((char)(uVar1 >> 0x10) == auVar13[2]),
                                                CONCAT11(bVar22,bVar18)));
              bVar24 = -((char)(uVar1 >> 0x28) == auVar13[5]);
              bVar25 = -((char)(uVar1 >> 0x30) == auVar13[6]);
              bVar2 = (char)(uVar1 >> 0x38) == cVar15;
              auVar20._0_8_ =
                   CONCAT17(-bVar2,CONCAT16(bVar25,CONCAT15(bVar24,CONCAT14(-((char)(uVar1 >> 0x20)
                                                                             == cVar14),iVar19))));
              auVar20[8] = -(auVar13[8] == '\0');
              auVar20[9] = -(auVar13[9] == '\0');
              auVar20[10] = -(auVar13[10] == '\0');
              auVar20[0xb] = -(auVar13[0xb] == '\0');
              auVar21[0xc] = -(auVar13[0xc] == '\0');
              auVar21._0_12_ = auVar20;
              auVar21[0xd] = -(auVar13[0xd] == '\0');
              auVar21[0xe] = -(auVar13[0xe] == '\0');
              auVar21[0xf] = -(auVar13[0xf] == '\0');
              if ((bVar18 & 1) != 0) {
                __buf[uVar10 + 8] = 0x3b;
              }
              auVar29._0_4_ = iVar19 << 8;
              auVar29._4_4_ = (int)((ulong)auVar20._0_8_ >> 0x20) << 8;
              auVar29._8_4_ = auVar20._8_4_ << 8;
              auVar29._12_4_ = auVar21._12_4_ << 8;
              if ((bVar22 & 1) != 0) {
                __buf[uVar10 + 9] = 0x3b;
              }
              auVar28 = pshuflw(auVar29,auVar27,0x55);
              if (auVar28[4] == cVar14) {
                __buf[uVar10 + 10] = 0x3b;
              }
              param_5 = auVar20._0_8_ << 0x18;
              if ((bVar23 & 1) != 0) {
                __buf[uVar10 + 0xb] = 0x3b;
              }
              param_4 = auVar20._0_8_ << 0x28;
              if ((bVar24 & 1) != 0) {
                __buf[uVar10 + 0xd] = 0x3b;
              }
              if ((bVar25 & 1) != 0) {
                __buf[uVar10 + 0xe] = 0x3b;
              }
              if (bVar2) {
                __buf[uVar10 + 0xf] = 0x3b;
              }
              param_3 = auVar20._0_8_ << 0x38;
              uVar10 = uVar10 + 0x10;
              if (sVar9 == uVar10) goto LAB_00530fad;
            } while( true );
          }
          sVar9 = 0;
          auVar13 = extraout_XMM0;
          auVar17 = auVar28;
          do {
            if (__buf[sVar9] == 10) {
              __buf[sVar9] = 0x3b;
            }
            sVar9 = sVar9 + 1;
LAB_00530fad:
            uVar16 = auVar17._0_8_;
            uVar8 = auVar13._0_8_;
          } while (__nbytes != sVar9);
        }
        binbuf_text(uVar8,uVar16,param_3,param_4,param_5,param_6,param_7,param_8,param_9,__buf,
                    __nbytes);
        freebytes(__buf);
        close(__fd);
        uVar8 = 0;
      }
    }
  }
  return uVar8;
}


