// Function : ex_eval
// Namespace: 
// Entry    : 005b3270
// Prototype: ulong * ex_eval(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, long param_7, ulong * param_8, float * param_9, undefined * param_10, char * param_11, undefined8 param_12)
// Body     : 005b3270 - 005b37e7


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * ex_eval(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,long param_7,ulong *param_8,float *param_9,
               undefined *param_10,char *param_11,undefined8 param_12)

{
  undefined4 *puVar1;
  float *pfVar2;
  float *pfVar3;
  uint *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  undefined1 auVar24 [12];
  undefined1 auVar25 [12];
  undefined1 auVar26 [12];
  undefined1 auVar27 [12];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  uint uVar34;
  long *plVar35;
  ulong *puVar36;
  void *pvVar37;
  float *pfVar38;
  byte bVar39;
  int iVar40;
  undefined *puVar41;
  int iVar42;
  uint uVar43;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  ulong uVar44;
  long lVar45;
  undefined8 uVar46;
  float *pfVar47;
  long lVar48;
  long lVar49;
  uint uVar50;
  undefined *puVar51;
  ulong uVar52;
  float *pfVar53;
  ulong uVar54;
  char *pcVar55;
  uint uVar56;
  ulong uVar57;
  int iVar58;
  uint uVar59;
  bool bVar60;
  bool bVar61;
  float fVar62;
  undefined8 extraout_XMM0_Qa;
  ulong extraout_XMM0_Qa_00;
  undefined8 uVar63;
  undefined8 extraout_XMM0_Qa_01;
  ulong extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  ulong extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  ulong extraout_XMM0_Qa_09;
  undefined8 extraout_XMM0_Qa_10;
  ulong extraout_XMM0_Qa_11;
  undefined8 extraout_XMM0_Qa_12;
  ulong extraout_XMM0_Qa_13;
  ulong extraout_XMM0_Qa_14;
  undefined8 extraout_XMM0_Qa_15;
  undefined8 extraout_XMM0_Qa_16;
  undefined8 extraout_XMM0_Qa_17;
  undefined8 extraout_XMM0_Qa_18;
  undefined8 extraout_XMM0_Qa_19;
  ulong extraout_XMM0_Qa_20;
  ulong extraout_XMM0_Qa_21;
  ulong extraout_XMM0_Qa_22;
  ulong extraout_XMM0_Qa_23;
  ulong extraout_XMM0_Qa_24;
  ulong extraout_XMM0_Qa_25;
  ulong extraout_XMM0_Qa_26;
  ulong extraout_XMM0_Qa_27;
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 extraout_XMM0_01 [16];
  undefined1 extraout_XMM0_02 [16];
  undefined1 extraout_XMM0_03 [16];
  undefined1 extraout_XMM0_04 [16];
  undefined1 extraout_XMM0_05 [16];
  undefined1 extraout_XMM0_06 [16];
  undefined1 extraout_XMM0_07 [16];
  undefined1 extraout_XMM0_08 [16];
  undefined1 extraout_XMM0_09 [16];
  undefined1 extraout_XMM0_10 [16];
  undefined1 extraout_XMM0_11 [16];
  undefined1 extraout_XMM0_12 [16];
  undefined1 extraout_XMM0_13 [16];
  undefined1 extraout_XMM0_14 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 extraout_XMM0_15 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 extraout_XMM0_16 [16];
  undefined1 auVar75 [16];
  undefined1 extraout_XMM0_17 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  undefined8 extraout_XMM1_Qa_01;
  undefined8 extraout_XMM1_Qa_02;
  undefined8 extraout_XMM1_Qa_03;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  ulong uVar103;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined8 extraout_XMM1_Qa_04;
  undefined8 extraout_XMM1_Qb;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined8 extraout_XMM1_Qa_05;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined8 extraout_XMM1_Qa_06;
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined8 extraout_XMM1_Qa_07;
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined8 extraout_XMM1_Qa_08;
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  float fVar232;
  float fVar233;
  undefined1 in_XMM2 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  undefined1 auVar204 [16];
  undefined1 auVar205 [16];
  undefined1 auVar206 [16];
  undefined1 auVar207 [16];
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  undefined1 auVar213 [16];
  undefined1 auVar214 [16];
  undefined1 auVar215 [16];
  undefined1 auVar216 [16];
  undefined1 auVar217 [16];
  undefined1 auVar218 [16];
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  undefined1 auVar223 [16];
  undefined1 auVar224 [16];
  undefined1 auVar225 [16];
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  undefined1 auVar228 [16];
  undefined1 auVar229 [16];
  undefined1 auVar230 [16];
  undefined1 auVar231 [16];
  float fVar234;
  float fVar235;
  undefined8 uVar236;
  float fVar264;
  float fVar265;
  undefined1 in_XMM3 [16];
  undefined1 auVar237 [16];
  undefined1 auVar238 [16];
  undefined1 auVar239 [16];
  undefined1 auVar240 [16];
  undefined1 auVar241 [16];
  undefined1 auVar242 [16];
  undefined1 auVar243 [16];
  undefined1 auVar244 [16];
  undefined1 auVar245 [16];
  undefined1 auVar246 [16];
  undefined1 auVar247 [16];
  undefined1 auVar248 [16];
  undefined1 auVar249 [16];
  undefined1 auVar250 [16];
  undefined1 auVar251 [16];
  undefined1 auVar252 [16];
  undefined1 auVar253 [16];
  undefined1 auVar254 [16];
  undefined1 auVar255 [16];
  undefined1 auVar256 [16];
  undefined1 auVar257 [16];
  undefined1 auVar258 [16];
  undefined1 auVar259 [16];
  undefined1 auVar260 [16];
  undefined1 auVar261 [16];
  undefined1 auVar262 [16];
  undefined1 auVar263 [16];
  float fVar266;
  undefined1 auVar267 [16];
  undefined1 auVar268 [16];
  undefined1 auVar269 [16];
  undefined1 auVar270 [16];
  undefined1 auVar271 [16];
  undefined1 auVar272 [16];
  undefined1 auVar273 [16];
  undefined1 auVar274 [16];
  undefined1 auVar275 [16];
  undefined1 auVar276 [16];
  undefined1 auVar277 [16];
  undefined1 auVar278 [16];
  undefined1 auVar279 [16];
  float *local_88;
  long lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  float *local_68;
  long lStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  float fStack_34;
  
  local_58 = 0;
  uStack_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = (float *)0x0;
  lStack_60 = 0;
  local_88 = (float *)0x0;
  lStack_80 = 0;
  if (param_8 == (ulong *)0x0) {
    return (ulong *)0x0;
  }
  uVar44 = param_8[1];
  uVar63 = in_XMM2._0_8_;
  uVar236 = in_XMM3._0_8_;
  puVar41 = param_10;
  if (0x14 < uVar44 - 1) {
LAB_005b34ed:
    pd_error(0,param_2,uVar63,uVar236,param_3,param_4,param_5,param_6,param_7,
             "expr: ex_eval: unexpected type %d\n",uVar44,puVar41,param_11,param_12);
    return (ulong *)0x0;
  }
  puVar51 = (undefined *)((ulong)param_10 & 0xffffffff);
  puVar41 = &DAT_0065f0c4;
  uVar34 = (uint)param_10;
  switch(uVar44) {
  case 1:
    if (*(long *)(param_9 + 2) == 0xf) {
      iVar40 = *(int *)(param_7 + 0x28f8);
      if (iVar40 != 0) {
        fVar62 = (float)(long)*param_8;
        lVar49 = *(long *)param_9;
        if (6 < iVar40 - 1U) {
          uVar44 = (ulong)(iVar40 - 1U) + 1;
          uVar52 = uVar44 & 0xfffffffffffffff8;
          uVar54 = (uVar52 - 8 >> 3) + 1;
          uVar57 = (ulong)((uint)uVar54 & 7);
          if (uVar52 - 8 < 0x38) {
            lVar45 = 0;
          }
          else {
            uVar54 = uVar54 & 0xfffffffffffffff8;
            lVar45 = 0;
            do {
              pfVar38 = (float *)(lVar49 + lVar45 * 4);
              *pfVar38 = fVar62;
              pfVar38[1] = fVar62;
              pfVar38[2] = fVar62;
              pfVar38[3] = fVar62;
              pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
              *pfVar38 = fVar62;
              pfVar38[1] = fVar62;
              pfVar38[2] = fVar62;
              pfVar38[3] = fVar62;
              pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
              *pfVar38 = fVar62;
              pfVar38[1] = fVar62;
              pfVar38[2] = fVar62;
              pfVar38[3] = fVar62;
              pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
              *pfVar38 = fVar62;
              pfVar38[1] = fVar62;
              pfVar38[2] = fVar62;
              pfVar38[3] = fVar62;
              pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
              *pfVar38 = fVar62;
              pfVar38[1] = fVar62;
              pfVar38[2] = fVar62;
              pfVar38[3] = fVar62;
              pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
              *pfVar38 = fVar62;
              pfVar38[1] = fVar62;
              pfVar38[2] = fVar62;
              pfVar38[3] = fVar62;
              pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
              *pfVar38 = fVar62;
              pfVar38[1] = fVar62;
              pfVar38[2] = fVar62;
              pfVar38[3] = fVar62;
              pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
              *pfVar38 = fVar62;
              pfVar38[1] = fVar62;
              pfVar38[2] = fVar62;
              pfVar38[3] = fVar62;
              pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
              *pfVar38 = fVar62;
              pfVar38[1] = fVar62;
              pfVar38[2] = fVar62;
              pfVar38[3] = fVar62;
              pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
              *pfVar38 = fVar62;
              pfVar38[1] = fVar62;
              pfVar38[2] = fVar62;
              pfVar38[3] = fVar62;
              pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
              *pfVar38 = fVar62;
              pfVar38[1] = fVar62;
              pfVar38[2] = fVar62;
              pfVar38[3] = fVar62;
              pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
              *pfVar38 = fVar62;
              pfVar38[1] = fVar62;
              pfVar38[2] = fVar62;
              pfVar38[3] = fVar62;
              pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
              *pfVar38 = fVar62;
              pfVar38[1] = fVar62;
              pfVar38[2] = fVar62;
              pfVar38[3] = fVar62;
              pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
              *pfVar38 = fVar62;
              pfVar38[1] = fVar62;
              pfVar38[2] = fVar62;
              pfVar38[3] = fVar62;
              pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
              *pfVar38 = fVar62;
              pfVar38[1] = fVar62;
              pfVar38[2] = fVar62;
              pfVar38[3] = fVar62;
              pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
              *pfVar38 = fVar62;
              pfVar38[1] = fVar62;
              pfVar38[2] = fVar62;
              pfVar38[3] = fVar62;
              lVar45 = lVar45 + 0x40;
              uVar54 = uVar54 - 8;
            } while (uVar54 != 0);
          }
          if (uVar57 != 0) {
            lVar45 = lVar49 + lVar45 * 4;
            lVar48 = 0;
            do {
              pfVar38 = (float *)(lVar45 + lVar48);
              *pfVar38 = fVar62;
              pfVar38[1] = fVar62;
              pfVar38[2] = fVar62;
              pfVar38[3] = fVar62;
              pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
              *pfVar38 = fVar62;
              pfVar38[1] = fVar62;
              pfVar38[2] = fVar62;
              pfVar38[3] = fVar62;
              lVar48 = lVar48 + 0x20;
            } while (uVar57 * 0x20 != lVar48);
          }
          if (uVar44 == uVar52) goto LAB_005b34e4;
          iVar40 = iVar40 - (int)uVar52;
          lVar49 = lVar49 + uVar52 * 4;
        }
        lVar45 = 0;
        do {
          *(float *)(lVar49 + lVar45 * 4) = fVar62;
          lVar45 = lVar45 + 1;
        } while (iVar40 != (int)lVar45);
      }
      goto LAB_005b34e4;
    }
    break;
  case 2:
    if (*(long *)(param_9 + 2) == 0xf) {
      iVar40 = *(int *)(param_7 + 0x28f8);
      if (iVar40 != 0) {
        uVar6 = (undefined4)*param_8;
        lVar49 = *(long *)param_9;
        if (6 < iVar40 - 1U) {
          uVar44 = (ulong)(iVar40 - 1U) + 1;
          uVar52 = uVar44 & 0xfffffffffffffff8;
          uVar54 = (uVar52 - 8 >> 3) + 1;
          uVar57 = (ulong)((uint)uVar54 & 7);
          if (uVar52 - 8 < 0x38) {
            lVar45 = 0;
          }
          else {
            uVar54 = uVar54 & 0xfffffffffffffff8;
            lVar45 = 0;
            do {
              puVar1 = (undefined4 *)(lVar49 + lVar45 * 4);
              *puVar1 = uVar6;
              puVar1[1] = uVar6;
              puVar1[2] = uVar6;
              puVar1[3] = uVar6;
              puVar1 = (undefined4 *)(lVar49 + 0x10 + lVar45 * 4);
              *puVar1 = uVar6;
              puVar1[1] = uVar6;
              puVar1[2] = uVar6;
              puVar1[3] = uVar6;
              puVar1 = (undefined4 *)(lVar49 + 0x20 + lVar45 * 4);
              *puVar1 = uVar6;
              puVar1[1] = uVar6;
              puVar1[2] = uVar6;
              puVar1[3] = uVar6;
              puVar1 = (undefined4 *)(lVar49 + 0x30 + lVar45 * 4);
              *puVar1 = uVar6;
              puVar1[1] = uVar6;
              puVar1[2] = uVar6;
              puVar1[3] = uVar6;
              puVar1 = (undefined4 *)(lVar49 + 0x40 + lVar45 * 4);
              *puVar1 = uVar6;
              puVar1[1] = uVar6;
              puVar1[2] = uVar6;
              puVar1[3] = uVar6;
              puVar1 = (undefined4 *)(lVar49 + 0x50 + lVar45 * 4);
              *puVar1 = uVar6;
              puVar1[1] = uVar6;
              puVar1[2] = uVar6;
              puVar1[3] = uVar6;
              puVar1 = (undefined4 *)(lVar49 + 0x60 + lVar45 * 4);
              *puVar1 = uVar6;
              puVar1[1] = uVar6;
              puVar1[2] = uVar6;
              puVar1[3] = uVar6;
              puVar1 = (undefined4 *)(lVar49 + 0x70 + lVar45 * 4);
              *puVar1 = uVar6;
              puVar1[1] = uVar6;
              puVar1[2] = uVar6;
              puVar1[3] = uVar6;
              puVar1 = (undefined4 *)(lVar49 + 0x80 + lVar45 * 4);
              *puVar1 = uVar6;
              puVar1[1] = uVar6;
              puVar1[2] = uVar6;
              puVar1[3] = uVar6;
              puVar1 = (undefined4 *)(lVar49 + 0x90 + lVar45 * 4);
              *puVar1 = uVar6;
              puVar1[1] = uVar6;
              puVar1[2] = uVar6;
              puVar1[3] = uVar6;
              puVar1 = (undefined4 *)(lVar49 + 0xa0 + lVar45 * 4);
              *puVar1 = uVar6;
              puVar1[1] = uVar6;
              puVar1[2] = uVar6;
              puVar1[3] = uVar6;
              puVar1 = (undefined4 *)(lVar49 + 0xb0 + lVar45 * 4);
              *puVar1 = uVar6;
              puVar1[1] = uVar6;
              puVar1[2] = uVar6;
              puVar1[3] = uVar6;
              puVar1 = (undefined4 *)(lVar49 + 0xc0 + lVar45 * 4);
              *puVar1 = uVar6;
              puVar1[1] = uVar6;
              puVar1[2] = uVar6;
              puVar1[3] = uVar6;
              puVar1 = (undefined4 *)(lVar49 + 0xd0 + lVar45 * 4);
              *puVar1 = uVar6;
              puVar1[1] = uVar6;
              puVar1[2] = uVar6;
              puVar1[3] = uVar6;
              puVar1 = (undefined4 *)(lVar49 + 0xe0 + lVar45 * 4);
              *puVar1 = uVar6;
              puVar1[1] = uVar6;
              puVar1[2] = uVar6;
              puVar1[3] = uVar6;
              puVar1 = (undefined4 *)(lVar49 + 0xf0 + lVar45 * 4);
              *puVar1 = uVar6;
              puVar1[1] = uVar6;
              puVar1[2] = uVar6;
              puVar1[3] = uVar6;
              lVar45 = lVar45 + 0x40;
              uVar54 = uVar54 - 8;
            } while (uVar54 != 0);
          }
          if (uVar57 != 0) {
            lVar45 = lVar49 + lVar45 * 4;
            lVar48 = 0;
            do {
              puVar1 = (undefined4 *)(lVar45 + lVar48);
              *puVar1 = uVar6;
              puVar1[1] = uVar6;
              puVar1[2] = uVar6;
              puVar1[3] = uVar6;
              puVar1 = (undefined4 *)(lVar45 + 0x10 + lVar48);
              *puVar1 = uVar6;
              puVar1[1] = uVar6;
              puVar1[2] = uVar6;
              puVar1[3] = uVar6;
              lVar48 = lVar48 + 0x20;
            } while (uVar57 * 0x20 != lVar48);
          }
          if (uVar44 == uVar52) goto LAB_005b34e4;
          iVar40 = iVar40 - (int)uVar52;
          lVar49 = lVar49 + uVar52 * 4;
        }
        lVar45 = 0;
        do {
          *(undefined4 *)(lVar49 + lVar45 * 4) = uVar6;
          lVar45 = lVar45 + 1;
        } while (iVar40 != (int)lVar45);
      }
      goto LAB_005b34e4;
    }
    break;
  case 3:
    if (param_8[5] == 0) {
      pcVar55 = "expr: ex_eval: not enough nodes 1\n";
      goto code_r0x005b3b65;
    }
    uVar57 = *param_8;
    puVar41 = (undefined *)(uVar57 - 0xe0015);
    if (((undefined *)0x2 < puVar41) && (param_8[9] == 0)) {
      pcVar55 = "expr: ex_eval: not enough nodes 2\n";
      goto code_r0x005b3b65;
    }
    puVar36 = param_8 + 4;
    if (0xb000d < (long)uVar57) {
      if ((long)uVar57 < 0xd0013) {
        if ((long)uVar57 < 0xc0010) {
          if (uVar57 != 0xb000e) {
            if (uVar57 != 0xb000f) goto code_r0x005b4c3c;
            puVar36 = ex_eval(0,param_2,param_3,param_4,param_5,param_6,param_7,puVar36,
                              (float *)&local_68,puVar51,param_11,param_12);
            puVar36 = ex_eval(extraout_XMM0_Qa_05,param_2,param_3,param_4,param_5,param_6,param_7,
                              puVar36,(float *)&local_88,puVar51,param_11,param_12);
            uVar236 = in_XMM3._0_8_;
            uVar63 = in_XMM2._0_8_;
            uVar44 = extraout_XMM0_02._0_8_;
            if (lStack_60 - 0xeU < 2) {
              if (*(long *)(param_9 + 2) == 0xf) {
                pfVar38 = *(float **)param_9;
              }
              else {
                if (*(long *)(param_9 + 2) == 0xe) goto LAB_005c5996;
                param_9[2] = 2.10195e-44;
                param_9[3] = 0.0;
                pfVar38 = malloc((long)*(int *)(param_7 + 0x28f8) << 2);
                uVar236 = in_XMM3._0_8_;
                uVar44 = extraout_XMM0_10._0_8_;
                uVar63 = in_XMM2._0_8_;
                *(float **)param_9 = pfVar38;
              }
              uVar56 = _UNK_0065257c;
              uVar50 = _UNK_00652578;
              uVar43 = _UNK_00652574;
              uVar34 = _DAT_00652570;
              if (lStack_80 - 0xeU < 2) {
                uVar7 = *(uint *)(param_7 + 0x28f8);
                if (0 < (int)uVar7) {
                  uVar57 = (ulong)(uVar7 - 1);
                  uVar44 = 0;
                  pfVar53 = local_68;
                  pfVar47 = local_88;
                  if (2 < uVar7 - 1) {
                    if ((local_68 + uVar57 + 1 <= pfVar38 || pfVar38 + uVar57 + 1 <= local_68) &&
                       (local_88 + uVar57 + 1 <= pfVar38 || pfVar38 + uVar57 + 1 <= local_88)) {
                      uVar44 = uVar57 + 1 & 0x1fffffffc;
                      uVar52 = (uVar44 - 4 >> 2) + 1;
                      if (uVar44 - 4 == 0) {
                        lVar49 = 0;
                      }
                      else {
                        uVar54 = uVar52 & 0x7ffffffffffffffe;
                        lVar49 = 0;
                        do {
                          pfVar47 = local_68 + lVar49;
                          auVar181._0_4_ = (int)*pfVar47;
                          auVar181._4_4_ = (int)pfVar47[1];
                          auVar181._8_4_ = (int)pfVar47[2];
                          auVar181._12_4_ = (uint)pfVar47[3];
                          pfVar47 = local_88 + lVar49;
                          fVar62 = pfVar47[2];
                          auVar179._4_4_ = (int)(float)((int)pfVar47[1] * 0x800000 + uVar43);
                          auVar179._12_4_ = (int)(float)((int)pfVar47[3] * 0x800000 + uVar56);
                          auVar179._0_4_ = auVar179._4_4_;
                          auVar179._8_4_ = auVar179._12_4_;
                          pfVar53 = pfVar38 + lVar49;
                          *pfVar53 = (float)(auVar181._0_4_ *
                                            (int)(float)((int)*pfVar47 * 0x800000 + uVar34));
                          pfVar53[1] = (float)(auVar179._4_4_ * auVar181._4_4_);
                          pfVar53[2] = (float)(int)((auVar181._8_8_ & 0xffffffff) *
                                                   (ulong)(uint)(int)(float)((int)fVar62 * 0x800000
                                                                            + uVar50));
                          pfVar53[3] = (float)(int)((auVar179._8_8_ & 0xffffffff) *
                                                   (ulong)auVar181._12_4_);
                          pfVar47 = local_68 + lVar49 + 4;
                          auVar110._0_4_ = (int)*pfVar47;
                          auVar110._4_4_ = (int)pfVar47[1];
                          auVar110._8_4_ = (int)pfVar47[2];
                          auVar110._12_4_ = (uint)pfVar47[3];
                          pfVar47 = local_88 + lVar49 + 4;
                          fVar62 = pfVar47[2];
                          auVar180._4_4_ = (int)(float)((int)pfVar47[1] * 0x800000 + uVar43);
                          auVar180._12_4_ = (int)(float)((int)pfVar47[3] * 0x800000 + uVar56);
                          auVar180._0_4_ = auVar180._4_4_;
                          auVar180._8_4_ = auVar180._12_4_;
                          pfVar53 = pfVar38 + lVar49 + 4;
                          *pfVar53 = (float)(auVar110._0_4_ *
                                            (int)(float)((int)*pfVar47 * 0x800000 + uVar34));
                          pfVar53[1] = (float)(auVar180._4_4_ * auVar110._4_4_);
                          pfVar53[2] = (float)(int)((auVar110._8_8_ & 0xffffffff) *
                                                   (ulong)(uint)(int)(float)((int)fVar62 * 0x800000
                                                                            + uVar50));
                          pfVar53[3] = (float)(int)((auVar180._8_8_ & 0xffffffff) *
                                                   (ulong)auVar110._12_4_);
                          lVar49 = lVar49 + 8;
                          uVar54 = uVar54 - 2;
                        } while (uVar54 != 0);
                      }
                      if ((uVar52 & 1) != 0) {
                        pfVar47 = local_68 + lVar49;
                        auVar86._0_4_ = (int)*pfVar47;
                        auVar86._4_4_ = (int)pfVar47[1];
                        auVar86._8_4_ = (int)pfVar47[2];
                        auVar86._12_4_ = (uint)pfVar47[3];
                        pfVar47 = local_88 + lVar49;
                        fVar62 = (float)((int)pfVar47[2] * 0x800000 + _UNK_00652578);
                        auVar133._4_4_ = (int)(float)((int)pfVar47[1] * 0x800000 + _UNK_00652574);
                        auVar133._12_4_ = (int)(float)((int)pfVar47[3] * 0x800000 + _UNK_0065257c);
                        auVar133._0_4_ = auVar133._4_4_;
                        auVar133._8_4_ = auVar133._12_4_;
                        pfVar53 = pfVar38 + lVar49;
                        *pfVar53 = (float)(auVar86._0_4_ *
                                          (int)(float)((int)*pfVar47 * 0x800000 + _DAT_00652570));
                        pfVar53[1] = (float)(auVar133._4_4_ * auVar86._4_4_);
                        pfVar53[2] = (float)(int)((auVar86._8_8_ & 0xffffffff) *
                                                 (ulong)(uint)(int)fVar62);
                        pfVar53[3] = (float)(int)((auVar133._8_8_ & 0xffffffff) *
                                                 (ulong)auVar86._12_4_);
                      }
                      if (uVar57 + 1 == uVar44) goto LAB_005b73c2;
                      pfVar38 = pfVar38 + uVar44;
                      pfVar47 = local_88 + uVar44;
                      pfVar53 = local_68 + uVar44;
                    }
                  }
                  uVar43 = (uint)uVar44 + 1;
                  uVar34 = (uint)uVar44;
                  if ((uVar7 & 1) != 0) {
                    *pfVar38 = (float)((int)*pfVar53 << ((byte)(int)*pfVar47 & 0x1f));
                    pfVar38 = pfVar38 + 1;
                    pfVar47 = pfVar47 + 1;
                    pfVar53 = pfVar53 + 1;
                    uVar34 = uVar43;
                  }
                  if (uVar7 != uVar43) {
                    lVar49 = 0;
                    do {
                      pfVar38[lVar49] =
                           (float)((int)pfVar53[lVar49] << ((byte)(int)pfVar47[lVar49] & 0x1f));
                      pfVar38[lVar49 + 1] =
                           (float)((int)pfVar53[lVar49 + 1] <<
                                  ((byte)(int)pfVar47[lVar49 + 1] & 0x1f));
                      lVar49 = lVar49 + 2;
                    } while (uVar7 - uVar34 != (int)lVar49);
                  }
                }
                goto LAB_005b73c2;
              }
              if (lStack_80 == 2) {
                uVar34 = *(uint *)(param_7 + 0x28f8);
                if (0 < (int)uVar34) {
                  uVar43 = (uint)local_88._0_4_;
                  uVar44 = (ulong)(uVar34 - 1);
                  uVar57 = 0;
                  pfVar47 = local_68;
                  if ((6 < uVar34 - 1) &&
                     ((local_68 + uVar44 + 1 <= pfVar38 || (pfVar38 + uVar44 + 1 <= local_68)))) {
                    uVar57 = uVar44 + 1 & 0xfffffffffffffff8;
                    uVar52 = (uVar57 - 8 >> 3) + 1;
                    if (uVar57 - 8 == 0) {
                      lVar49 = 0;
                    }
                    else {
                      uVar54 = uVar52 & 0x3ffffffffffffffe;
                      lVar49 = 0;
                      do {
                        pfVar47 = local_68 + lVar49;
                        fVar62 = pfVar47[1];
                        fVar232 = pfVar47[2];
                        fVar233 = pfVar47[3];
                        pfVar53 = local_68 + lVar49 + 4;
                        fVar234 = *pfVar53;
                        fVar235 = pfVar53[1];
                        fVar264 = pfVar53[2];
                        fVar265 = pfVar53[3];
                        uVar103 = (ulong)uVar43;
                        pfVar53 = pfVar38 + lVar49;
                        *pfVar53 = (float)((int)*pfVar47 << uVar103);
                        pfVar53[1] = (float)((int)fVar62 << uVar103);
                        pfVar53[2] = (float)((int)fVar232 << uVar103);
                        pfVar53[3] = (float)((int)fVar233 << uVar103);
                        pfVar47 = pfVar38 + lVar49 + 4;
                        *pfVar47 = (float)((int)fVar234 << uVar103);
                        pfVar47[1] = (float)((int)fVar235 << uVar103);
                        pfVar47[2] = (float)((int)fVar264 << uVar103);
                        pfVar47[3] = (float)((int)fVar265 << uVar103);
                        pfVar47 = local_68 + lVar49 + 8;
                        fVar62 = pfVar47[1];
                        fVar232 = pfVar47[2];
                        fVar233 = pfVar47[3];
                        pfVar53 = local_68 + lVar49 + 0xc;
                        auVar243._0_4_ = (float)((int)*pfVar53 << uVar103);
                        auVar243._4_4_ = (float)((int)pfVar53[1] << uVar103);
                        auVar243._8_4_ = (float)((int)pfVar53[2] << uVar103);
                        auVar243._12_4_ = (float)((int)pfVar53[3] << uVar103);
                        pfVar53 = pfVar38 + lVar49 + 8;
                        *pfVar53 = (float)((int)*pfVar47 << uVar103);
                        pfVar53[1] = (float)((int)fVar62 << uVar103);
                        pfVar53[2] = (float)((int)fVar232 << uVar103);
                        pfVar53[3] = (float)((int)fVar233 << uVar103);
                        *(undefined1 (*) [16])(pfVar38 + lVar49 + 0xc) = auVar243;
                        lVar49 = lVar49 + 0x10;
                        uVar54 = uVar54 - 2;
                      } while (uVar54 != 0);
                    }
                    if ((uVar52 & 1) != 0) {
                      pfVar47 = local_68 + lVar49;
                      pfVar53 = local_68 + lVar49 + 4;
                      fVar62 = *pfVar53;
                      fVar232 = pfVar53[1];
                      fVar233 = pfVar53[2];
                      fVar234 = pfVar53[3];
                      uVar52 = (ulong)uVar43;
                      auVar99._0_4_ = (float)((int)*pfVar47 << uVar52);
                      auVar99._4_4_ = (float)((int)pfVar47[1] << uVar52);
                      auVar99._8_4_ = (float)((int)pfVar47[2] << uVar52);
                      auVar99._12_4_ = (float)((int)pfVar47[3] << uVar52);
                      *(undefined1 (*) [16])(pfVar38 + lVar49) = auVar99;
                      pfVar47 = pfVar38 + lVar49 + 4;
                      *pfVar47 = (float)((int)fVar62 << uVar52);
                      pfVar47[1] = (float)((int)fVar232 << uVar52);
                      pfVar47[2] = (float)((int)fVar233 << uVar52);
                      pfVar47[3] = (float)((int)fVar234 << uVar52);
                    }
                    if (uVar44 + 1 == uVar57) goto LAB_005b73c2;
                    pfVar38 = pfVar38 + uVar57;
                    pfVar47 = local_68 + uVar57;
                  }
                  uVar56 = (uint)uVar57;
                  uVar50 = ~uVar56;
                  bVar39 = (byte)uVar43;
                  if ((uVar34 & 3) != 0) {
                    iVar40 = 0;
                    do {
                      *pfVar38 = (float)((int)*pfVar47 << (bVar39 & 0x1f));
                      pfVar38 = pfVar38 + 1;
                      pfVar47 = pfVar47 + 1;
                      iVar40 = iVar40 + -1;
                    } while (-(uVar34 & 3) != iVar40);
                    uVar56 = uVar56 - iVar40;
                  }
                  if (2 < uVar50 + uVar34) {
                    lVar49 = 0;
                    do {
                      pfVar38[lVar49] = (float)((int)pfVar47[lVar49] << (bVar39 & 0x1f));
                      pfVar38[lVar49 + 1] = (float)((int)pfVar47[lVar49 + 1] << (bVar39 & 0x1f));
                      pfVar38[lVar49 + 2] = (float)((int)pfVar47[lVar49 + 2] << (bVar39 & 0x1f));
                      pfVar38[lVar49 + 3] = (float)((int)pfVar47[lVar49 + 3] << (bVar39 & 0x1f));
                      lVar49 = lVar49 + 4;
                    } while (uVar34 - uVar56 != (int)lVar49);
                  }
                }
                goto LAB_005b73c2;
              }
              if (lStack_80 == 1) {
                uVar34 = *(uint *)(param_7 + 0x28f8);
                if (0 < (int)uVar34) {
                  uVar43 = (uint)(float)(long)local_88;
                  uVar44 = (ulong)(uVar34 - 1);
                  uVar57 = 0;
                  pfVar47 = local_68;
                  if ((6 < uVar34 - 1) &&
                     ((local_68 + uVar44 + 1 <= pfVar38 || (pfVar38 + uVar44 + 1 <= local_68)))) {
                    uVar57 = uVar44 + 1 & 0xfffffffffffffff8;
                    uVar52 = (uVar57 - 8 >> 3) + 1;
                    if (uVar57 - 8 == 0) {
                      lVar49 = 0;
                    }
                    else {
                      uVar54 = uVar52 & 0x3ffffffffffffffe;
                      lVar49 = 0;
                      do {
                        pfVar47 = local_68 + lVar49;
                        fVar62 = pfVar47[1];
                        fVar232 = pfVar47[2];
                        fVar233 = pfVar47[3];
                        pfVar53 = local_68 + lVar49 + 4;
                        fVar234 = *pfVar53;
                        fVar235 = pfVar53[1];
                        fVar264 = pfVar53[2];
                        fVar265 = pfVar53[3];
                        uVar103 = (ulong)uVar43;
                        pfVar53 = pfVar38 + lVar49;
                        *pfVar53 = (float)((int)*pfVar47 << uVar103);
                        pfVar53[1] = (float)((int)fVar62 << uVar103);
                        pfVar53[2] = (float)((int)fVar232 << uVar103);
                        pfVar53[3] = (float)((int)fVar233 << uVar103);
                        pfVar47 = pfVar38 + lVar49 + 4;
                        *pfVar47 = (float)((int)fVar234 << uVar103);
                        pfVar47[1] = (float)((int)fVar235 << uVar103);
                        pfVar47[2] = (float)((int)fVar264 << uVar103);
                        pfVar47[3] = (float)((int)fVar265 << uVar103);
                        pfVar47 = local_68 + lVar49 + 8;
                        fVar62 = pfVar47[1];
                        fVar232 = pfVar47[2];
                        fVar233 = pfVar47[3];
                        pfVar53 = local_68 + lVar49 + 0xc;
                        auVar240._0_4_ = (float)((int)*pfVar53 << uVar103);
                        auVar240._4_4_ = (float)((int)pfVar53[1] << uVar103);
                        auVar240._8_4_ = (float)((int)pfVar53[2] << uVar103);
                        auVar240._12_4_ = (float)((int)pfVar53[3] << uVar103);
                        pfVar53 = pfVar38 + lVar49 + 8;
                        *pfVar53 = (float)((int)*pfVar47 << uVar103);
                        pfVar53[1] = (float)((int)fVar62 << uVar103);
                        pfVar53[2] = (float)((int)fVar232 << uVar103);
                        pfVar53[3] = (float)((int)fVar233 << uVar103);
                        *(undefined1 (*) [16])(pfVar38 + lVar49 + 0xc) = auVar240;
                        lVar49 = lVar49 + 0x10;
                        uVar54 = uVar54 - 2;
                      } while (uVar54 != 0);
                    }
                    if ((uVar52 & 1) != 0) {
                      pfVar47 = local_68 + lVar49;
                      pfVar53 = local_68 + lVar49 + 4;
                      fVar62 = *pfVar53;
                      fVar232 = pfVar53[1];
                      fVar233 = pfVar53[2];
                      fVar234 = pfVar53[3];
                      uVar52 = (ulong)uVar43;
                      auVar88._0_4_ = (float)((int)*pfVar47 << uVar52);
                      auVar88._4_4_ = (float)((int)pfVar47[1] << uVar52);
                      auVar88._8_4_ = (float)((int)pfVar47[2] << uVar52);
                      auVar88._12_4_ = (float)((int)pfVar47[3] << uVar52);
                      *(undefined1 (*) [16])(pfVar38 + lVar49) = auVar88;
                      pfVar47 = pfVar38 + lVar49 + 4;
                      *pfVar47 = (float)((int)fVar62 << uVar52);
                      pfVar47[1] = (float)((int)fVar232 << uVar52);
                      pfVar47[2] = (float)((int)fVar233 << uVar52);
                      pfVar47[3] = (float)((int)fVar234 << uVar52);
                    }
                    if (uVar44 + 1 == uVar57) goto LAB_005b73c2;
                    pfVar38 = pfVar38 + uVar57;
                    pfVar47 = local_68 + uVar57;
                  }
                  uVar56 = (uint)uVar57;
                  uVar50 = ~uVar56;
                  bVar39 = (byte)uVar43;
                  if ((uVar34 & 3) != 0) {
                    iVar40 = 0;
                    do {
                      *pfVar38 = (float)((int)*pfVar47 << (bVar39 & 0x1f));
                      pfVar38 = pfVar38 + 1;
                      pfVar47 = pfVar47 + 1;
                      iVar40 = iVar40 + -1;
                    } while (-(uVar34 & 3) != iVar40);
                    uVar56 = uVar56 - iVar40;
                  }
                  if (2 < uVar50 + uVar34) {
                    lVar49 = 0;
                    do {
                      pfVar38[lVar49] = (float)((int)pfVar47[lVar49] << (bVar39 & 0x1f));
                      pfVar38[lVar49 + 1] = (float)((int)pfVar47[lVar49 + 1] << (bVar39 & 0x1f));
                      pfVar38[lVar49 + 2] = (float)((int)pfVar47[lVar49 + 2] << (bVar39 & 0x1f));
                      pfVar38[lVar49 + 3] = (float)((int)pfVar47[lVar49 + 3] << (bVar39 & 0x1f));
                      lVar49 = lVar49 + 4;
                    } while (uVar34 - uVar56 != (int)lVar49);
                  }
                }
                goto LAB_005b73c2;
              }
LAB_005b728a:
              pcVar55 = "expr: ex_eval(%d): bad right type %ld\n";
              puVar36 = (ulong *)0x0;
              lVar49 = lStack_80;
            }
            else {
              fVar62 = local_88._0_4_;
              if (lStack_60 == 2) {
                if (lStack_80 - 0xeU < 2) {
                  if (*(long *)(param_9 + 2) != 0xf) {
                    if (*(long *)(param_9 + 2) == 0xe) goto LAB_005c5996;
                    param_9[2] = 2.10195e-44;
                    param_9[3] = 0.0;
                    pvVar37 = malloc((long)*(int *)(param_7 + 0x28f8) << 2);
                    *(void **)param_9 = pvVar37;
                  }
                  uVar7 = _UNK_0065257c;
                  uVar56 = _UNK_00652578;
                  uVar50 = _UNK_00652574;
                  uVar43 = _DAT_00652570;
                  uVar34 = *(uint *)(param_7 + 0x28f8);
                  if (0 < (int)uVar34) {
                    pfVar38 = *(float **)param_9;
                    uVar59 = (uint)local_68._0_4_;
                    uVar44 = (ulong)(uVar34 - 1);
                    uVar57 = 0;
                    pfVar47 = local_88;
                    if ((2 < uVar34 - 1) &&
                       ((local_88 + uVar44 + 1 <= pfVar38 || (pfVar38 + uVar44 + 1 <= local_88)))) {
                      uVar57 = uVar44 + 1 & 0x1fffffffc;
                      auVar77._4_4_ = uVar59;
                      auVar77._0_4_ = uVar59;
                      auVar77._8_4_ = uVar59;
                      auVar77._12_4_ = uVar59;
                      uVar52 = (uVar57 - 4 >> 2) + 1;
                      uVar54 = (ulong)((uint)uVar52 & 3);
                      uVar103 = auVar77._8_8_;
                      if (uVar57 - 4 < 0xc) {
                        lVar49 = 0;
                      }
                      else {
                        uVar52 = uVar52 & 0xfffffffffffffffc;
                        lVar49 = 0;
                        do {
                          pfVar47 = local_88 + lVar49;
                          fVar62 = pfVar47[2];
                          auVar254._4_4_ = (int)(float)((int)pfVar47[1] * 0x800000 + uVar50);
                          auVar254._12_4_ = (int)(float)((int)pfVar47[3] * 0x800000 + uVar7);
                          auVar254._0_4_ = auVar254._4_4_;
                          auVar254._8_4_ = auVar254._12_4_;
                          pfVar53 = pfVar38 + lVar49;
                          *pfVar53 = (float)(int)(uVar59 * (int)(float)((int)*pfVar47 * 0x800000 +
                                                                       uVar43));
                          pfVar53[1] = (float)(int)(auVar254._4_4_ * uVar59);
                          pfVar53[2] = (float)(int)((uVar103 & 0xffffffff) *
                                                   (ulong)(uint)(int)(float)((int)fVar62 * 0x800000
                                                                            + uVar56));
                          pfVar53[3] = (float)(int)((auVar254._8_8_ & 0xffffffff) * (ulong)uVar59);
                          pfVar47 = local_88 + lVar49 + 4;
                          fVar62 = pfVar47[2];
                          auVar255._4_4_ = (int)(float)((int)pfVar47[1] * 0x800000 + uVar50);
                          auVar255._12_4_ = (int)(float)((int)pfVar47[3] * 0x800000 + uVar7);
                          auVar255._0_4_ = auVar255._4_4_;
                          auVar255._8_4_ = auVar255._12_4_;
                          pfVar53 = pfVar38 + lVar49 + 4;
                          *pfVar53 = (float)(int)(uVar59 * (int)(float)((int)*pfVar47 * 0x800000 +
                                                                       uVar43));
                          pfVar53[1] = (float)(int)(auVar255._4_4_ * uVar59);
                          pfVar53[2] = (float)(int)((uVar103 & 0xffffffff) *
                                                   (ulong)(uint)(int)(float)((int)fVar62 * 0x800000
                                                                            + uVar56));
                          pfVar53[3] = (float)(int)((auVar255._8_8_ & 0xffffffff) * (ulong)uVar59);
                          pfVar47 = local_88 + lVar49 + 8;
                          fVar62 = pfVar47[2];
                          auVar256._4_4_ = (int)(float)((int)pfVar47[1] * 0x800000 + uVar50);
                          auVar256._12_4_ = (int)(float)((int)pfVar47[3] * 0x800000 + uVar7);
                          auVar256._0_4_ = auVar256._4_4_;
                          auVar256._8_4_ = auVar256._12_4_;
                          pfVar53 = pfVar38 + lVar49 + 8;
                          *pfVar53 = (float)(int)(uVar59 * (int)(float)((int)*pfVar47 * 0x800000 +
                                                                       uVar43));
                          pfVar53[1] = (float)(int)(auVar256._4_4_ * uVar59);
                          pfVar53[2] = (float)(int)((uVar103 & 0xffffffff) *
                                                   (ulong)(uint)(int)(float)((int)fVar62 * 0x800000
                                                                            + uVar56));
                          pfVar53[3] = (float)(int)((auVar256._8_8_ & 0xffffffff) * (ulong)uVar59);
                          pfVar47 = local_88 + lVar49 + 0xc;
                          fVar62 = pfVar47[2];
                          auVar257._4_4_ = (int)(float)((int)pfVar47[1] * 0x800000 + uVar50);
                          auVar257._12_4_ = (int)(float)((int)pfVar47[3] * 0x800000 + uVar7);
                          auVar257._0_4_ = auVar257._4_4_;
                          auVar257._8_4_ = auVar257._12_4_;
                          pfVar53 = pfVar38 + lVar49 + 0xc;
                          *pfVar53 = (float)(int)(uVar59 * (int)(float)((int)*pfVar47 * 0x800000 +
                                                                       uVar43));
                          pfVar53[1] = (float)(int)(auVar257._4_4_ * uVar59);
                          pfVar53[2] = (float)(int)((uVar103 & 0xffffffff) *
                                                   (ulong)(uint)(int)(float)((int)fVar62 * 0x800000
                                                                            + uVar56));
                          pfVar53[3] = (float)(int)((auVar257._8_8_ & 0xffffffff) * (ulong)uVar59);
                          lVar49 = lVar49 + 0x10;
                          uVar52 = uVar52 - 4;
                        } while (uVar52 != 0);
                      }
                      uVar7 = _UNK_0065257c;
                      uVar56 = _UNK_00652578;
                      uVar50 = _UNK_00652574;
                      uVar43 = _DAT_00652570;
                      if (uVar54 != 0) {
                        lVar45 = 0;
                        do {
                          pfVar47 = (float *)((long)local_88 + lVar45 + lVar49 * 4);
                          fVar62 = pfVar47[2];
                          auVar258._4_4_ = (int)(float)((int)pfVar47[1] * 0x800000 + uVar50);
                          auVar258._12_4_ = (int)(float)((int)pfVar47[3] * 0x800000 + uVar7);
                          auVar258._0_4_ = auVar258._4_4_;
                          auVar258._8_4_ = auVar258._12_4_;
                          pfVar53 = (float *)((long)pfVar38 + lVar45 + lVar49 * 4);
                          *pfVar53 = (float)(int)(uVar59 * (int)(float)((int)*pfVar47 * 0x800000 +
                                                                       uVar43));
                          pfVar53[1] = (float)(int)(auVar258._4_4_ * uVar59);
                          pfVar53[2] = (float)(int)((uVar103 & 0xffffffff) *
                                                   (ulong)(uint)(int)(float)((int)fVar62 * 0x800000
                                                                            + uVar56));
                          pfVar53[3] = (float)(int)((auVar258._8_8_ & 0xffffffff) * (ulong)uVar59);
                          lVar45 = lVar45 + 0x10;
                        } while (uVar54 * 0x10 != lVar45);
                      }
                      if (uVar44 + 1 == uVar57) goto LAB_005b73c2;
                      pfVar38 = pfVar38 + uVar57;
                      pfVar47 = local_88 + uVar57;
                    }
                    uVar50 = (uint)uVar57;
                    uVar43 = ~uVar50;
                    if ((uVar34 & 3) != 0) {
                      iVar40 = 0;
                      do {
                        *pfVar38 = (float)(int)(uVar59 << ((byte)(int)*pfVar47 & 0x1f));
                        pfVar38 = pfVar38 + 1;
                        pfVar47 = pfVar47 + 1;
                        iVar40 = iVar40 + -1;
                      } while (-(uVar34 & 3) != iVar40);
                      uVar50 = uVar50 - iVar40;
                    }
                    if (2 < uVar43 + uVar34) {
                      lVar49 = 0;
                      do {
                        pfVar38[lVar49] =
                             (float)(int)(uVar59 << ((byte)(int)pfVar47[lVar49] & 0x1f));
                        pfVar38[lVar49 + 1] =
                             (float)(int)(uVar59 << ((byte)(int)pfVar47[lVar49 + 1] & 0x1f));
                        pfVar38[lVar49 + 2] =
                             (float)(int)(uVar59 << ((byte)(int)pfVar47[lVar49 + 2] & 0x1f));
                        pfVar38[lVar49 + 3] =
                             (float)(int)(uVar59 << ((byte)(int)pfVar47[lVar49 + 3] & 0x1f));
                        lVar49 = lVar49 + 4;
                      } while (uVar34 - uVar50 != (int)lVar49);
                    }
                  }
                  goto LAB_005b73c2;
                }
                fVar232 = local_68._0_4_;
                if (lStack_80 == 2) {
                  if (*(long *)(param_9 + 2) == 0xf) {
                    iVar40 = *(int *)(param_7 + 0x28f8);
                    if (0 < iVar40) {
                      fVar62 = (float)((int)local_68._0_4_ << ((byte)(int)fVar62 & 0x1f));
                      lVar49 = *(long *)param_9;
                      uVar44 = 0;
                      if (6 < iVar40 - 1U) {
                        uVar52 = (ulong)(iVar40 - 1U) + 1;
                        uVar44 = uVar52 & 0xfffffffffffffff8;
                        uVar54 = (uVar44 - 8 >> 3) + 1;
                        uVar57 = (ulong)((uint)uVar54 & 7);
                        if (uVar44 - 8 < 0x38) {
                          lVar45 = 0;
                        }
                        else {
                          uVar54 = uVar54 & 0xfffffffffffffff8;
                          lVar45 = 0;
                          do {
                            pfVar38 = (float *)(lVar49 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            lVar45 = lVar45 + 0x40;
                            uVar54 = uVar54 - 8;
                          } while (uVar54 != 0);
                        }
                        if (uVar57 != 0) {
                          lVar45 = lVar49 + lVar45 * 4;
                          lVar48 = 0;
                          do {
                            pfVar38 = (float *)(lVar45 + lVar48);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            lVar48 = lVar48 + 0x20;
                          } while (uVar57 * 0x20 != lVar48);
                        }
                        if (uVar52 == uVar44) goto LAB_005b73c2;
                        lVar49 = lVar49 + uVar44 * 4;
                      }
                      lVar45 = 0;
                      do {
                        *(float *)(lVar49 + lVar45 * 4) = fVar62;
                        lVar45 = lVar45 + 1;
                      } while (iVar40 - (int)uVar44 != (int)lVar45);
                    }
                    goto LAB_005b73c2;
                  }
                  param_9[2] = 2.8026e-45;
                  param_9[3] = 0.0;
LAB_005bd010:
                  bVar39 = (byte)(int)fVar62;
                }
                else {
                  if (lStack_80 != 1) goto LAB_005b728a;
                  if (*(long *)(param_9 + 2) == 0xf) {
                    iVar40 = *(int *)(param_7 + 0x28f8);
                    if (0 < iVar40) {
                      fVar62 = (float)((int)local_68._0_4_ << ((byte)local_88 & 0x1f));
                      lVar49 = *(long *)param_9;
                      uVar44 = 0;
                      if (6 < iVar40 - 1U) {
                        uVar52 = (ulong)(iVar40 - 1U) + 1;
                        uVar44 = uVar52 & 0xfffffffffffffff8;
                        uVar54 = (uVar44 - 8 >> 3) + 1;
                        uVar57 = (ulong)((uint)uVar54 & 7);
                        if (uVar44 - 8 < 0x38) {
                          lVar45 = 0;
                        }
                        else {
                          uVar54 = uVar54 & 0xfffffffffffffff8;
                          lVar45 = 0;
                          do {
                            pfVar38 = (float *)(lVar49 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            lVar45 = lVar45 + 0x40;
                            uVar54 = uVar54 - 8;
                          } while (uVar54 != 0);
                        }
                        if (uVar57 != 0) {
                          lVar45 = lVar49 + lVar45 * 4;
                          lVar48 = 0;
                          do {
                            pfVar38 = (float *)(lVar45 + lVar48);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            lVar48 = lVar48 + 0x20;
                          } while (uVar57 * 0x20 != lVar48);
                        }
                        if (uVar52 == uVar44) goto LAB_005b73c2;
                        lVar49 = lVar49 + uVar44 * 4;
                      }
                      lVar45 = 0;
                      do {
                        *(float *)(lVar49 + lVar45 * 4) = fVar62;
                        lVar45 = lVar45 + 1;
                      } while (iVar40 - (int)uVar44 != (int)lVar45);
                    }
                    goto LAB_005b73c2;
                  }
                  param_9[2] = 2.8026e-45;
                  param_9[3] = 0.0;
                  bVar39 = (byte)local_88;
                }
                uVar34 = (int)fVar232 << (bVar39 & 0x1f);
                goto LAB_005bd0bf;
              }
              if (lStack_60 == 1) {
                if (lStack_80 - 0xeU < 2) {
                  if (*(long *)(param_9 + 2) != 0xf) {
                    if (*(long *)(param_9 + 2) == 0xe) goto LAB_005c5996;
                    param_9[2] = 2.10195e-44;
                    param_9[3] = 0.0;
                    pvVar37 = malloc((long)*(int *)(param_7 + 0x28f8) << 2);
                    *(void **)param_9 = pvVar37;
                  }
                  uVar7 = _UNK_0065257c;
                  uVar56 = _UNK_00652578;
                  uVar50 = _UNK_00652574;
                  uVar43 = _DAT_00652570;
                  uVar34 = *(uint *)(param_7 + 0x28f8);
                  if (0 < (int)uVar34) {
                    pfVar38 = *(float **)param_9;
                    uVar59 = (uint)(float)(long)local_68;
                    uVar44 = (ulong)(uVar34 - 1);
                    uVar57 = 0;
                    pfVar47 = local_88;
                    if ((2 < uVar34 - 1) &&
                       ((local_88 + uVar44 + 1 <= pfVar38 || (pfVar38 + uVar44 + 1 <= local_88)))) {
                      uVar57 = uVar44 + 1 & 0x1fffffffc;
                      auVar72._4_4_ = uVar59;
                      auVar72._0_4_ = uVar59;
                      auVar72._8_4_ = uVar59;
                      auVar72._12_4_ = uVar59;
                      uVar52 = (uVar57 - 4 >> 2) + 1;
                      uVar54 = (ulong)((uint)uVar52 & 3);
                      uVar103 = auVar72._8_8_;
                      if (uVar57 - 4 < 0xc) {
                        lVar49 = 0;
                      }
                      else {
                        uVar52 = uVar52 & 0xfffffffffffffffc;
                        lVar49 = 0;
                        do {
                          pfVar47 = local_88 + lVar49;
                          fVar62 = pfVar47[2];
                          auVar244._4_4_ = (int)(float)((int)pfVar47[1] * 0x800000 + uVar50);
                          auVar244._12_4_ = (int)(float)((int)pfVar47[3] * 0x800000 + uVar7);
                          auVar244._0_4_ = auVar244._4_4_;
                          auVar244._8_4_ = auVar244._12_4_;
                          pfVar53 = pfVar38 + lVar49;
                          *pfVar53 = (float)(int)(uVar59 * (int)(float)((int)*pfVar47 * 0x800000 +
                                                                       uVar43));
                          pfVar53[1] = (float)(int)(auVar244._4_4_ * uVar59);
                          pfVar53[2] = (float)(int)((uVar103 & 0xffffffff) *
                                                   (ulong)(uint)(int)(float)((int)fVar62 * 0x800000
                                                                            + uVar56));
                          pfVar53[3] = (float)(int)((auVar244._8_8_ & 0xffffffff) * (ulong)uVar59);
                          pfVar47 = local_88 + lVar49 + 4;
                          fVar62 = pfVar47[2];
                          auVar245._4_4_ = (int)(float)((int)pfVar47[1] * 0x800000 + uVar50);
                          auVar245._12_4_ = (int)(float)((int)pfVar47[3] * 0x800000 + uVar7);
                          auVar245._0_4_ = auVar245._4_4_;
                          auVar245._8_4_ = auVar245._12_4_;
                          pfVar53 = pfVar38 + lVar49 + 4;
                          *pfVar53 = (float)(int)(uVar59 * (int)(float)((int)*pfVar47 * 0x800000 +
                                                                       uVar43));
                          pfVar53[1] = (float)(int)(auVar245._4_4_ * uVar59);
                          pfVar53[2] = (float)(int)((uVar103 & 0xffffffff) *
                                                   (ulong)(uint)(int)(float)((int)fVar62 * 0x800000
                                                                            + uVar56));
                          pfVar53[3] = (float)(int)((auVar245._8_8_ & 0xffffffff) * (ulong)uVar59);
                          pfVar47 = local_88 + lVar49 + 8;
                          fVar62 = pfVar47[2];
                          auVar246._4_4_ = (int)(float)((int)pfVar47[1] * 0x800000 + uVar50);
                          auVar246._12_4_ = (int)(float)((int)pfVar47[3] * 0x800000 + uVar7);
                          auVar246._0_4_ = auVar246._4_4_;
                          auVar246._8_4_ = auVar246._12_4_;
                          pfVar53 = pfVar38 + lVar49 + 8;
                          *pfVar53 = (float)(int)(uVar59 * (int)(float)((int)*pfVar47 * 0x800000 +
                                                                       uVar43));
                          pfVar53[1] = (float)(int)(auVar246._4_4_ * uVar59);
                          pfVar53[2] = (float)(int)((uVar103 & 0xffffffff) *
                                                   (ulong)(uint)(int)(float)((int)fVar62 * 0x800000
                                                                            + uVar56));
                          pfVar53[3] = (float)(int)((auVar246._8_8_ & 0xffffffff) * (ulong)uVar59);
                          pfVar47 = local_88 + lVar49 + 0xc;
                          fVar62 = pfVar47[2];
                          auVar247._4_4_ = (int)(float)((int)pfVar47[1] * 0x800000 + uVar50);
                          auVar247._12_4_ = (int)(float)((int)pfVar47[3] * 0x800000 + uVar7);
                          auVar247._0_4_ = auVar247._4_4_;
                          auVar247._8_4_ = auVar247._12_4_;
                          pfVar53 = pfVar38 + lVar49 + 0xc;
                          *pfVar53 = (float)(int)(uVar59 * (int)(float)((int)*pfVar47 * 0x800000 +
                                                                       uVar43));
                          pfVar53[1] = (float)(int)(auVar247._4_4_ * uVar59);
                          pfVar53[2] = (float)(int)((uVar103 & 0xffffffff) *
                                                   (ulong)(uint)(int)(float)((int)fVar62 * 0x800000
                                                                            + uVar56));
                          pfVar53[3] = (float)(int)((auVar247._8_8_ & 0xffffffff) * (ulong)uVar59);
                          lVar49 = lVar49 + 0x10;
                          uVar52 = uVar52 - 4;
                        } while (uVar52 != 0);
                      }
                      uVar7 = _UNK_0065257c;
                      uVar56 = _UNK_00652578;
                      uVar50 = _UNK_00652574;
                      uVar43 = _DAT_00652570;
                      if (uVar54 != 0) {
                        lVar45 = 0;
                        do {
                          pfVar47 = (float *)((long)local_88 + lVar45 + lVar49 * 4);
                          fVar62 = pfVar47[2];
                          auVar248._4_4_ = (int)(float)((int)pfVar47[1] * 0x800000 + uVar50);
                          auVar248._12_4_ = (int)(float)((int)pfVar47[3] * 0x800000 + uVar7);
                          auVar248._0_4_ = auVar248._4_4_;
                          auVar248._8_4_ = auVar248._12_4_;
                          pfVar53 = (float *)((long)pfVar38 + lVar45 + lVar49 * 4);
                          *pfVar53 = (float)(int)(uVar59 * (int)(float)((int)*pfVar47 * 0x800000 +
                                                                       uVar43));
                          pfVar53[1] = (float)(int)(auVar248._4_4_ * uVar59);
                          pfVar53[2] = (float)(int)((uVar103 & 0xffffffff) *
                                                   (ulong)(uint)(int)(float)((int)fVar62 * 0x800000
                                                                            + uVar56));
                          pfVar53[3] = (float)(int)((auVar248._8_8_ & 0xffffffff) * (ulong)uVar59);
                          lVar45 = lVar45 + 0x10;
                        } while (uVar54 * 0x10 != lVar45);
                      }
                      if (uVar44 + 1 == uVar57) goto LAB_005b73c2;
                      pfVar38 = pfVar38 + uVar57;
                      pfVar47 = local_88 + uVar57;
                    }
                    uVar50 = (uint)uVar57;
                    uVar43 = ~uVar50;
                    if ((uVar34 & 3) != 0) {
                      iVar40 = 0;
                      do {
                        *pfVar38 = (float)(int)(uVar59 << ((byte)(int)*pfVar47 & 0x1f));
                        pfVar38 = pfVar38 + 1;
                        pfVar47 = pfVar47 + 1;
                        iVar40 = iVar40 + -1;
                      } while (-(uVar34 & 3) != iVar40);
                      uVar50 = uVar50 - iVar40;
                    }
                    if (2 < uVar43 + uVar34) {
                      lVar49 = 0;
                      do {
                        pfVar38[lVar49] =
                             (float)(int)(uVar59 << ((byte)(int)pfVar47[lVar49] & 0x1f));
                        pfVar38[lVar49 + 1] =
                             (float)(int)(uVar59 << ((byte)(int)pfVar47[lVar49 + 1] & 0x1f));
                        pfVar38[lVar49 + 2] =
                             (float)(int)(uVar59 << ((byte)(int)pfVar47[lVar49 + 2] & 0x1f));
                        pfVar38[lVar49 + 3] =
                             (float)(int)(uVar59 << ((byte)(int)pfVar47[lVar49 + 3] & 0x1f));
                        lVar49 = lVar49 + 4;
                      } while (uVar34 - uVar50 != (int)lVar49);
                    }
                  }
                  goto LAB_005b73c2;
                }
                if (lStack_80 == 2) {
                  if (*(long *)(param_9 + 2) == 0xf) {
                    iVar40 = *(int *)(param_7 + 0x28f8);
                    if (0 < iVar40) {
                      fVar62 = (float)((int)(float)(long)local_68 << ((byte)(int)fVar62 & 0x1f));
                      lVar49 = *(long *)param_9;
                      uVar44 = 0;
                      if (6 < iVar40 - 1U) {
                        uVar52 = (ulong)(iVar40 - 1U) + 1;
                        uVar44 = uVar52 & 0xfffffffffffffff8;
                        uVar54 = (uVar44 - 8 >> 3) + 1;
                        uVar57 = (ulong)((uint)uVar54 & 7);
                        if (uVar44 - 8 < 0x38) {
                          lVar45 = 0;
                        }
                        else {
                          uVar54 = uVar54 & 0xfffffffffffffff8;
                          lVar45 = 0;
                          do {
                            pfVar38 = (float *)(lVar49 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            lVar45 = lVar45 + 0x40;
                            uVar54 = uVar54 - 8;
                          } while (uVar54 != 0);
                        }
                        if (uVar57 != 0) {
                          lVar45 = lVar49 + lVar45 * 4;
                          lVar48 = 0;
                          do {
                            pfVar38 = (float *)(lVar45 + lVar48);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            lVar48 = lVar48 + 0x20;
                          } while (uVar57 * 0x20 != lVar48);
                        }
                        if (uVar52 == uVar44) goto LAB_005b73c2;
                        lVar49 = lVar49 + uVar44 * 4;
                      }
                      lVar45 = 0;
                      do {
                        *(float *)(lVar49 + lVar45 * 4) = fVar62;
                        lVar45 = lVar45 + 1;
                      } while (iVar40 - (int)uVar44 != (int)lVar45);
                    }
                    goto LAB_005b73c2;
                  }
                  param_9[2] = 2.8026e-45;
                  param_9[3] = 0.0;
                  fVar232 = (float)(long)local_68;
                  goto LAB_005bd010;
                }
                if (lStack_80 == 1) {
                  if (*(long *)(param_9 + 2) == 0xf) {
                    iVar40 = *(int *)(param_7 + 0x28f8);
                    if (0 < iVar40) {
                      fVar62 = (float)((int)local_68._0_4_ << ((byte)local_88 & 0x1f));
                      lVar49 = *(long *)param_9;
                      uVar44 = 0;
                      if (6 < iVar40 - 1U) {
                        uVar52 = (ulong)(iVar40 - 1U) + 1;
                        uVar44 = uVar52 & 0xfffffffffffffff8;
                        uVar54 = (uVar44 - 8 >> 3) + 1;
                        uVar57 = (ulong)((uint)uVar54 & 7);
                        if (uVar44 - 8 < 0x38) {
                          lVar45 = 0;
                        }
                        else {
                          uVar54 = uVar54 & 0xfffffffffffffff8;
                          lVar45 = 0;
                          do {
                            pfVar38 = (float *)(lVar49 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            lVar45 = lVar45 + 0x40;
                            uVar54 = uVar54 - 8;
                          } while (uVar54 != 0);
                        }
                        if (uVar57 != 0) {
                          lVar45 = lVar49 + lVar45 * 4;
                          lVar48 = 0;
                          do {
                            pfVar38 = (float *)(lVar45 + lVar48);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            lVar48 = lVar48 + 0x20;
                          } while (uVar57 * 0x20 != lVar48);
                        }
                        if (uVar52 == uVar44) goto LAB_005b73c2;
                        lVar49 = lVar49 + uVar44 * 4;
                      }
                      lVar45 = 0;
                      do {
                        *(float *)(lVar49 + lVar45 * 4) = fVar62;
                        lVar45 = lVar45 + 1;
                      } while (iVar40 - (int)uVar44 != (int)lVar45);
                    }
                    goto LAB_005b73c2;
                  }
                  param_9[2] = 1.4013e-45;
                  param_9[3] = 0.0;
                  uVar34 = (int)local_68._0_4_ << ((byte)local_88 & 0x1f);
                  goto LAB_005bcb8a;
                }
                goto LAB_005b728a;
              }
              pcVar55 = "expr: ex_eval(%d): bad left type %ld\n";
              lVar49 = lStack_60;
            }
            uVar46 = 0x542;
            goto LAB_005b73bb;
          }
          puVar36 = ex_eval(0,param_2,param_3,param_4,param_5,param_6,param_7,puVar36,
                            (float *)&local_68,puVar51,param_11,param_12);
          puVar36 = ex_eval(extraout_XMM0_Qa_16,param_2,param_3,param_4,param_5,param_6,param_7,
                            puVar36,(float *)&local_88,puVar51,param_11,param_12);
          uVar236 = in_XMM3._0_8_;
          uVar63 = in_XMM2._0_8_;
          uVar44 = extraout_XMM0_05._0_8_;
          if (lStack_60 - 0xeU < 2) {
            if (*(long *)(param_9 + 2) == 0xf) {
              pfVar38 = *(float **)param_9;
            }
            else {
              if (*(long *)(param_9 + 2) == 0xe) goto LAB_005c5996;
              param_9[2] = 2.10195e-44;
              param_9[3] = 0.0;
              pfVar38 = malloc((long)*(int *)(param_7 + 0x28f8) << 2);
              uVar44 = extraout_XMM0_12._0_8_;
              uVar236 = in_XMM3._0_8_;
              *(float **)param_9 = pfVar38;
            }
            uVar63 = in_XMM2._0_8_;
            if (lStack_80 - 0xeU < 2) {
              uVar34 = *(uint *)(param_7 + 0x28f8);
              if (0 < (int)uVar34) {
                uVar57 = (ulong)(uVar34 - 1);
                uVar44 = 0;
                pfVar53 = local_68;
                pfVar47 = local_88;
                if (2 < uVar34 - 1) {
                  if ((local_68 + uVar57 + 1 <= pfVar38 || pfVar38 + uVar57 + 1 <= local_68) &&
                     (local_88 + uVar57 + 1 <= pfVar38 || pfVar38 + uVar57 + 1 <= local_88)) {
                    uVar44 = uVar57 + 1 & 0x1fffffffc;
                    uVar52 = (uVar44 - 4 >> 2) + 1;
                    if (uVar44 - 4 == 0) {
                      lVar49 = 0;
                    }
                    else {
                      uVar54 = uVar52 & 0x7ffffffffffffffe;
                      lVar49 = 0;
                      do {
                        pfVar47 = local_68 + lVar49;
                        fVar62 = pfVar47[1];
                        fVar232 = pfVar47[2];
                        fVar233 = pfVar47[3];
                        pfVar53 = local_88 + lVar49;
                        auVar111._0_4_ = (int)*pfVar53;
                        auVar111._4_4_ = (int)pfVar53[1];
                        auVar111._8_4_ = (int)pfVar53[2];
                        auVar111._12_4_ = (int)pfVar53[3];
                        auVar238 = pshuflw(in_XMM2,auVar111,0xfe);
                        auVar268 = pshuflw(auVar238,auVar111,0x54);
                        auVar112._4_4_ = auVar111._12_4_;
                        auVar112._0_4_ = auVar111._8_4_;
                        auVar112._8_4_ = auVar111._8_4_;
                        auVar112._12_4_ = auVar111._12_4_;
                        auVar181 = pshuflw(auVar268,auVar112,0xfe);
                        auVar172 = pshuflw(auVar112,auVar112,0x54);
                        pfVar53 = pfVar38 + lVar49;
                        *pfVar53 = (float)((int)*pfVar47 >> auVar268._0_4_);
                        pfVar53[1] = (float)((int)fVar62 >> auVar238._0_4_);
                        pfVar53[2] = (float)((int)fVar232 >> auVar172._0_4_);
                        pfVar53[3] = (float)((int)fVar233 >> auVar181._0_4_);
                        pfVar47 = local_68 + lVar49 + 4;
                        fVar62 = pfVar47[1];
                        fVar232 = pfVar47[2];
                        fVar233 = pfVar47[3];
                        pfVar53 = local_88 + lVar49 + 4;
                        auVar113._0_4_ = (int)*pfVar53;
                        auVar113._4_4_ = (int)pfVar53[1];
                        auVar113._8_4_ = (int)pfVar53[2];
                        auVar113._12_4_ = (int)pfVar53[3];
                        auVar238 = pshuflw(auVar181,auVar113,0xfe);
                        auVar268 = pshuflw(auVar238,auVar113,0x54);
                        auVar114._4_4_ = auVar113._12_4_;
                        auVar114._0_4_ = auVar113._8_4_;
                        auVar114._8_4_ = auVar113._8_4_;
                        auVar114._12_4_ = auVar113._12_4_;
                        in_XMM2 = pshuflw(auVar268,auVar114,0xfe);
                        auVar172 = pshuflw(auVar114,auVar114,0x54);
                        pfVar53 = pfVar38 + lVar49 + 4;
                        *pfVar53 = (float)((int)*pfVar47 >> auVar268._0_4_);
                        pfVar53[1] = (float)((int)fVar62 >> auVar238._0_4_);
                        pfVar53[2] = (float)((int)fVar232 >> auVar172._0_4_);
                        pfVar53[3] = (float)((int)fVar233 >> in_XMM2._0_4_);
                        lVar49 = lVar49 + 8;
                        uVar54 = uVar54 - 2;
                      } while (uVar54 != 0);
                    }
                    if ((uVar52 & 1) != 0) {
                      pfVar47 = local_68 + lVar49;
                      fVar62 = pfVar47[1];
                      fVar232 = pfVar47[2];
                      fVar233 = pfVar47[3];
                      pfVar53 = local_88 + lVar49;
                      auVar134._0_4_ = (int)*pfVar53;
                      auVar134._4_4_ = (int)pfVar53[1];
                      auVar134._8_4_ = (int)pfVar53[2];
                      auVar134._12_4_ = (int)pfVar53[3];
                      auVar238 = pshuflw(in_XMM2,auVar134,0xfe);
                      auVar268 = pshuflw(auVar238,auVar134,0x54);
                      auVar135._4_4_ = auVar134._12_4_;
                      auVar135._0_4_ = auVar134._8_4_;
                      auVar135._8_4_ = auVar134._8_4_;
                      auVar135._12_4_ = auVar134._12_4_;
                      auVar181 = pshuflw(auVar268,auVar135,0xfe);
                      auVar172 = pshuflw(auVar135,auVar135,0x54);
                      pfVar53 = pfVar38 + lVar49;
                      *pfVar53 = (float)((int)*pfVar47 >> auVar268._0_4_);
                      pfVar53[1] = (float)((int)fVar62 >> auVar238._0_4_);
                      pfVar53[2] = (float)((int)fVar232 >> auVar172._0_4_);
                      pfVar53[3] = (float)((int)fVar233 >> auVar181._0_4_);
                    }
                    if (uVar57 + 1 == uVar44) goto LAB_005b73c2;
                    pfVar38 = pfVar38 + uVar44;
                    pfVar47 = local_88 + uVar44;
                    pfVar53 = local_68 + uVar44;
                  }
                }
                uVar50 = (uint)uVar44 + 1;
                uVar43 = (uint)uVar44;
                if ((uVar34 & 1) != 0) {
                  *pfVar38 = (float)((int)*pfVar53 >> ((byte)(int)*pfVar47 & 0x1f));
                  pfVar38 = pfVar38 + 1;
                  pfVar47 = pfVar47 + 1;
                  pfVar53 = pfVar53 + 1;
                  uVar43 = uVar50;
                }
                if (uVar34 != uVar50) {
                  lVar49 = 0;
                  do {
                    pfVar38[lVar49] =
                         (float)((int)pfVar53[lVar49] >> ((byte)(int)pfVar47[lVar49] & 0x1f));
                    pfVar38[lVar49 + 1] =
                         (float)((int)pfVar53[lVar49 + 1] >> ((byte)(int)pfVar47[lVar49 + 1] & 0x1f)
                                );
                    lVar49 = lVar49 + 2;
                  } while (uVar34 - uVar43 != (int)lVar49);
                }
              }
              goto LAB_005b73c2;
            }
            if (lStack_80 == 2) {
              uVar34 = *(uint *)(param_7 + 0x28f8);
              if (0 < (int)uVar34) {
                iVar40 = (int)local_88._0_4_;
                uVar44 = (ulong)(uVar34 - 1);
                uVar57 = 0;
                pfVar47 = local_68;
                if ((6 < uVar34 - 1) &&
                   ((local_68 + uVar44 + 1 <= pfVar38 || (pfVar38 + uVar44 + 1 <= local_68)))) {
                  uVar57 = uVar44 + 1 & 0xfffffffffffffff8;
                  uVar52 = (uVar57 - 8 >> 3) + 1;
                  if (uVar57 - 8 == 0) {
                    lVar49 = 0;
                  }
                  else {
                    uVar54 = uVar52 & 0x3ffffffffffffffe;
                    lVar49 = 0;
                    do {
                      pfVar47 = local_68 + lVar49;
                      fVar62 = pfVar47[1];
                      fVar232 = pfVar47[2];
                      fVar233 = pfVar47[3];
                      pfVar53 = local_68 + lVar49 + 4;
                      fVar234 = *pfVar53;
                      fVar235 = pfVar53[1];
                      fVar264 = pfVar53[2];
                      fVar265 = pfVar53[3];
                      pfVar53 = pfVar38 + lVar49;
                      *pfVar53 = (float)((int)*pfVar47 >> iVar40);
                      pfVar53[1] = (float)((int)fVar62 >> iVar40);
                      pfVar53[2] = (float)((int)fVar232 >> iVar40);
                      pfVar53[3] = (float)((int)fVar233 >> iVar40);
                      pfVar47 = pfVar38 + lVar49 + 4;
                      *pfVar47 = (float)((int)fVar234 >> iVar40);
                      pfVar47[1] = (float)((int)fVar235 >> iVar40);
                      pfVar47[2] = (float)((int)fVar264 >> iVar40);
                      pfVar47[3] = (float)((int)fVar265 >> iVar40);
                      pfVar47 = local_68 + lVar49 + 8;
                      fVar62 = pfVar47[1];
                      fVar232 = pfVar47[2];
                      fVar233 = pfVar47[3];
                      pfVar53 = local_68 + lVar49 + 0xc;
                      fVar234 = *pfVar53;
                      fVar235 = pfVar53[1];
                      fVar264 = pfVar53[2];
                      fVar265 = pfVar53[3];
                      pfVar53 = pfVar38 + lVar49 + 8;
                      *pfVar53 = (float)((int)*pfVar47 >> iVar40);
                      pfVar53[1] = (float)((int)fVar62 >> iVar40);
                      pfVar53[2] = (float)((int)fVar232 >> iVar40);
                      pfVar53[3] = (float)((int)fVar233 >> iVar40);
                      pfVar47 = pfVar38 + lVar49 + 0xc;
                      *pfVar47 = (float)((int)fVar234 >> iVar40);
                      pfVar47[1] = (float)((int)fVar235 >> iVar40);
                      pfVar47[2] = (float)((int)fVar264 >> iVar40);
                      pfVar47[3] = (float)((int)fVar265 >> iVar40);
                      lVar49 = lVar49 + 0x10;
                      uVar54 = uVar54 - 2;
                    } while (uVar54 != 0);
                  }
                  if ((uVar52 & 1) != 0) {
                    pfVar47 = local_68 + lVar49;
                    pfVar53 = local_68 + lVar49 + 4;
                    fVar62 = *pfVar53;
                    fVar232 = pfVar53[1];
                    fVar233 = pfVar53[2];
                    fVar234 = pfVar53[3];
                    auVar101._0_4_ = (float)((int)*pfVar47 >> iVar40);
                    auVar101._4_4_ = (float)((int)pfVar47[1] >> iVar40);
                    auVar101._8_4_ = (float)((int)pfVar47[2] >> iVar40);
                    auVar101._12_4_ = (float)((int)pfVar47[3] >> iVar40);
                    *(undefined1 (*) [16])(pfVar38 + lVar49) = auVar101;
                    pfVar47 = pfVar38 + lVar49 + 4;
                    *pfVar47 = (float)((int)fVar62 >> iVar40);
                    pfVar47[1] = (float)((int)fVar232 >> iVar40);
                    pfVar47[2] = (float)((int)fVar233 >> iVar40);
                    pfVar47[3] = (float)((int)fVar234 >> iVar40);
                  }
                  if (uVar44 + 1 == uVar57) goto LAB_005b73c2;
                  pfVar38 = pfVar38 + uVar57;
                  pfVar47 = local_68 + uVar57;
                }
                uVar50 = (uint)uVar57;
                uVar43 = ~uVar50;
                bVar39 = (byte)iVar40;
                if ((uVar34 & 3) != 0) {
                  iVar40 = 0;
                  do {
                    *pfVar38 = (float)((int)*pfVar47 >> (bVar39 & 0x1f));
                    pfVar38 = pfVar38 + 1;
                    pfVar47 = pfVar47 + 1;
                    iVar40 = iVar40 + -1;
                  } while (-(uVar34 & 3) != iVar40);
                  uVar50 = uVar50 - iVar40;
                }
                if (2 < uVar43 + uVar34) {
                  lVar49 = 0;
                  do {
                    pfVar38[lVar49] = (float)((int)pfVar47[lVar49] >> (bVar39 & 0x1f));
                    pfVar38[lVar49 + 1] = (float)((int)pfVar47[lVar49 + 1] >> (bVar39 & 0x1f));
                    pfVar38[lVar49 + 2] = (float)((int)pfVar47[lVar49 + 2] >> (bVar39 & 0x1f));
                    pfVar38[lVar49 + 3] = (float)((int)pfVar47[lVar49 + 3] >> (bVar39 & 0x1f));
                    lVar49 = lVar49 + 4;
                  } while (uVar34 - uVar50 != (int)lVar49);
                }
              }
              goto LAB_005b73c2;
            }
            if (lStack_80 == 1) {
              uVar34 = *(uint *)(param_7 + 0x28f8);
              if (0 < (int)uVar34) {
                iVar40 = (int)(float)(long)local_88;
                uVar44 = (ulong)(uVar34 - 1);
                uVar57 = 0;
                pfVar47 = local_68;
                if ((6 < uVar34 - 1) &&
                   ((local_68 + uVar44 + 1 <= pfVar38 || (pfVar38 + uVar44 + 1 <= local_68)))) {
                  uVar57 = uVar44 + 1 & 0xfffffffffffffff8;
                  uVar52 = (uVar57 - 8 >> 3) + 1;
                  if (uVar57 - 8 == 0) {
                    lVar49 = 0;
                  }
                  else {
                    uVar54 = uVar52 & 0x3ffffffffffffffe;
                    lVar49 = 0;
                    do {
                      pfVar47 = local_68 + lVar49;
                      fVar62 = pfVar47[1];
                      fVar232 = pfVar47[2];
                      fVar233 = pfVar47[3];
                      pfVar53 = local_68 + lVar49 + 4;
                      fVar234 = *pfVar53;
                      fVar235 = pfVar53[1];
                      fVar264 = pfVar53[2];
                      fVar265 = pfVar53[3];
                      pfVar53 = pfVar38 + lVar49;
                      *pfVar53 = (float)((int)*pfVar47 >> iVar40);
                      pfVar53[1] = (float)((int)fVar62 >> iVar40);
                      pfVar53[2] = (float)((int)fVar232 >> iVar40);
                      pfVar53[3] = (float)((int)fVar233 >> iVar40);
                      pfVar47 = pfVar38 + lVar49 + 4;
                      *pfVar47 = (float)((int)fVar234 >> iVar40);
                      pfVar47[1] = (float)((int)fVar235 >> iVar40);
                      pfVar47[2] = (float)((int)fVar264 >> iVar40);
                      pfVar47[3] = (float)((int)fVar265 >> iVar40);
                      pfVar47 = local_68 + lVar49 + 8;
                      fVar62 = pfVar47[1];
                      fVar232 = pfVar47[2];
                      fVar233 = pfVar47[3];
                      pfVar53 = local_68 + lVar49 + 0xc;
                      fVar234 = *pfVar53;
                      fVar235 = pfVar53[1];
                      fVar264 = pfVar53[2];
                      fVar265 = pfVar53[3];
                      pfVar53 = pfVar38 + lVar49 + 8;
                      *pfVar53 = (float)((int)*pfVar47 >> iVar40);
                      pfVar53[1] = (float)((int)fVar62 >> iVar40);
                      pfVar53[2] = (float)((int)fVar232 >> iVar40);
                      pfVar53[3] = (float)((int)fVar233 >> iVar40);
                      pfVar47 = pfVar38 + lVar49 + 0xc;
                      *pfVar47 = (float)((int)fVar234 >> iVar40);
                      pfVar47[1] = (float)((int)fVar235 >> iVar40);
                      pfVar47[2] = (float)((int)fVar264 >> iVar40);
                      pfVar47[3] = (float)((int)fVar265 >> iVar40);
                      lVar49 = lVar49 + 0x10;
                      uVar54 = uVar54 - 2;
                    } while (uVar54 != 0);
                  }
                  if ((uVar52 & 1) != 0) {
                    pfVar47 = local_68 + lVar49;
                    pfVar53 = local_68 + lVar49 + 4;
                    fVar62 = *pfVar53;
                    fVar232 = pfVar53[1];
                    fVar233 = pfVar53[2];
                    fVar234 = pfVar53[3];
                    auVar90._0_4_ = (float)((int)*pfVar47 >> iVar40);
                    auVar90._4_4_ = (float)((int)pfVar47[1] >> iVar40);
                    auVar90._8_4_ = (float)((int)pfVar47[2] >> iVar40);
                    auVar90._12_4_ = (float)((int)pfVar47[3] >> iVar40);
                    *(undefined1 (*) [16])(pfVar38 + lVar49) = auVar90;
                    pfVar47 = pfVar38 + lVar49 + 4;
                    *pfVar47 = (float)((int)fVar62 >> iVar40);
                    pfVar47[1] = (float)((int)fVar232 >> iVar40);
                    pfVar47[2] = (float)((int)fVar233 >> iVar40);
                    pfVar47[3] = (float)((int)fVar234 >> iVar40);
                  }
                  if (uVar44 + 1 == uVar57) goto LAB_005b73c2;
                  pfVar38 = pfVar38 + uVar57;
                  pfVar47 = local_68 + uVar57;
                }
                uVar50 = (uint)uVar57;
                uVar43 = ~uVar50;
                bVar39 = (byte)iVar40;
                if ((uVar34 & 3) != 0) {
                  iVar40 = 0;
                  do {
                    *pfVar38 = (float)((int)*pfVar47 >> (bVar39 & 0x1f));
                    pfVar38 = pfVar38 + 1;
                    pfVar47 = pfVar47 + 1;
                    iVar40 = iVar40 + -1;
                  } while (-(uVar34 & 3) != iVar40);
                  uVar50 = uVar50 - iVar40;
                }
                if (2 < uVar43 + uVar34) {
                  lVar49 = 0;
                  do {
                    pfVar38[lVar49] = (float)((int)pfVar47[lVar49] >> (bVar39 & 0x1f));
                    pfVar38[lVar49 + 1] = (float)((int)pfVar47[lVar49 + 1] >> (bVar39 & 0x1f));
                    pfVar38[lVar49 + 2] = (float)((int)pfVar47[lVar49 + 2] >> (bVar39 & 0x1f));
                    pfVar38[lVar49 + 3] = (float)((int)pfVar47[lVar49 + 3] >> (bVar39 & 0x1f));
                    lVar49 = lVar49 + 4;
                  } while (uVar34 - uVar50 != (int)lVar49);
                }
              }
              goto LAB_005b73c2;
            }
          }
          else {
            fVar62 = local_88._0_4_;
            if (lStack_60 == 2) {
              if (lStack_80 - 0xeU < 2) {
                if (*(long *)(param_9 + 2) != 0xf) {
                  if (*(long *)(param_9 + 2) == 0xe) goto LAB_005c5996;
                  param_9[2] = 2.10195e-44;
                  param_9[3] = 0.0;
                  pvVar37 = malloc((long)*(int *)(param_7 + 0x28f8) << 2);
                  *(void **)param_9 = pvVar37;
                }
                uVar34 = *(uint *)(param_7 + 0x28f8);
                if (0 < (int)uVar34) {
                  pfVar38 = *(float **)param_9;
                  iVar40 = (int)local_68._0_4_;
                  uVar44 = (ulong)(uVar34 - 1);
                  uVar57 = 0;
                  pfVar47 = local_88;
                  if ((2 < uVar34 - 1) &&
                     ((local_88 + uVar44 + 1 <= pfVar38 || (pfVar38 + uVar44 + 1 <= local_88)))) {
                    uVar57 = uVar44 + 1 & 0x1fffffffc;
                    auVar79._4_4_ = iVar40;
                    auVar79._0_4_ = iVar40;
                    auVar79._8_4_ = iVar40;
                    auVar79._12_4_ = iVar40;
                    uVar52 = (uVar57 - 4 >> 2) + 1;
                    uVar54 = (ulong)((uint)uVar52 & 3);
                    uVar63 = auVar79._8_8_;
                    if (uVar57 - 4 < 0xc) {
                      lVar49 = 0;
                    }
                    else {
                      uVar52 = uVar52 & 0xfffffffffffffffc;
                      lVar49 = 0;
                      do {
                        pfVar47 = local_88 + lVar49;
                        auVar146._0_4_ = (int)*pfVar47;
                        auVar146._4_4_ = (int)pfVar47[1];
                        auVar146._8_4_ = (int)pfVar47[2];
                        auVar146._12_4_ = (int)pfVar47[3];
                        auVar238 = pshuflw(in_XMM2,auVar146,0xfe);
                        auVar268 = pshuflw(auVar238,auVar146,0x54);
                        auVar147._4_4_ = auVar146._12_4_;
                        auVar147._0_4_ = auVar146._8_4_;
                        auVar147._8_4_ = auVar146._8_4_;
                        auVar147._12_4_ = auVar146._12_4_;
                        auVar172 = pshuflw(auVar268,auVar147,0xfe);
                        iVar42 = iVar40 >> auVar172._0_4_;
                        auVar18._4_8_ = uVar63;
                        auVar18._0_4_ = iVar42;
                        auVar259._0_8_ = auVar18._0_8_ << 0x20;
                        auVar259._8_4_ = iVar42;
                        auVar259._12_4_ = iVar42;
                        auVar172 = pshuflw(auVar147,auVar147,0x54);
                        iVar58 = iVar40 >> auVar172._0_4_;
                        auVar19._4_8_ = uVar63;
                        auVar19._0_4_ = iVar58;
                        auVar208._0_8_ = auVar19._0_8_ << 0x20;
                        auVar208._8_4_ = iVar58;
                        auVar208._12_4_ = iVar58;
                        auVar209._8_8_ = auVar259._8_8_;
                        auVar209._0_8_ = auVar208._8_8_;
                        pfVar47 = pfVar38 + lVar49;
                        *pfVar47 = (float)(iVar40 >> auVar268._0_4_);
                        pfVar47[1] = (float)(iVar40 >> auVar238._0_4_);
                        pfVar47[2] = (float)iVar58;
                        pfVar47[3] = (float)iVar42;
                        pfVar47 = local_88 + lVar49 + 4;
                        auVar148._0_4_ = (int)*pfVar47;
                        auVar148._4_4_ = (int)pfVar47[1];
                        auVar148._8_4_ = (int)pfVar47[2];
                        auVar148._12_4_ = (int)pfVar47[3];
                        auVar238 = pshuflw(auVar209,auVar148,0xfe);
                        auVar268 = pshuflw(auVar238,auVar148,0x54);
                        auVar149._4_4_ = auVar148._12_4_;
                        auVar149._0_4_ = auVar148._8_4_;
                        auVar149._8_4_ = auVar148._8_4_;
                        auVar149._12_4_ = auVar148._12_4_;
                        auVar172 = pshuflw(auVar268,auVar149,0xfe);
                        iVar42 = iVar40 >> auVar172._0_4_;
                        auVar20._4_8_ = uVar63;
                        auVar20._0_4_ = iVar42;
                        auVar260._0_8_ = auVar20._0_8_ << 0x20;
                        auVar260._8_4_ = iVar42;
                        auVar260._12_4_ = iVar42;
                        auVar172 = pshuflw(auVar149,auVar149,0x54);
                        iVar58 = iVar40 >> auVar172._0_4_;
                        auVar21._4_8_ = uVar63;
                        auVar21._0_4_ = iVar58;
                        auVar210._0_8_ = auVar21._0_8_ << 0x20;
                        auVar210._8_4_ = iVar58;
                        auVar210._12_4_ = iVar58;
                        auVar211._8_8_ = auVar260._8_8_;
                        auVar211._0_8_ = auVar210._8_8_;
                        pfVar47 = pfVar38 + lVar49 + 4;
                        *pfVar47 = (float)(iVar40 >> auVar268._0_4_);
                        pfVar47[1] = (float)(iVar40 >> auVar238._0_4_);
                        pfVar47[2] = (float)iVar58;
                        pfVar47[3] = (float)iVar42;
                        pfVar47 = local_88 + lVar49 + 8;
                        auVar150._0_4_ = (int)*pfVar47;
                        auVar150._4_4_ = (int)pfVar47[1];
                        auVar150._8_4_ = (int)pfVar47[2];
                        auVar150._12_4_ = (int)pfVar47[3];
                        auVar238 = pshuflw(auVar211,auVar150,0xfe);
                        auVar268 = pshuflw(auVar238,auVar150,0x54);
                        auVar151._4_4_ = auVar150._12_4_;
                        auVar151._0_4_ = auVar150._8_4_;
                        auVar151._8_4_ = auVar150._8_4_;
                        auVar151._12_4_ = auVar150._12_4_;
                        auVar172 = pshuflw(auVar268,auVar151,0xfe);
                        iVar42 = iVar40 >> auVar172._0_4_;
                        auVar22._4_8_ = uVar63;
                        auVar22._0_4_ = iVar42;
                        auVar261._0_8_ = auVar22._0_8_ << 0x20;
                        auVar261._8_4_ = iVar42;
                        auVar261._12_4_ = iVar42;
                        auVar172 = pshuflw(auVar151,auVar151,0x54);
                        iVar58 = iVar40 >> auVar172._0_4_;
                        auVar23._4_8_ = uVar63;
                        auVar23._0_4_ = iVar58;
                        auVar212._0_8_ = auVar23._0_8_ << 0x20;
                        auVar212._8_4_ = iVar58;
                        auVar212._12_4_ = iVar58;
                        auVar213._8_8_ = auVar261._8_8_;
                        auVar213._0_8_ = auVar212._8_8_;
                        pfVar47 = pfVar38 + lVar49 + 8;
                        *pfVar47 = (float)(iVar40 >> auVar268._0_4_);
                        pfVar47[1] = (float)(iVar40 >> auVar238._0_4_);
                        pfVar47[2] = (float)iVar58;
                        pfVar47[3] = (float)iVar42;
                        pfVar47 = local_88 + lVar49 + 0xc;
                        auVar152._0_4_ = (int)*pfVar47;
                        auVar152._4_4_ = (int)pfVar47[1];
                        auVar152._8_4_ = (int)pfVar47[2];
                        auVar152._12_4_ = (int)pfVar47[3];
                        auVar238 = pshuflw(auVar213,auVar152,0xfe);
                        auVar268 = pshuflw(auVar238,auVar152,0x54);
                        auVar153._4_4_ = auVar152._12_4_;
                        auVar153._0_4_ = auVar152._8_4_;
                        auVar153._8_4_ = auVar152._8_4_;
                        auVar153._12_4_ = auVar152._12_4_;
                        auVar172 = pshuflw(auVar268,auVar153,0xfe);
                        iVar42 = iVar40 >> auVar172._0_4_;
                        auVar24._4_8_ = uVar63;
                        auVar24._0_4_ = iVar42;
                        auVar262._0_8_ = auVar24._0_8_ << 0x20;
                        auVar262._8_4_ = iVar42;
                        auVar262._12_4_ = iVar42;
                        auVar172 = pshuflw(auVar153,auVar153,0x54);
                        iVar58 = iVar40 >> auVar172._0_4_;
                        auVar25._4_8_ = uVar63;
                        auVar25._0_4_ = iVar58;
                        auVar214._0_8_ = auVar25._0_8_ << 0x20;
                        auVar214._8_4_ = iVar58;
                        auVar214._12_4_ = iVar58;
                        in_XMM2._8_8_ = auVar262._8_8_;
                        in_XMM2._0_8_ = auVar214._8_8_;
                        pfVar47 = pfVar38 + lVar49 + 0xc;
                        *pfVar47 = (float)(iVar40 >> auVar268._0_4_);
                        pfVar47[1] = (float)(iVar40 >> auVar238._0_4_);
                        pfVar47[2] = (float)iVar58;
                        pfVar47[3] = (float)iVar42;
                        lVar49 = lVar49 + 0x10;
                        uVar52 = uVar52 - 4;
                      } while (uVar52 != 0);
                    }
                    if (uVar54 != 0) {
                      lVar45 = 0;
                      do {
                        pfVar47 = (float *)((long)local_88 + lVar45 + lVar49 * 4);
                        auVar154._0_4_ = (int)*pfVar47;
                        auVar154._4_4_ = (int)pfVar47[1];
                        auVar154._8_4_ = (int)pfVar47[2];
                        auVar154._12_4_ = (int)pfVar47[3];
                        auVar238 = pshuflw(in_XMM2,auVar154,0xfe);
                        auVar268 = pshuflw(auVar238,auVar154,0x54);
                        auVar155._4_4_ = auVar154._12_4_;
                        auVar155._0_4_ = auVar154._8_4_;
                        auVar155._8_4_ = auVar154._8_4_;
                        auVar155._12_4_ = auVar154._12_4_;
                        auVar172 = pshuflw(auVar268,auVar155,0xfe);
                        iVar42 = iVar40 >> auVar172._0_4_;
                        auVar26._4_8_ = uVar63;
                        auVar26._0_4_ = iVar42;
                        auVar263._0_8_ = auVar26._0_8_ << 0x20;
                        auVar263._8_4_ = iVar42;
                        auVar263._12_4_ = iVar42;
                        auVar172 = pshuflw(auVar155,auVar155,0x54);
                        iVar58 = iVar40 >> auVar172._0_4_;
                        auVar27._4_8_ = uVar63;
                        auVar27._0_4_ = iVar58;
                        auVar215._0_8_ = auVar27._0_8_ << 0x20;
                        auVar215._8_4_ = iVar58;
                        auVar215._12_4_ = iVar58;
                        in_XMM2._8_8_ = auVar263._8_8_;
                        in_XMM2._0_8_ = auVar215._8_8_;
                        pfVar47 = (float *)((long)pfVar38 + lVar45 + lVar49 * 4);
                        *pfVar47 = (float)(iVar40 >> auVar268._0_4_);
                        pfVar47[1] = (float)(iVar40 >> auVar238._0_4_);
                        pfVar47[2] = (float)iVar58;
                        pfVar47[3] = (float)iVar42;
                        lVar45 = lVar45 + 0x10;
                      } while (uVar54 * 0x10 != lVar45);
                    }
                    if (uVar44 + 1 == uVar57) goto LAB_005b73c2;
                    pfVar38 = pfVar38 + uVar57;
                    pfVar47 = local_88 + uVar57;
                  }
                  uVar50 = (uint)uVar57;
                  uVar43 = ~uVar50;
                  if ((uVar34 & 3) != 0) {
                    iVar58 = 0;
                    do {
                      *pfVar38 = (float)(iVar40 >> ((byte)(int)*pfVar47 & 0x1f));
                      pfVar38 = pfVar38 + 1;
                      pfVar47 = pfVar47 + 1;
                      iVar58 = iVar58 + -1;
                    } while (-(uVar34 & 3) != iVar58);
                    uVar50 = uVar50 - iVar58;
                  }
                  if (2 < uVar43 + uVar34) {
                    lVar49 = 0;
                    do {
                      pfVar38[lVar49] = (float)(iVar40 >> ((byte)(int)pfVar47[lVar49] & 0x1f));
                      pfVar38[lVar49 + 1] =
                           (float)(iVar40 >> ((byte)(int)pfVar47[lVar49 + 1] & 0x1f));
                      pfVar38[lVar49 + 2] =
                           (float)(iVar40 >> ((byte)(int)pfVar47[lVar49 + 2] & 0x1f));
                      pfVar38[lVar49 + 3] =
                           (float)(iVar40 >> ((byte)(int)pfVar47[lVar49 + 3] & 0x1f));
                      lVar49 = lVar49 + 4;
                    } while (uVar34 - uVar50 != (int)lVar49);
                  }
                }
                goto LAB_005b73c2;
              }
              fVar232 = local_68._0_4_;
              if (lStack_80 == 2) {
                if (*(long *)(param_9 + 2) == 0xf) {
                  iVar40 = *(int *)(param_7 + 0x28f8);
                  if (0 < iVar40) {
                    fVar62 = (float)((int)local_68._0_4_ >> ((byte)(int)fVar62 & 0x1f));
                    lVar49 = *(long *)param_9;
                    uVar44 = 0;
                    if (6 < iVar40 - 1U) {
                      uVar52 = (ulong)(iVar40 - 1U) + 1;
                      uVar44 = uVar52 & 0xfffffffffffffff8;
                      uVar54 = (uVar44 - 8 >> 3) + 1;
                      uVar57 = (ulong)((uint)uVar54 & 7);
                      if (uVar44 - 8 < 0x38) {
                        lVar45 = 0;
                      }
                      else {
                        uVar54 = uVar54 & 0xfffffffffffffff8;
                        lVar45 = 0;
                        do {
                          pfVar38 = (float *)(lVar49 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          lVar45 = lVar45 + 0x40;
                          uVar54 = uVar54 - 8;
                        } while (uVar54 != 0);
                      }
                      if (uVar57 != 0) {
                        lVar45 = lVar49 + lVar45 * 4;
                        lVar48 = 0;
                        do {
                          pfVar38 = (float *)(lVar45 + lVar48);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          lVar48 = lVar48 + 0x20;
                        } while (uVar57 * 0x20 != lVar48);
                      }
                      if (uVar52 == uVar44) goto LAB_005b73c2;
                      lVar49 = lVar49 + uVar44 * 4;
                    }
                    lVar45 = 0;
                    do {
                      *(float *)(lVar49 + lVar45 * 4) = fVar62;
                      lVar45 = lVar45 + 1;
                    } while (iVar40 - (int)uVar44 != (int)lVar45);
                  }
                  goto LAB_005b73c2;
                }
                param_9[2] = 2.8026e-45;
                param_9[3] = 0.0;
LAB_005bd0b8:
                bVar39 = (byte)(int)fVar62;
              }
              else {
                if (lStack_80 != 1) goto LAB_005b7308;
                if (*(long *)(param_9 + 2) == 0xf) {
                  iVar40 = *(int *)(param_7 + 0x28f8);
                  if (0 < iVar40) {
                    fVar62 = (float)((int)local_68._0_4_ >> ((byte)local_88 & 0x1f));
                    lVar49 = *(long *)param_9;
                    uVar44 = 0;
                    if (6 < iVar40 - 1U) {
                      uVar52 = (ulong)(iVar40 - 1U) + 1;
                      uVar44 = uVar52 & 0xfffffffffffffff8;
                      uVar54 = (uVar44 - 8 >> 3) + 1;
                      uVar57 = (ulong)((uint)uVar54 & 7);
                      if (uVar44 - 8 < 0x38) {
                        lVar45 = 0;
                      }
                      else {
                        uVar54 = uVar54 & 0xfffffffffffffff8;
                        lVar45 = 0;
                        do {
                          pfVar38 = (float *)(lVar49 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          lVar45 = lVar45 + 0x40;
                          uVar54 = uVar54 - 8;
                        } while (uVar54 != 0);
                      }
                      if (uVar57 != 0) {
                        lVar45 = lVar49 + lVar45 * 4;
                        lVar48 = 0;
                        do {
                          pfVar38 = (float *)(lVar45 + lVar48);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          lVar48 = lVar48 + 0x20;
                        } while (uVar57 * 0x20 != lVar48);
                      }
                      if (uVar52 == uVar44) goto LAB_005b73c2;
                      lVar49 = lVar49 + uVar44 * 4;
                    }
                    lVar45 = 0;
                    do {
                      *(float *)(lVar49 + lVar45 * 4) = fVar62;
                      lVar45 = lVar45 + 1;
                    } while (iVar40 - (int)uVar44 != (int)lVar45);
                  }
                  goto LAB_005b73c2;
                }
                param_9[2] = 2.8026e-45;
                param_9[3] = 0.0;
                bVar39 = (byte)local_88;
              }
              uVar34 = (int)fVar232 >> (bVar39 & 0x1f);
LAB_005bd0bf:
              *param_9 = (float)(int)uVar34;
              goto LAB_005b73c2;
            }
            if (lStack_60 != 1) {
              pcVar55 = "expr: ex_eval(%d): bad left type %ld\n";
              uVar46 = 0x544;
              lVar49 = lStack_60;
              goto LAB_005b73bb;
            }
            if (lStack_80 - 0xeU < 2) {
              if (*(long *)(param_9 + 2) != 0xf) {
                if (*(long *)(param_9 + 2) == 0xe) goto LAB_005c5996;
                param_9[2] = 2.10195e-44;
                param_9[3] = 0.0;
                pvVar37 = malloc((long)*(int *)(param_7 + 0x28f8) << 2);
                *(void **)param_9 = pvVar37;
              }
              uVar34 = *(uint *)(param_7 + 0x28f8);
              if (0 < (int)uVar34) {
                pfVar38 = *(float **)param_9;
                iVar40 = (int)(float)(long)local_68;
                uVar44 = (ulong)(uVar34 - 1);
                uVar57 = 0;
                pfVar47 = local_88;
                if ((2 < uVar34 - 1) &&
                   ((local_88 + uVar44 + 1 <= pfVar38 || (pfVar38 + uVar44 + 1 <= local_88)))) {
                  uVar57 = uVar44 + 1 & 0x1fffffffc;
                  auVar74._4_4_ = iVar40;
                  auVar74._0_4_ = iVar40;
                  auVar74._8_4_ = iVar40;
                  auVar74._12_4_ = iVar40;
                  uVar52 = (uVar57 - 4 >> 2) + 1;
                  uVar54 = (ulong)((uint)uVar52 & 3);
                  uVar63 = auVar74._8_8_;
                  if (uVar57 - 4 < 0xc) {
                    lVar49 = 0;
                  }
                  else {
                    uVar52 = uVar52 & 0xfffffffffffffffc;
                    lVar49 = 0;
                    do {
                      pfVar47 = local_88 + lVar49;
                      auVar136._0_4_ = (int)*pfVar47;
                      auVar136._4_4_ = (int)pfVar47[1];
                      auVar136._8_4_ = (int)pfVar47[2];
                      auVar136._12_4_ = (int)pfVar47[3];
                      auVar238 = pshuflw(in_XMM2,auVar136,0xfe);
                      auVar268 = pshuflw(auVar238,auVar136,0x54);
                      auVar137._4_4_ = auVar136._12_4_;
                      auVar137._0_4_ = auVar136._8_4_;
                      auVar137._8_4_ = auVar136._8_4_;
                      auVar137._12_4_ = auVar136._12_4_;
                      auVar172 = pshuflw(auVar268,auVar137,0xfe);
                      iVar42 = iVar40 >> auVar172._0_4_;
                      auVar8._4_8_ = uVar63;
                      auVar8._0_4_ = iVar42;
                      auVar249._0_8_ = auVar8._0_8_ << 0x20;
                      auVar249._8_4_ = iVar42;
                      auVar249._12_4_ = iVar42;
                      auVar172 = pshuflw(auVar137,auVar137,0x54);
                      iVar58 = iVar40 >> auVar172._0_4_;
                      auVar9._4_8_ = uVar63;
                      auVar9._0_4_ = iVar58;
                      auVar200._0_8_ = auVar9._0_8_ << 0x20;
                      auVar200._8_4_ = iVar58;
                      auVar200._12_4_ = iVar58;
                      auVar201._8_8_ = auVar249._8_8_;
                      auVar201._0_8_ = auVar200._8_8_;
                      pfVar47 = pfVar38 + lVar49;
                      *pfVar47 = (float)(iVar40 >> auVar268._0_4_);
                      pfVar47[1] = (float)(iVar40 >> auVar238._0_4_);
                      pfVar47[2] = (float)iVar58;
                      pfVar47[3] = (float)iVar42;
                      pfVar47 = local_88 + lVar49 + 4;
                      auVar138._0_4_ = (int)*pfVar47;
                      auVar138._4_4_ = (int)pfVar47[1];
                      auVar138._8_4_ = (int)pfVar47[2];
                      auVar138._12_4_ = (int)pfVar47[3];
                      auVar238 = pshuflw(auVar201,auVar138,0xfe);
                      auVar268 = pshuflw(auVar238,auVar138,0x54);
                      auVar139._4_4_ = auVar138._12_4_;
                      auVar139._0_4_ = auVar138._8_4_;
                      auVar139._8_4_ = auVar138._8_4_;
                      auVar139._12_4_ = auVar138._12_4_;
                      auVar172 = pshuflw(auVar268,auVar139,0xfe);
                      iVar42 = iVar40 >> auVar172._0_4_;
                      auVar10._4_8_ = uVar63;
                      auVar10._0_4_ = iVar42;
                      auVar250._0_8_ = auVar10._0_8_ << 0x20;
                      auVar250._8_4_ = iVar42;
                      auVar250._12_4_ = iVar42;
                      auVar172 = pshuflw(auVar139,auVar139,0x54);
                      iVar58 = iVar40 >> auVar172._0_4_;
                      auVar11._4_8_ = uVar63;
                      auVar11._0_4_ = iVar58;
                      auVar202._0_8_ = auVar11._0_8_ << 0x20;
                      auVar202._8_4_ = iVar58;
                      auVar202._12_4_ = iVar58;
                      auVar203._8_8_ = auVar250._8_8_;
                      auVar203._0_8_ = auVar202._8_8_;
                      pfVar47 = pfVar38 + lVar49 + 4;
                      *pfVar47 = (float)(iVar40 >> auVar268._0_4_);
                      pfVar47[1] = (float)(iVar40 >> auVar238._0_4_);
                      pfVar47[2] = (float)iVar58;
                      pfVar47[3] = (float)iVar42;
                      pfVar47 = local_88 + lVar49 + 8;
                      auVar140._0_4_ = (int)*pfVar47;
                      auVar140._4_4_ = (int)pfVar47[1];
                      auVar140._8_4_ = (int)pfVar47[2];
                      auVar140._12_4_ = (int)pfVar47[3];
                      auVar238 = pshuflw(auVar203,auVar140,0xfe);
                      auVar268 = pshuflw(auVar238,auVar140,0x54);
                      auVar141._4_4_ = auVar140._12_4_;
                      auVar141._0_4_ = auVar140._8_4_;
                      auVar141._8_4_ = auVar140._8_4_;
                      auVar141._12_4_ = auVar140._12_4_;
                      auVar172 = pshuflw(auVar268,auVar141,0xfe);
                      iVar42 = iVar40 >> auVar172._0_4_;
                      auVar12._4_8_ = uVar63;
                      auVar12._0_4_ = iVar42;
                      auVar251._0_8_ = auVar12._0_8_ << 0x20;
                      auVar251._8_4_ = iVar42;
                      auVar251._12_4_ = iVar42;
                      auVar172 = pshuflw(auVar141,auVar141,0x54);
                      iVar58 = iVar40 >> auVar172._0_4_;
                      auVar13._4_8_ = uVar63;
                      auVar13._0_4_ = iVar58;
                      auVar204._0_8_ = auVar13._0_8_ << 0x20;
                      auVar204._8_4_ = iVar58;
                      auVar204._12_4_ = iVar58;
                      auVar205._8_8_ = auVar251._8_8_;
                      auVar205._0_8_ = auVar204._8_8_;
                      pfVar47 = pfVar38 + lVar49 + 8;
                      *pfVar47 = (float)(iVar40 >> auVar268._0_4_);
                      pfVar47[1] = (float)(iVar40 >> auVar238._0_4_);
                      pfVar47[2] = (float)iVar58;
                      pfVar47[3] = (float)iVar42;
                      pfVar47 = local_88 + lVar49 + 0xc;
                      auVar142._0_4_ = (int)*pfVar47;
                      auVar142._4_4_ = (int)pfVar47[1];
                      auVar142._8_4_ = (int)pfVar47[2];
                      auVar142._12_4_ = (int)pfVar47[3];
                      auVar238 = pshuflw(auVar205,auVar142,0xfe);
                      auVar268 = pshuflw(auVar238,auVar142,0x54);
                      auVar143._4_4_ = auVar142._12_4_;
                      auVar143._0_4_ = auVar142._8_4_;
                      auVar143._8_4_ = auVar142._8_4_;
                      auVar143._12_4_ = auVar142._12_4_;
                      auVar172 = pshuflw(auVar268,auVar143,0xfe);
                      iVar42 = iVar40 >> auVar172._0_4_;
                      auVar14._4_8_ = uVar63;
                      auVar14._0_4_ = iVar42;
                      auVar252._0_8_ = auVar14._0_8_ << 0x20;
                      auVar252._8_4_ = iVar42;
                      auVar252._12_4_ = iVar42;
                      auVar172 = pshuflw(auVar143,auVar143,0x54);
                      iVar58 = iVar40 >> auVar172._0_4_;
                      auVar15._4_8_ = uVar63;
                      auVar15._0_4_ = iVar58;
                      auVar206._0_8_ = auVar15._0_8_ << 0x20;
                      auVar206._8_4_ = iVar58;
                      auVar206._12_4_ = iVar58;
                      in_XMM2._8_8_ = auVar252._8_8_;
                      in_XMM2._0_8_ = auVar206._8_8_;
                      pfVar47 = pfVar38 + lVar49 + 0xc;
                      *pfVar47 = (float)(iVar40 >> auVar268._0_4_);
                      pfVar47[1] = (float)(iVar40 >> auVar238._0_4_);
                      pfVar47[2] = (float)iVar58;
                      pfVar47[3] = (float)iVar42;
                      lVar49 = lVar49 + 0x10;
                      uVar52 = uVar52 - 4;
                    } while (uVar52 != 0);
                  }
                  if (uVar54 != 0) {
                    lVar45 = 0;
                    do {
                      pfVar47 = (float *)((long)local_88 + lVar45 + lVar49 * 4);
                      auVar144._0_4_ = (int)*pfVar47;
                      auVar144._4_4_ = (int)pfVar47[1];
                      auVar144._8_4_ = (int)pfVar47[2];
                      auVar144._12_4_ = (int)pfVar47[3];
                      auVar238 = pshuflw(in_XMM2,auVar144,0xfe);
                      auVar268 = pshuflw(auVar238,auVar144,0x54);
                      auVar145._4_4_ = auVar144._12_4_;
                      auVar145._0_4_ = auVar144._8_4_;
                      auVar145._8_4_ = auVar144._8_4_;
                      auVar145._12_4_ = auVar144._12_4_;
                      auVar172 = pshuflw(auVar268,auVar145,0xfe);
                      iVar42 = iVar40 >> auVar172._0_4_;
                      auVar16._4_8_ = uVar63;
                      auVar16._0_4_ = iVar42;
                      auVar253._0_8_ = auVar16._0_8_ << 0x20;
                      auVar253._8_4_ = iVar42;
                      auVar253._12_4_ = iVar42;
                      auVar172 = pshuflw(auVar145,auVar145,0x54);
                      iVar58 = iVar40 >> auVar172._0_4_;
                      auVar17._4_8_ = uVar63;
                      auVar17._0_4_ = iVar58;
                      auVar207._0_8_ = auVar17._0_8_ << 0x20;
                      auVar207._8_4_ = iVar58;
                      auVar207._12_4_ = iVar58;
                      in_XMM2._8_8_ = auVar253._8_8_;
                      in_XMM2._0_8_ = auVar207._8_8_;
                      pfVar47 = (float *)((long)pfVar38 + lVar45 + lVar49 * 4);
                      *pfVar47 = (float)(iVar40 >> auVar268._0_4_);
                      pfVar47[1] = (float)(iVar40 >> auVar238._0_4_);
                      pfVar47[2] = (float)iVar58;
                      pfVar47[3] = (float)iVar42;
                      lVar45 = lVar45 + 0x10;
                    } while (uVar54 * 0x10 != lVar45);
                  }
                  if (uVar44 + 1 == uVar57) goto LAB_005b73c2;
                  pfVar38 = pfVar38 + uVar57;
                  pfVar47 = local_88 + uVar57;
                }
                uVar50 = (uint)uVar57;
                uVar43 = ~uVar50;
                if ((uVar34 & 3) != 0) {
                  iVar58 = 0;
                  do {
                    *pfVar38 = (float)(iVar40 >> ((byte)(int)*pfVar47 & 0x1f));
                    pfVar38 = pfVar38 + 1;
                    pfVar47 = pfVar47 + 1;
                    iVar58 = iVar58 + -1;
                  } while (-(uVar34 & 3) != iVar58);
                  uVar50 = uVar50 - iVar58;
                }
                if (2 < uVar43 + uVar34) {
                  lVar49 = 0;
                  do {
                    pfVar38[lVar49] = (float)(iVar40 >> ((byte)(int)pfVar47[lVar49] & 0x1f));
                    pfVar38[lVar49 + 1] = (float)(iVar40 >> ((byte)(int)pfVar47[lVar49 + 1] & 0x1f))
                    ;
                    pfVar38[lVar49 + 2] = (float)(iVar40 >> ((byte)(int)pfVar47[lVar49 + 2] & 0x1f))
                    ;
                    pfVar38[lVar49 + 3] = (float)(iVar40 >> ((byte)(int)pfVar47[lVar49 + 3] & 0x1f))
                    ;
                    lVar49 = lVar49 + 4;
                  } while (uVar34 - uVar50 != (int)lVar49);
                }
              }
              goto LAB_005b73c2;
            }
            if (lStack_80 == 2) {
              if (*(long *)(param_9 + 2) == 0xf) {
                iVar40 = *(int *)(param_7 + 0x28f8);
                if (0 < iVar40) {
                  fVar62 = (float)((int)(float)(long)local_68 >> ((byte)(int)fVar62 & 0x1f));
                  lVar49 = *(long *)param_9;
                  uVar44 = 0;
                  if (6 < iVar40 - 1U) {
                    uVar52 = (ulong)(iVar40 - 1U) + 1;
                    uVar44 = uVar52 & 0xfffffffffffffff8;
                    uVar54 = (uVar44 - 8 >> 3) + 1;
                    uVar57 = (ulong)((uint)uVar54 & 7);
                    if (uVar44 - 8 < 0x38) {
                      lVar45 = 0;
                    }
                    else {
                      uVar54 = uVar54 & 0xfffffffffffffff8;
                      lVar45 = 0;
                      do {
                        pfVar38 = (float *)(lVar49 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar45 = lVar45 + 0x40;
                        uVar54 = uVar54 - 8;
                      } while (uVar54 != 0);
                    }
                    if (uVar57 != 0) {
                      lVar45 = lVar49 + lVar45 * 4;
                      lVar48 = 0;
                      do {
                        pfVar38 = (float *)(lVar45 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar48 = lVar48 + 0x20;
                      } while (uVar57 * 0x20 != lVar48);
                    }
                    if (uVar52 == uVar44) goto LAB_005b73c2;
                    lVar49 = lVar49 + uVar44 * 4;
                  }
                  lVar45 = 0;
                  do {
                    *(float *)(lVar49 + lVar45 * 4) = fVar62;
                    lVar45 = lVar45 + 1;
                  } while (iVar40 - (int)uVar44 != (int)lVar45);
                }
                goto LAB_005b73c2;
              }
              param_9[2] = 2.8026e-45;
              param_9[3] = 0.0;
              fVar232 = (float)(long)local_68;
              goto LAB_005bd0b8;
            }
            if (lStack_80 == 1) {
              if (*(long *)(param_9 + 2) == 0xf) {
                iVar40 = *(int *)(param_7 + 0x28f8);
                if (0 < iVar40) {
                  fVar62 = (float)((int)local_68._0_4_ >> ((byte)local_88 & 0x1f));
                  lVar49 = *(long *)param_9;
                  uVar44 = 0;
                  if (6 < iVar40 - 1U) {
                    uVar52 = (ulong)(iVar40 - 1U) + 1;
                    uVar44 = uVar52 & 0xfffffffffffffff8;
                    uVar54 = (uVar44 - 8 >> 3) + 1;
                    uVar57 = (ulong)((uint)uVar54 & 7);
                    if (uVar44 - 8 < 0x38) {
                      lVar45 = 0;
                    }
                    else {
                      uVar54 = uVar54 & 0xfffffffffffffff8;
                      lVar45 = 0;
                      do {
                        pfVar38 = (float *)(lVar49 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar45 = lVar45 + 0x40;
                        uVar54 = uVar54 - 8;
                      } while (uVar54 != 0);
                    }
                    if (uVar57 != 0) {
                      lVar45 = lVar49 + lVar45 * 4;
                      lVar48 = 0;
                      do {
                        pfVar38 = (float *)(lVar45 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar48 = lVar48 + 0x20;
                      } while (uVar57 * 0x20 != lVar48);
                    }
                    if (uVar52 == uVar44) goto LAB_005b73c2;
                    lVar49 = lVar49 + uVar44 * 4;
                  }
                  lVar45 = 0;
                  do {
                    *(float *)(lVar49 + lVar45 * 4) = fVar62;
                    lVar45 = lVar45 + 1;
                  } while (iVar40 - (int)uVar44 != (int)lVar45);
                }
                goto LAB_005b73c2;
              }
              param_9[2] = 1.4013e-45;
              param_9[3] = 0.0;
              uVar34 = (int)local_68._0_4_ >> ((byte)local_88 & 0x1f);
LAB_005bcb8a:
              *(long *)param_9 = (long)(int)uVar34;
              goto LAB_005b73c2;
            }
          }
LAB_005b7308:
          uVar46 = 0x544;
LAB_005b7339:
          pd_error(uVar44,param_2,uVar63,uVar236,param_3,param_4,param_5,param_6,param_7,
                   "expr: ex_eval(%d): bad right type %ld\n",uVar46,lStack_80,param_11,param_12);
          puVar36 = (ulong *)0x0;
          goto LAB_005b73c2;
        }
        if (uVar57 != 0xc0010) {
          if (uVar57 != 0xc0011) {
            if (uVar57 != 0xd0012) goto code_r0x005b4c3c;
            puVar36 = ex_eval(0,param_2,param_3,param_4,param_5,param_6,param_7,puVar36,
                              (float *)&local_68,puVar51,param_11,param_12);
            puVar36 = ex_eval(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,
                              puVar36,(float *)&local_88,puVar51,param_11,param_12);
            uVar236 = in_XMM3._0_8_;
            uVar63 = in_XMM2._0_8_;
            uVar44 = extraout_XMM0._0_8_;
            if (1 < lStack_60 - 0xeU) {
              if (lStack_60 == 2) {
                if (lStack_80 - 0xeU < 2) {
                  auVar172 = extraout_XMM0;
                  if (*(long *)(param_9 + 2) != 0xf) {
                    if (*(long *)(param_9 + 2) == 0xe) goto LAB_005c5996;
                    param_9[2] = 2.10195e-44;
                    param_9[3] = 0.0;
                    pvVar37 = malloc((long)*(int *)(param_7 + 0x28f8) << 2);
                    *(void **)param_9 = pvVar37;
                    auVar172 = extraout_XMM0_17;
                  }
                  pfVar38 = local_88;
                  iVar40 = *(int *)(param_7 + 0x28f8);
                  if (0 < iVar40) {
                    lVar49 = *(long *)param_9;
                    iVar58 = (int)local_68._0_4_;
                    lVar45 = 0;
                    do {
                      if ((int)pfVar38[lVar45] == 0) {
                        ex_dzdetect(auVar172._0_8_,param_2,in_XMM2._0_8_,in_XMM3._0_8_,param_3,
                                    param_4,param_5,param_6,param_7);
                        iVar40 = *(int *)(param_7 + 0x28f8);
                        iVar42 = 0;
                        param_2 = extraout_XMM1_Qa_07;
                      }
                      else {
                        iVar42 = iVar58 % (int)pfVar38[lVar45];
                      }
                      auVar172 = ZEXT416((uint)(float)iVar42);
                      *(float *)(lVar49 + lVar45 * 4) = (float)iVar42;
                      lVar45 = lVar45 + 1;
                    } while ((int)lVar45 < iVar40);
                  }
                  goto LAB_005b73c2;
                }
                if (lStack_80 == 2) {
                  if (*(long *)(param_9 + 2) == 0xf) {
                    lVar49 = *(long *)param_9;
                    if ((int)local_88._0_4_ == 0) {
                      ex_dzdetect(uVar44,param_2,uVar63,uVar236,param_3,param_4,param_5,param_6,
                                  param_7);
                      fVar62 = 0.0;
                    }
                    else {
                      fVar62 = (float)((int)local_68._0_4_ % (int)local_88._0_4_);
                    }
                    iVar40 = *(int *)(param_7 + 0x28f8);
                    if (0 < iVar40) {
                      uVar44 = 0;
                      if (6 < iVar40 - 1U) {
                        uVar57 = (ulong)(iVar40 - 1U) + 1;
                        uVar44 = uVar57 & 0xfffffffffffffff8;
                        uVar54 = (uVar44 - 8 >> 3) + 1;
                        uVar52 = (ulong)((uint)uVar54 & 7);
                        if (uVar44 - 8 < 0x38) {
                          lVar45 = 0;
                        }
                        else {
                          uVar54 = uVar54 & 0xfffffffffffffff8;
                          lVar45 = 0;
                          do {
                            pfVar38 = (float *)(lVar49 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            lVar45 = lVar45 + 0x40;
                            uVar54 = uVar54 - 8;
                          } while (uVar54 != 0);
                        }
                        if (uVar52 != 0) {
                          lVar45 = lVar49 + lVar45 * 4;
                          lVar48 = 0;
                          do {
                            pfVar38 = (float *)(lVar45 + lVar48);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            lVar48 = lVar48 + 0x20;
                          } while (uVar52 * 0x20 != lVar48);
                        }
                        if (uVar57 == uVar44) goto LAB_005b73c2;
                        lVar49 = lVar49 + uVar44 * 4;
                      }
                      lVar45 = 0;
                      do {
                        *(float *)(lVar49 + lVar45 * 4) = fVar62;
                        lVar45 = lVar45 + 1;
                      } while (iVar40 - (int)uVar44 != (int)lVar45);
                    }
                    goto LAB_005b73c2;
                  }
                  param_9[2] = 2.8026e-45;
                  param_9[3] = 0.0;
                  fVar62 = (float)(int)local_88._0_4_;
                }
                else {
                  if (lStack_80 != 1) goto LAB_005b7262;
                  if (*(long *)(param_9 + 2) == 0xf) {
                    lVar49 = *(long *)param_9;
                    if (local_88._0_4_ == 0.0) {
                      ex_dzdetect(uVar44,param_2,uVar63,uVar236,param_3,param_4,param_5,param_6,
                                  param_7);
                      fVar62 = 0.0;
                    }
                    else {
                      fVar62 = (float)((int)local_68._0_4_ % (int)local_88._0_4_);
                    }
                    iVar40 = *(int *)(param_7 + 0x28f8);
                    if (0 < iVar40) {
                      uVar44 = 0;
                      if (6 < iVar40 - 1U) {
                        uVar57 = (ulong)(iVar40 - 1U) + 1;
                        uVar44 = uVar57 & 0xfffffffffffffff8;
                        uVar54 = (uVar44 - 8 >> 3) + 1;
                        uVar52 = (ulong)((uint)uVar54 & 7);
                        if (uVar44 - 8 < 0x38) {
                          lVar45 = 0;
                        }
                        else {
                          uVar54 = uVar54 & 0xfffffffffffffff8;
                          lVar45 = 0;
                          do {
                            pfVar38 = (float *)(lVar49 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            lVar45 = lVar45 + 0x40;
                            uVar54 = uVar54 - 8;
                          } while (uVar54 != 0);
                        }
                        if (uVar52 != 0) {
                          lVar45 = lVar49 + lVar45 * 4;
                          lVar48 = 0;
                          do {
                            pfVar38 = (float *)(lVar45 + lVar48);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                            *pfVar38 = fVar62;
                            pfVar38[1] = fVar62;
                            pfVar38[2] = fVar62;
                            pfVar38[3] = fVar62;
                            lVar48 = lVar48 + 0x20;
                          } while (uVar52 * 0x20 != lVar48);
                        }
                        if (uVar57 == uVar44) goto LAB_005b73c2;
                        lVar49 = lVar49 + uVar44 * 4;
                      }
                      lVar45 = 0;
                      do {
                        *(float *)(lVar49 + lVar45 * 4) = fVar62;
                        lVar45 = lVar45 + 1;
                      } while (iVar40 - (int)uVar44 != (int)lVar45);
                    }
                    goto LAB_005b73c2;
                  }
                  param_9[2] = 2.8026e-45;
                  param_9[3] = 0.0;
                  fVar62 = local_88._0_4_;
                }
                if (fVar62 == 0.0) goto LAB_005bd0f7;
                fVar232 = local_68._0_4_;
              }
              else {
                if (lStack_60 != 1) {
                  pcVar55 = "expr: ex_eval(%d): bad left type %ld\n";
                  uVar46 = 0x556;
                  lVar49 = lStack_60;
                  goto LAB_005b73bb;
                }
                if (lStack_80 - 0xeU < 2) {
                  auVar172 = extraout_XMM0;
                  if (*(long *)(param_9 + 2) != 0xf) {
                    if (*(long *)(param_9 + 2) == 0xe) goto LAB_005c5996;
                    param_9[2] = 2.10195e-44;
                    param_9[3] = 0.0;
                    pvVar37 = malloc((long)*(int *)(param_7 + 0x28f8) << 2);
                    *(void **)param_9 = pvVar37;
                    auVar172 = extraout_XMM0_15;
                  }
                  pfVar38 = local_88;
                  iVar40 = *(int *)(param_7 + 0x28f8);
                  if (0 < iVar40) {
                    lVar49 = *(long *)param_9;
                    auVar70._4_12_ = auVar172._4_12_;
                    auVar70._0_4_ = (float)(long)local_68;
                    iVar58 = (int)auVar70._0_4_;
                    lVar45 = 0;
                    do {
                      if ((int)pfVar38[lVar45] == 0) {
                        ex_dzdetect(auVar70._0_8_,param_2,in_XMM2._0_8_,in_XMM3._0_8_,param_3,
                                    param_4,param_5,param_6,param_7);
                        iVar40 = *(int *)(param_7 + 0x28f8);
                        iVar42 = 0;
                        param_2 = extraout_XMM1_Qa_06;
                      }
                      else {
                        iVar42 = iVar58 % (int)pfVar38[lVar45];
                      }
                      auVar70 = ZEXT416((uint)(float)iVar42);
                      *(float *)(lVar49 + lVar45 * 4) = (float)iVar42;
                      lVar45 = lVar45 + 1;
                    } while ((int)lVar45 < iVar40);
                  }
                  goto LAB_005b73c2;
                }
                if (lStack_80 != 2) {
                  if (lStack_80 == 1) {
                    if (*(long *)(param_9 + 2) == 0xf) {
                      lVar49 = *(long *)param_9;
                      if (local_88._0_4_ == 0.0) {
                        ex_dzdetect(uVar44,param_2,uVar63,uVar236,param_3,param_4,param_5,param_6,
                                    param_7);
                        fVar62 = 0.0;
                      }
                      else {
                        fVar62 = (float)((int)local_68._0_4_ % (int)local_88._0_4_);
                      }
                      iVar40 = *(int *)(param_7 + 0x28f8);
                      if (0 < iVar40) {
                        uVar44 = 0;
                        if (6 < iVar40 - 1U) {
                          uVar57 = (ulong)(iVar40 - 1U) + 1;
                          uVar44 = uVar57 & 0xfffffffffffffff8;
                          uVar54 = (uVar44 - 8 >> 3) + 1;
                          uVar52 = (ulong)((uint)uVar54 & 7);
                          if (uVar44 - 8 < 0x38) {
                            lVar45 = 0;
                          }
                          else {
                            uVar54 = uVar54 & 0xfffffffffffffff8;
                            lVar45 = 0;
                            do {
                              pfVar38 = (float *)(lVar49 + lVar45 * 4);
                              *pfVar38 = fVar62;
                              pfVar38[1] = fVar62;
                              pfVar38[2] = fVar62;
                              pfVar38[3] = fVar62;
                              pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                              *pfVar38 = fVar62;
                              pfVar38[1] = fVar62;
                              pfVar38[2] = fVar62;
                              pfVar38[3] = fVar62;
                              pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                              *pfVar38 = fVar62;
                              pfVar38[1] = fVar62;
                              pfVar38[2] = fVar62;
                              pfVar38[3] = fVar62;
                              pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                              *pfVar38 = fVar62;
                              pfVar38[1] = fVar62;
                              pfVar38[2] = fVar62;
                              pfVar38[3] = fVar62;
                              pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                              *pfVar38 = fVar62;
                              pfVar38[1] = fVar62;
                              pfVar38[2] = fVar62;
                              pfVar38[3] = fVar62;
                              pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                              *pfVar38 = fVar62;
                              pfVar38[1] = fVar62;
                              pfVar38[2] = fVar62;
                              pfVar38[3] = fVar62;
                              pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                              *pfVar38 = fVar62;
                              pfVar38[1] = fVar62;
                              pfVar38[2] = fVar62;
                              pfVar38[3] = fVar62;
                              pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                              *pfVar38 = fVar62;
                              pfVar38[1] = fVar62;
                              pfVar38[2] = fVar62;
                              pfVar38[3] = fVar62;
                              pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                              *pfVar38 = fVar62;
                              pfVar38[1] = fVar62;
                              pfVar38[2] = fVar62;
                              pfVar38[3] = fVar62;
                              pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                              *pfVar38 = fVar62;
                              pfVar38[1] = fVar62;
                              pfVar38[2] = fVar62;
                              pfVar38[3] = fVar62;
                              pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                              *pfVar38 = fVar62;
                              pfVar38[1] = fVar62;
                              pfVar38[2] = fVar62;
                              pfVar38[3] = fVar62;
                              pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                              *pfVar38 = fVar62;
                              pfVar38[1] = fVar62;
                              pfVar38[2] = fVar62;
                              pfVar38[3] = fVar62;
                              pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                              *pfVar38 = fVar62;
                              pfVar38[1] = fVar62;
                              pfVar38[2] = fVar62;
                              pfVar38[3] = fVar62;
                              pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                              *pfVar38 = fVar62;
                              pfVar38[1] = fVar62;
                              pfVar38[2] = fVar62;
                              pfVar38[3] = fVar62;
                              pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                              *pfVar38 = fVar62;
                              pfVar38[1] = fVar62;
                              pfVar38[2] = fVar62;
                              pfVar38[3] = fVar62;
                              pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                              *pfVar38 = fVar62;
                              pfVar38[1] = fVar62;
                              pfVar38[2] = fVar62;
                              pfVar38[3] = fVar62;
                              lVar45 = lVar45 + 0x40;
                              uVar54 = uVar54 - 8;
                            } while (uVar54 != 0);
                          }
                          if (uVar52 != 0) {
                            lVar45 = lVar49 + lVar45 * 4;
                            lVar48 = 0;
                            do {
                              pfVar38 = (float *)(lVar45 + lVar48);
                              *pfVar38 = fVar62;
                              pfVar38[1] = fVar62;
                              pfVar38[2] = fVar62;
                              pfVar38[3] = fVar62;
                              pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                              *pfVar38 = fVar62;
                              pfVar38[1] = fVar62;
                              pfVar38[2] = fVar62;
                              pfVar38[3] = fVar62;
                              lVar48 = lVar48 + 0x20;
                            } while (uVar52 * 0x20 != lVar48);
                          }
                          if (uVar57 == uVar44) goto LAB_005b73c2;
                          lVar49 = lVar49 + uVar44 * 4;
                        }
                        lVar45 = 0;
                        do {
                          *(float *)(lVar49 + lVar45 * 4) = fVar62;
                          lVar45 = lVar45 + 1;
                        } while (iVar40 - (int)uVar44 != (int)lVar45);
                      }
                      goto LAB_005b73c2;
                    }
                    param_9[2] = 1.4013e-45;
                    param_9[3] = 0.0;
                    if (local_88._0_4_ != 0.0) {
                      *(long *)param_9 = (long)((int)local_68._0_4_ % (int)local_88._0_4_);
                      goto LAB_005b73c2;
                    }
                    goto LAB_005bd645;
                  }
                  goto LAB_005b7262;
                }
                if (*(long *)(param_9 + 2) == 0xf) {
                  lVar49 = *(long *)param_9;
                  if ((int)local_88._0_4_ == 0) {
                    ex_dzdetect(uVar44,param_2,uVar63,uVar236,param_3,param_4,param_5,param_6,
                                param_7);
                    fVar62 = 0.0;
                  }
                  else {
                    fVar62 = (float)((int)(float)(long)local_68 % (int)local_88._0_4_);
                  }
                  iVar40 = *(int *)(param_7 + 0x28f8);
                  if (0 < iVar40) {
                    uVar44 = 0;
                    if (6 < iVar40 - 1U) {
                      uVar57 = (ulong)(iVar40 - 1U) + 1;
                      uVar44 = uVar57 & 0xfffffffffffffff8;
                      uVar54 = (uVar44 - 8 >> 3) + 1;
                      uVar52 = (ulong)((uint)uVar54 & 7);
                      if (uVar44 - 8 < 0x38) {
                        lVar45 = 0;
                      }
                      else {
                        uVar54 = uVar54 & 0xfffffffffffffff8;
                        lVar45 = 0;
                        do {
                          pfVar38 = (float *)(lVar49 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          lVar45 = lVar45 + 0x40;
                          uVar54 = uVar54 - 8;
                        } while (uVar54 != 0);
                      }
                      if (uVar52 != 0) {
                        lVar45 = lVar49 + lVar45 * 4;
                        lVar48 = 0;
                        do {
                          pfVar38 = (float *)(lVar45 + lVar48);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          lVar48 = lVar48 + 0x20;
                        } while (uVar52 * 0x20 != lVar48);
                      }
                      if (uVar57 == uVar44) goto LAB_005b73c2;
                      lVar49 = lVar49 + uVar44 * 4;
                    }
                    lVar45 = 0;
                    do {
                      *(float *)(lVar49 + lVar45 * 4) = fVar62;
                      lVar45 = lVar45 + 1;
                    } while (iVar40 - (int)uVar44 != (int)lVar45);
                  }
                  goto LAB_005b73c2;
                }
                param_9[2] = 2.8026e-45;
                param_9[3] = 0.0;
                fVar62 = (float)(int)local_88._0_4_;
                if (fVar62 == 0.0) goto LAB_005bd0f7;
                fVar232 = (float)(long)local_68;
              }
              *param_9 = (float)((int)fVar232 % (int)fVar62);
              goto LAB_005b73c2;
            }
            if (*(long *)(param_9 + 2) == 0xf) {
              pvVar37 = *(void **)param_9;
              auVar172 = extraout_XMM0;
            }
            else {
              if (*(long *)(param_9 + 2) == 0xe) goto LAB_005c5996;
              param_9[2] = 2.10195e-44;
              param_9[3] = 0.0;
              pvVar37 = malloc((long)*(int *)(param_7 + 0x28f8) << 2);
              *(void **)param_9 = pvVar37;
              auVar172 = extraout_XMM0_08;
            }
            pfVar47 = local_68;
            pfVar38 = local_88;
            uVar236 = in_XMM3._0_8_;
            uVar63 = in_XMM2._0_8_;
            uVar44 = auVar172._0_8_;
            if (lStack_80 - 0xeU < 2) {
              iVar40 = *(int *)(param_7 + 0x28f8);
              if (0 < iVar40) {
                lVar49 = 0;
                do {
                  if ((int)pfVar38[lVar49] == 0) {
                    ex_dzdetect(auVar172._0_8_,param_2,in_XMM2._0_8_,in_XMM3._0_8_,param_3,param_4,
                                param_5,param_6,param_7);
                    iVar40 = *(int *)(param_7 + 0x28f8);
                    iVar58 = 0;
                    param_2 = extraout_XMM1_Qa_05;
                  }
                  else {
                    iVar58 = (int)pfVar47[lVar49] % (int)pfVar38[lVar49];
                  }
                  auVar172 = ZEXT416((uint)(float)iVar58);
                  *(float *)((long)pvVar37 + lVar49 * 4) = (float)iVar58;
                  lVar49 = lVar49 + 1;
                } while ((int)lVar49 < iVar40);
              }
              goto LAB_005b73c2;
            }
            if (lStack_80 == 2) {
              iVar40 = *(int *)(param_7 + 0x28f8);
              if (0 < iVar40) {
                iVar58 = (int)local_88._0_4_;
                lVar49 = 0;
                do {
                  if (iVar58 == 0) {
                    ex_dzdetect(auVar172._0_8_,param_2,in_XMM2._0_8_,in_XMM3._0_8_,param_3,param_4,
                                param_5,param_6,param_7);
                    iVar40 = *(int *)(param_7 + 0x28f8);
                    iVar42 = 0;
                    param_2 = extraout_XMM1_Qa_08;
                  }
                  else {
                    iVar42 = (int)pfVar47[lVar49] % iVar58;
                  }
                  auVar172 = ZEXT416((uint)(float)iVar42);
                  *(float *)((long)pvVar37 + lVar49 * 4) = (float)iVar42;
                  lVar49 = lVar49 + 1;
                } while ((int)lVar49 < iVar40);
              }
              goto LAB_005b73c2;
            }
            if (lStack_80 == 1) {
              iVar40 = *(int *)(param_7 + 0x28f8);
              if (0 < iVar40) {
                auVar65._4_12_ = auVar172._4_12_;
                auVar65._0_4_ = (float)(long)local_88;
                iVar58 = (int)auVar65._0_4_;
                lVar49 = 0;
                do {
                  if (iVar58 == 0) {
                    ex_dzdetect(auVar65._0_8_,param_2,in_XMM2._0_8_,in_XMM3._0_8_,param_3,param_4,
                                param_5,param_6,param_7);
                    iVar40 = *(int *)(param_7 + 0x28f8);
                    iVar42 = 0;
                    param_2 = extraout_XMM1_Qa_03;
                  }
                  else {
                    iVar42 = (int)pfVar47[lVar49] % iVar58;
                  }
                  auVar65 = ZEXT416((uint)(float)iVar42);
                  *(float *)((long)pvVar37 + lVar49 * 4) = (float)iVar42;
                  lVar49 = lVar49 + 1;
                } while ((int)lVar49 < iVar40);
              }
              goto LAB_005b73c2;
            }
LAB_005b7262:
            uVar46 = 0x556;
            goto LAB_005b7339;
          }
          puVar36 = ex_eval(0,param_2,param_3,param_4,param_5,param_6,param_7,puVar36,
                            (float *)&local_68,puVar51,param_11,param_12);
          puVar36 = ex_eval(extraout_XMM0_Qa_12,param_2,param_3,param_4,param_5,param_6,param_7,
                            puVar36,(float *)&local_88,puVar51,param_11,param_12);
          uVar236 = in_XMM3._0_8_;
          uVar63 = in_XMM2._0_8_;
          uVar44 = extraout_XMM0_Qa_13;
          if (lStack_60 - 0xeU < 2) {
            if (*(long *)(param_9 + 2) == 0xf) {
              pfVar38 = *(float **)param_9;
            }
            else {
              if (*(long *)(param_9 + 2) == 0xe) goto LAB_005c5996;
              param_9[2] = 2.10195e-44;
              param_9[3] = 0.0;
              pfVar38 = malloc((long)*(int *)(param_7 + 0x28f8) << 2);
              uVar236 = in_XMM3._0_8_;
              uVar63 = in_XMM2._0_8_;
              *(float **)param_9 = pfVar38;
              uVar44 = extraout_XMM0_Qa_25;
            }
            if (lStack_80 - 0xeU < 2) {
              uVar34 = *(uint *)(param_7 + 0x28f8);
              if (0 < (int)uVar34) {
                uVar44 = (ulong)(uVar34 - 1);
                uVar57 = 0;
                pfVar53 = local_68;
                pfVar47 = local_88;
                if (6 < uVar34 - 1) {
                  if ((local_68 + uVar44 + 1 <= pfVar38 || pfVar38 + uVar44 + 1 <= local_68) &&
                     (local_88 + uVar44 + 1 <= pfVar38 || pfVar38 + uVar44 + 1 <= local_88)) {
                    uVar57 = uVar44 + 1 & 0xfffffffffffffff8;
                    uVar52 = (uVar57 - 8 >> 3) + 1;
                    if (uVar57 - 8 == 0) {
                      lVar49 = 0;
                    }
                    else {
                      uVar54 = uVar52 & 0x3ffffffffffffffe;
                      lVar49 = 0;
                      do {
                        pfVar47 = local_68 + lVar49;
                        fVar62 = pfVar47[1];
                        fVar232 = pfVar47[2];
                        fVar233 = pfVar47[3];
                        pfVar53 = local_68 + lVar49 + 4;
                        fVar234 = *pfVar53;
                        fVar235 = pfVar53[1];
                        fVar264 = pfVar53[2];
                        fVar265 = pfVar53[3];
                        pfVar53 = local_88 + lVar49;
                        fVar266 = pfVar53[1];
                        fVar28 = pfVar53[2];
                        fVar29 = pfVar53[3];
                        pfVar2 = local_88 + lVar49 + 4;
                        fVar30 = *pfVar2;
                        fVar31 = pfVar2[1];
                        fVar32 = pfVar2[2];
                        fVar33 = pfVar2[3];
                        pfVar2 = pfVar38 + lVar49;
                        *pfVar2 = *pfVar53 + *pfVar47;
                        pfVar2[1] = fVar266 + fVar62;
                        pfVar2[2] = fVar28 + fVar232;
                        pfVar2[3] = fVar29 + fVar233;
                        pfVar47 = pfVar38 + lVar49 + 4;
                        *pfVar47 = fVar30 + fVar234;
                        pfVar47[1] = fVar31 + fVar235;
                        pfVar47[2] = fVar32 + fVar264;
                        pfVar47[3] = fVar33 + fVar265;
                        pfVar47 = local_68 + lVar49 + 8;
                        fVar62 = pfVar47[1];
                        fVar232 = pfVar47[2];
                        fVar233 = pfVar47[3];
                        pfVar53 = local_68 + lVar49 + 0xc;
                        fVar234 = *pfVar53;
                        fVar235 = pfVar53[1];
                        fVar264 = pfVar53[2];
                        fVar265 = pfVar53[3];
                        pfVar53 = local_88 + lVar49 + 8;
                        fVar266 = pfVar53[1];
                        fVar28 = pfVar53[2];
                        fVar29 = pfVar53[3];
                        pfVar2 = local_88 + lVar49 + 0xc;
                        fVar30 = *pfVar2;
                        fVar31 = pfVar2[1];
                        fVar32 = pfVar2[2];
                        fVar33 = pfVar2[3];
                        pfVar2 = pfVar38 + lVar49 + 8;
                        *pfVar2 = *pfVar53 + *pfVar47;
                        pfVar2[1] = fVar266 + fVar62;
                        pfVar2[2] = fVar28 + fVar232;
                        pfVar2[3] = fVar29 + fVar233;
                        pfVar47 = pfVar38 + lVar49 + 0xc;
                        *pfVar47 = fVar30 + fVar234;
                        pfVar47[1] = fVar31 + fVar235;
                        pfVar47[2] = fVar32 + fVar264;
                        pfVar47[3] = fVar33 + fVar265;
                        lVar49 = lVar49 + 0x10;
                        uVar54 = uVar54 - 2;
                      } while (uVar54 != 0);
                    }
                    if ((uVar52 & 1) != 0) {
                      pfVar47 = local_68 + lVar49;
                      fVar62 = pfVar47[1];
                      fVar232 = pfVar47[2];
                      fVar233 = pfVar47[3];
                      pfVar53 = local_68 + lVar49 + 4;
                      fVar234 = *pfVar53;
                      fVar235 = pfVar53[1];
                      fVar264 = pfVar53[2];
                      fVar265 = pfVar53[3];
                      pfVar53 = local_88 + lVar49;
                      fVar266 = pfVar53[1];
                      fVar28 = pfVar53[2];
                      fVar29 = pfVar53[3];
                      pfVar2 = local_88 + lVar49 + 4;
                      fVar30 = *pfVar2;
                      fVar31 = pfVar2[1];
                      fVar32 = pfVar2[2];
                      fVar33 = pfVar2[3];
                      pfVar2 = pfVar38 + lVar49;
                      *pfVar2 = *pfVar53 + *pfVar47;
                      pfVar2[1] = fVar266 + fVar62;
                      pfVar2[2] = fVar28 + fVar232;
                      pfVar2[3] = fVar29 + fVar233;
                      pfVar47 = pfVar38 + lVar49 + 4;
                      *pfVar47 = fVar30 + fVar234;
                      pfVar47[1] = fVar31 + fVar235;
                      pfVar47[2] = fVar32 + fVar264;
                      pfVar47[3] = fVar33 + fVar265;
                    }
                    if (uVar44 + 1 == uVar57) goto LAB_005b73c2;
                    pfVar38 = pfVar38 + uVar57;
                    pfVar47 = local_88 + uVar57;
                    pfVar53 = local_68 + uVar57;
                  }
                }
                uVar50 = (uint)uVar57;
                uVar43 = ~uVar50;
                if ((uVar34 & 3) != 0) {
                  iVar40 = 0;
                  do {
                    *pfVar38 = *pfVar47 + *pfVar53;
                    pfVar38 = pfVar38 + 1;
                    pfVar47 = pfVar47 + 1;
                    pfVar53 = pfVar53 + 1;
                    iVar40 = iVar40 + -1;
                  } while (-(uVar34 & 3) != iVar40);
                  uVar50 = uVar50 - iVar40;
                }
                if (2 < uVar43 + uVar34) {
                  lVar49 = 0;
                  do {
                    pfVar38[lVar49] = pfVar47[lVar49] + pfVar53[lVar49];
                    pfVar38[lVar49 + 1] = pfVar47[lVar49 + 1] + pfVar53[lVar49 + 1];
                    pfVar38[lVar49 + 2] = pfVar47[lVar49 + 2] + pfVar53[lVar49 + 2];
                    pfVar38[lVar49 + 3] = pfVar47[lVar49 + 3] + pfVar53[lVar49 + 3];
                    lVar49 = lVar49 + 4;
                  } while (uVar34 - uVar50 != (int)lVar49);
                }
              }
              goto LAB_005b73c2;
            }
            if (lStack_80 == 2) {
              uVar34 = *(uint *)(param_7 + 0x28f8);
              if (0 < (int)uVar34) {
                uVar57 = (ulong)(uVar34 - 1);
                uVar44 = 0;
                pfVar47 = local_68;
                if ((6 < uVar34 - 1) &&
                   ((local_68 + uVar57 + 1 <= pfVar38 || (pfVar38 + uVar57 + 1 <= local_68)))) {
                  uVar44 = uVar57 + 1 & 0xfffffffffffffff8;
                  uVar52 = (uVar44 - 8 >> 3) + 1;
                  if (uVar44 - 8 == 0) {
                    lVar49 = 0;
                  }
                  else {
                    uVar54 = uVar52 & 0x3ffffffffffffffe;
                    lVar49 = 0;
                    do {
                      pfVar47 = local_68 + lVar49;
                      fVar62 = pfVar47[1];
                      fVar232 = pfVar47[2];
                      fVar233 = pfVar47[3];
                      pfVar53 = local_68 + lVar49 + 4;
                      fVar234 = *pfVar53;
                      fVar235 = pfVar53[1];
                      fVar264 = pfVar53[2];
                      fVar265 = pfVar53[3];
                      pfVar53 = pfVar38 + lVar49;
                      *pfVar53 = *pfVar47 + local_88._0_4_;
                      pfVar53[1] = fVar62 + local_88._0_4_;
                      pfVar53[2] = fVar232 + local_88._0_4_;
                      pfVar53[3] = fVar233 + local_88._0_4_;
                      pfVar47 = pfVar38 + lVar49 + 4;
                      *pfVar47 = fVar234 + local_88._0_4_;
                      pfVar47[1] = fVar235 + local_88._0_4_;
                      pfVar47[2] = fVar264 + local_88._0_4_;
                      pfVar47[3] = fVar265 + local_88._0_4_;
                      pfVar47 = local_68 + lVar49 + 8;
                      fVar62 = pfVar47[1];
                      fVar232 = pfVar47[2];
                      fVar233 = pfVar47[3];
                      pfVar53 = local_68 + lVar49 + 0xc;
                      fVar234 = *pfVar53;
                      fVar235 = pfVar53[1];
                      fVar264 = pfVar53[2];
                      fVar265 = pfVar53[3];
                      pfVar53 = pfVar38 + lVar49 + 8;
                      *pfVar53 = *pfVar47 + local_88._0_4_;
                      pfVar53[1] = fVar62 + local_88._0_4_;
                      pfVar53[2] = fVar232 + local_88._0_4_;
                      pfVar53[3] = fVar233 + local_88._0_4_;
                      pfVar47 = pfVar38 + lVar49 + 0xc;
                      *pfVar47 = fVar234 + local_88._0_4_;
                      pfVar47[1] = fVar235 + local_88._0_4_;
                      pfVar47[2] = fVar264 + local_88._0_4_;
                      pfVar47[3] = fVar265 + local_88._0_4_;
                      lVar49 = lVar49 + 0x10;
                      uVar54 = uVar54 - 2;
                    } while (uVar54 != 0);
                  }
                  if ((uVar52 & 1) != 0) {
                    pfVar47 = local_68 + lVar49;
                    fVar62 = pfVar47[1];
                    fVar232 = pfVar47[2];
                    fVar233 = pfVar47[3];
                    pfVar53 = local_68 + lVar49 + 4;
                    fVar234 = *pfVar53;
                    fVar235 = pfVar53[1];
                    fVar264 = pfVar53[2];
                    fVar265 = pfVar53[3];
                    pfVar53 = pfVar38 + lVar49;
                    *pfVar53 = *pfVar47 + local_88._0_4_;
                    pfVar53[1] = fVar62 + local_88._0_4_;
                    pfVar53[2] = fVar232 + local_88._0_4_;
                    pfVar53[3] = fVar233 + local_88._0_4_;
                    pfVar47 = pfVar38 + lVar49 + 4;
                    *pfVar47 = fVar234 + local_88._0_4_;
                    pfVar47[1] = fVar235 + local_88._0_4_;
                    pfVar47[2] = fVar264 + local_88._0_4_;
                    pfVar47[3] = fVar265 + local_88._0_4_;
                  }
                  if (uVar57 + 1 == uVar44) goto LAB_005b73c2;
                  pfVar38 = pfVar38 + uVar44;
                  pfVar47 = local_68 + uVar44;
                }
                uVar43 = (uint)uVar44;
                uVar50 = ~uVar43;
                if ((uVar34 & 3) != 0) {
                  iVar40 = 0;
                  do {
                    *pfVar38 = *pfVar47 + local_88._0_4_;
                    pfVar38 = pfVar38 + 1;
                    pfVar47 = pfVar47 + 1;
                    iVar40 = iVar40 + -1;
                  } while (-(uVar34 & 3) != iVar40);
                  uVar43 = uVar43 - iVar40;
                }
                if (2 < uVar50 + uVar34) {
                  lVar49 = 0;
                  do {
                    pfVar38[lVar49] = pfVar47[lVar49] + local_88._0_4_;
                    pfVar38[lVar49 + 1] = pfVar47[lVar49 + 1] + local_88._0_4_;
                    pfVar38[lVar49 + 2] = pfVar47[lVar49 + 2] + local_88._0_4_;
                    pfVar38[lVar49 + 3] = pfVar47[lVar49 + 3] + local_88._0_4_;
                    lVar49 = lVar49 + 4;
                  } while (uVar34 - uVar43 != (int)lVar49);
                }
              }
              goto LAB_005b73c2;
            }
            if (lStack_80 == 1) {
              uVar34 = *(uint *)(param_7 + 0x28f8);
              if (0 < (int)uVar34) {
                fVar62 = (float)(long)local_88;
                uVar57 = (ulong)(uVar34 - 1);
                uVar44 = 0;
                pfVar47 = local_68;
                if ((6 < uVar34 - 1) &&
                   ((local_68 + uVar57 + 1 <= pfVar38 || (pfVar38 + uVar57 + 1 <= local_68)))) {
                  uVar44 = uVar57 + 1 & 0xfffffffffffffff8;
                  uVar52 = (uVar44 - 8 >> 3) + 1;
                  if (uVar44 - 8 == 0) {
                    lVar49 = 0;
                  }
                  else {
                    uVar54 = uVar52 & 0x3ffffffffffffffe;
                    lVar49 = 0;
                    do {
                      pfVar47 = local_68 + lVar49;
                      fVar232 = pfVar47[1];
                      fVar233 = pfVar47[2];
                      fVar234 = pfVar47[3];
                      pfVar53 = local_68 + lVar49 + 4;
                      fVar235 = *pfVar53;
                      fVar264 = pfVar53[1];
                      fVar265 = pfVar53[2];
                      fVar266 = pfVar53[3];
                      pfVar53 = pfVar38 + lVar49;
                      *pfVar53 = *pfVar47 + fVar62;
                      pfVar53[1] = fVar232 + fVar62;
                      pfVar53[2] = fVar233 + fVar62;
                      pfVar53[3] = fVar234 + fVar62;
                      pfVar47 = pfVar38 + lVar49 + 4;
                      *pfVar47 = fVar235 + fVar62;
                      pfVar47[1] = fVar264 + fVar62;
                      pfVar47[2] = fVar265 + fVar62;
                      pfVar47[3] = fVar266 + fVar62;
                      pfVar47 = local_68 + lVar49 + 8;
                      fVar232 = pfVar47[1];
                      fVar233 = pfVar47[2];
                      fVar234 = pfVar47[3];
                      pfVar53 = local_68 + lVar49 + 0xc;
                      fVar235 = *pfVar53;
                      fVar264 = pfVar53[1];
                      fVar265 = pfVar53[2];
                      fVar266 = pfVar53[3];
                      pfVar53 = pfVar38 + lVar49 + 8;
                      *pfVar53 = *pfVar47 + fVar62;
                      pfVar53[1] = fVar232 + fVar62;
                      pfVar53[2] = fVar233 + fVar62;
                      pfVar53[3] = fVar234 + fVar62;
                      pfVar47 = pfVar38 + lVar49 + 0xc;
                      *pfVar47 = fVar235 + fVar62;
                      pfVar47[1] = fVar264 + fVar62;
                      pfVar47[2] = fVar265 + fVar62;
                      pfVar47[3] = fVar266 + fVar62;
                      lVar49 = lVar49 + 0x10;
                      uVar54 = uVar54 - 2;
                    } while (uVar54 != 0);
                  }
                  if ((uVar52 & 1) != 0) {
                    pfVar47 = local_68 + lVar49;
                    fVar232 = pfVar47[1];
                    fVar233 = pfVar47[2];
                    fVar234 = pfVar47[3];
                    pfVar53 = local_68 + lVar49 + 4;
                    fVar235 = *pfVar53;
                    fVar264 = pfVar53[1];
                    fVar265 = pfVar53[2];
                    fVar266 = pfVar53[3];
                    pfVar53 = pfVar38 + lVar49;
                    *pfVar53 = *pfVar47 + fVar62;
                    pfVar53[1] = fVar232 + fVar62;
                    pfVar53[2] = fVar233 + fVar62;
                    pfVar53[3] = fVar234 + fVar62;
                    pfVar47 = pfVar38 + lVar49 + 4;
                    *pfVar47 = fVar235 + fVar62;
                    pfVar47[1] = fVar264 + fVar62;
                    pfVar47[2] = fVar265 + fVar62;
                    pfVar47[3] = fVar266 + fVar62;
                  }
                  if (uVar57 + 1 == uVar44) goto LAB_005b73c2;
                  pfVar38 = pfVar38 + uVar44;
                  pfVar47 = local_68 + uVar44;
                }
                uVar43 = (uint)uVar44;
                uVar50 = ~uVar43;
                if ((uVar34 & 3) != 0) {
                  iVar40 = 0;
                  do {
                    *pfVar38 = *pfVar47 + fVar62;
                    pfVar38 = pfVar38 + 1;
                    pfVar47 = pfVar47 + 1;
                    iVar40 = iVar40 + -1;
                  } while (-(uVar34 & 3) != iVar40);
                  uVar43 = uVar43 - iVar40;
                }
                if (2 < uVar50 + uVar34) {
                  lVar49 = 0;
                  do {
                    pfVar38[lVar49] = pfVar47[lVar49] + fVar62;
                    pfVar38[lVar49 + 1] = pfVar47[lVar49 + 1] + fVar62;
                    pfVar38[lVar49 + 2] = pfVar47[lVar49 + 2] + fVar62;
                    pfVar38[lVar49 + 3] = pfVar47[lVar49 + 3] + fVar62;
                    lVar49 = lVar49 + 4;
                  } while (uVar34 - uVar43 != (int)lVar49);
                }
              }
              goto LAB_005b73c2;
            }
LAB_005b72e0:
            pcVar55 = "expr: ex_eval(%d): bad right type %ld\n";
            puVar36 = (ulong *)0x0;
            lVar49 = lStack_80;
          }
          else {
            if (lStack_60 == 2) {
              if (lStack_80 - 0xeU < 2) {
                if (*(long *)(param_9 + 2) == 0xf) {
                  pfVar38 = *(float **)param_9;
                }
                else {
                  if (*(long *)(param_9 + 2) == 0xe) goto LAB_005c5996;
                  param_9[2] = 2.10195e-44;
                  param_9[3] = 0.0;
                  pfVar38 = malloc((long)*(int *)(param_7 + 0x28f8) << 2);
                  *(float **)param_9 = pfVar38;
                }
                uVar34 = *(uint *)(param_7 + 0x28f8);
                if (0 < (int)uVar34) {
                  uVar57 = (ulong)(uVar34 - 1);
                  uVar44 = 0;
                  pfVar47 = local_88;
                  if ((6 < uVar34 - 1) &&
                     ((local_88 + uVar57 + 1 <= pfVar38 || (pfVar38 + uVar57 + 1 <= local_88)))) {
                    uVar44 = uVar57 + 1 & 0xfffffffffffffff8;
                    uVar52 = (uVar44 - 8 >> 3) + 1;
                    if (uVar44 - 8 == 0) {
                      lVar49 = 0;
                    }
                    else {
                      uVar54 = uVar52 & 0x3ffffffffffffffe;
                      lVar49 = 0;
                      do {
                        pfVar47 = local_88 + lVar49;
                        fVar62 = pfVar47[1];
                        fVar232 = pfVar47[2];
                        fVar233 = pfVar47[3];
                        pfVar53 = local_88 + lVar49 + 4;
                        fVar234 = *pfVar53;
                        fVar235 = pfVar53[1];
                        fVar264 = pfVar53[2];
                        fVar265 = pfVar53[3];
                        pfVar53 = pfVar38 + lVar49;
                        *pfVar53 = *pfVar47 + local_68._0_4_;
                        pfVar53[1] = fVar62 + local_68._0_4_;
                        pfVar53[2] = fVar232 + local_68._0_4_;
                        pfVar53[3] = fVar233 + local_68._0_4_;
                        pfVar47 = pfVar38 + lVar49 + 4;
                        *pfVar47 = fVar234 + local_68._0_4_;
                        pfVar47[1] = fVar235 + local_68._0_4_;
                        pfVar47[2] = fVar264 + local_68._0_4_;
                        pfVar47[3] = fVar265 + local_68._0_4_;
                        pfVar47 = local_88 + lVar49 + 8;
                        fVar62 = pfVar47[1];
                        fVar232 = pfVar47[2];
                        fVar233 = pfVar47[3];
                        pfVar53 = local_88 + lVar49 + 0xc;
                        fVar234 = *pfVar53;
                        fVar235 = pfVar53[1];
                        fVar264 = pfVar53[2];
                        fVar265 = pfVar53[3];
                        pfVar53 = pfVar38 + lVar49 + 8;
                        *pfVar53 = *pfVar47 + local_68._0_4_;
                        pfVar53[1] = fVar62 + local_68._0_4_;
                        pfVar53[2] = fVar232 + local_68._0_4_;
                        pfVar53[3] = fVar233 + local_68._0_4_;
                        pfVar47 = pfVar38 + lVar49 + 0xc;
                        *pfVar47 = fVar234 + local_68._0_4_;
                        pfVar47[1] = fVar235 + local_68._0_4_;
                        pfVar47[2] = fVar264 + local_68._0_4_;
                        pfVar47[3] = fVar265 + local_68._0_4_;
                        lVar49 = lVar49 + 0x10;
                        uVar54 = uVar54 - 2;
                      } while (uVar54 != 0);
                    }
                    if ((uVar52 & 1) != 0) {
                      pfVar47 = local_88 + lVar49;
                      fVar62 = pfVar47[1];
                      fVar232 = pfVar47[2];
                      fVar233 = pfVar47[3];
                      pfVar53 = local_88 + lVar49 + 4;
                      fVar234 = *pfVar53;
                      fVar235 = pfVar53[1];
                      fVar264 = pfVar53[2];
                      fVar265 = pfVar53[3];
                      pfVar53 = pfVar38 + lVar49;
                      *pfVar53 = *pfVar47 + local_68._0_4_;
                      pfVar53[1] = fVar62 + local_68._0_4_;
                      pfVar53[2] = fVar232 + local_68._0_4_;
                      pfVar53[3] = fVar233 + local_68._0_4_;
                      pfVar47 = pfVar38 + lVar49 + 4;
                      *pfVar47 = fVar234 + local_68._0_4_;
                      pfVar47[1] = fVar235 + local_68._0_4_;
                      pfVar47[2] = fVar264 + local_68._0_4_;
                      pfVar47[3] = fVar265 + local_68._0_4_;
                    }
                    if (uVar57 + 1 == uVar44) goto LAB_005b73c2;
                    pfVar38 = pfVar38 + uVar44;
                    pfVar47 = local_88 + uVar44;
                  }
                  uVar43 = (uint)uVar44;
                  uVar50 = ~uVar43;
                  if ((uVar34 & 3) != 0) {
                    iVar40 = 0;
                    do {
                      *pfVar38 = *pfVar47 + local_68._0_4_;
                      pfVar38 = pfVar38 + 1;
                      pfVar47 = pfVar47 + 1;
                      iVar40 = iVar40 + -1;
                    } while (-(uVar34 & 3) != iVar40);
                    uVar43 = uVar43 - iVar40;
                  }
                  if (2 < uVar50 + uVar34) {
                    lVar49 = 0;
                    do {
                      pfVar38[lVar49] = pfVar47[lVar49] + local_68._0_4_;
                      pfVar38[lVar49 + 1] = pfVar47[lVar49 + 1] + local_68._0_4_;
                      pfVar38[lVar49 + 2] = pfVar47[lVar49 + 2] + local_68._0_4_;
                      pfVar38[lVar49 + 3] = pfVar47[lVar49 + 3] + local_68._0_4_;
                      lVar49 = lVar49 + 4;
                    } while (uVar34 - uVar43 != (int)lVar49);
                  }
                }
                goto LAB_005b73c2;
              }
              if (lStack_80 == 2) {
                if (*(long *)(param_9 + 2) == 0xf) {
                  iVar40 = *(int *)(param_7 + 0x28f8);
                  if (0 < iVar40) {
                    fVar62 = local_88._0_4_ + local_68._0_4_;
                    lVar49 = *(long *)param_9;
                    uVar44 = 0;
                    if (6 < iVar40 - 1U) {
                      uVar52 = (ulong)(iVar40 - 1U) + 1;
                      uVar44 = uVar52 & 0xfffffffffffffff8;
                      uVar54 = (uVar44 - 8 >> 3) + 1;
                      uVar57 = (ulong)((uint)uVar54 & 7);
                      if (uVar44 - 8 < 0x38) {
                        lVar45 = 0;
                      }
                      else {
                        uVar54 = uVar54 & 0xfffffffffffffff8;
                        lVar45 = 0;
                        do {
                          pfVar38 = (float *)(lVar49 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          lVar45 = lVar45 + 0x40;
                          uVar54 = uVar54 - 8;
                        } while (uVar54 != 0);
                      }
                      if (uVar57 != 0) {
                        lVar45 = lVar49 + lVar45 * 4;
                        lVar48 = 0;
                        do {
                          pfVar38 = (float *)(lVar45 + lVar48);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          lVar48 = lVar48 + 0x20;
                        } while (uVar57 * 0x20 != lVar48);
                      }
                      if (uVar52 == uVar44) goto LAB_005b73c2;
                      lVar49 = lVar49 + uVar44 * 4;
                    }
                    lVar45 = 0;
                    do {
                      *(float *)(lVar49 + lVar45 * 4) = fVar62;
                      lVar45 = lVar45 + 1;
                    } while (iVar40 - (int)uVar44 != (int)lVar45);
                  }
                  goto LAB_005b73c2;
                }
                param_9[2] = 2.8026e-45;
                param_9[3] = 0.0;
                fVar62 = local_88._0_4_;
              }
              else {
                if (lStack_80 != 1) goto LAB_005b72e0;
                if (*(long *)(param_9 + 2) == 0xf) {
                  iVar40 = *(int *)(param_7 + 0x28f8);
                  if (0 < iVar40) {
                    fVar62 = (float)(long)local_88 + local_68._0_4_;
                    lVar49 = *(long *)param_9;
                    uVar44 = 0;
                    if (6 < iVar40 - 1U) {
                      uVar52 = (ulong)(iVar40 - 1U) + 1;
                      uVar44 = uVar52 & 0xfffffffffffffff8;
                      uVar54 = (uVar44 - 8 >> 3) + 1;
                      uVar57 = (ulong)((uint)uVar54 & 7);
                      if (uVar44 - 8 < 0x38) {
                        lVar45 = 0;
                      }
                      else {
                        uVar54 = uVar54 & 0xfffffffffffffff8;
                        lVar45 = 0;
                        do {
                          pfVar38 = (float *)(lVar49 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          lVar45 = lVar45 + 0x40;
                          uVar54 = uVar54 - 8;
                        } while (uVar54 != 0);
                      }
                      if (uVar57 != 0) {
                        lVar45 = lVar49 + lVar45 * 4;
                        lVar48 = 0;
                        do {
                          pfVar38 = (float *)(lVar45 + lVar48);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          lVar48 = lVar48 + 0x20;
                        } while (uVar57 * 0x20 != lVar48);
                      }
                      if (uVar52 == uVar44) goto LAB_005b73c2;
                      lVar49 = lVar49 + uVar44 * 4;
                    }
                    lVar45 = 0;
                    do {
                      *(float *)(lVar49 + lVar45 * 4) = fVar62;
                      lVar45 = lVar45 + 1;
                    } while (iVar40 - (int)uVar44 != (int)lVar45);
                  }
                  goto LAB_005b73c2;
                }
                param_9[2] = 2.8026e-45;
                param_9[3] = 0.0;
                fVar62 = (float)(long)local_88;
              }
              *param_9 = fVar62 + local_68._0_4_;
              goto LAB_005b73c2;
            }
            if (lStack_60 == 1) {
              if (lStack_80 - 0xeU < 2) {
                if (*(long *)(param_9 + 2) == 0xf) {
                  pfVar38 = *(float **)param_9;
                }
                else {
                  if (*(long *)(param_9 + 2) == 0xe) goto LAB_005c5996;
                  param_9[2] = 2.10195e-44;
                  param_9[3] = 0.0;
                  pfVar38 = malloc((long)*(int *)(param_7 + 0x28f8) << 2);
                  *(float **)param_9 = pfVar38;
                }
                uVar34 = *(uint *)(param_7 + 0x28f8);
                if (0 < (int)uVar34) {
                  fVar62 = (float)(long)local_68;
                  uVar57 = (ulong)(uVar34 - 1);
                  uVar44 = 0;
                  pfVar47 = local_88;
                  if ((6 < uVar34 - 1) &&
                     ((local_88 + uVar57 + 1 <= pfVar38 || (pfVar38 + uVar57 + 1 <= local_88)))) {
                    uVar44 = uVar57 + 1 & 0xfffffffffffffff8;
                    uVar52 = (uVar44 - 8 >> 3) + 1;
                    if (uVar44 - 8 == 0) {
                      lVar49 = 0;
                    }
                    else {
                      uVar54 = uVar52 & 0x3ffffffffffffffe;
                      lVar49 = 0;
                      do {
                        pfVar47 = local_88 + lVar49;
                        fVar232 = pfVar47[1];
                        fVar233 = pfVar47[2];
                        fVar234 = pfVar47[3];
                        pfVar53 = local_88 + lVar49 + 4;
                        fVar235 = *pfVar53;
                        fVar264 = pfVar53[1];
                        fVar265 = pfVar53[2];
                        fVar266 = pfVar53[3];
                        pfVar53 = pfVar38 + lVar49;
                        *pfVar53 = *pfVar47 + fVar62;
                        pfVar53[1] = fVar232 + fVar62;
                        pfVar53[2] = fVar233 + fVar62;
                        pfVar53[3] = fVar234 + fVar62;
                        pfVar47 = pfVar38 + lVar49 + 4;
                        *pfVar47 = fVar235 + fVar62;
                        pfVar47[1] = fVar264 + fVar62;
                        pfVar47[2] = fVar265 + fVar62;
                        pfVar47[3] = fVar266 + fVar62;
                        pfVar47 = local_88 + lVar49 + 8;
                        fVar232 = pfVar47[1];
                        fVar233 = pfVar47[2];
                        fVar234 = pfVar47[3];
                        pfVar53 = local_88 + lVar49 + 0xc;
                        fVar235 = *pfVar53;
                        fVar264 = pfVar53[1];
                        fVar265 = pfVar53[2];
                        fVar266 = pfVar53[3];
                        pfVar53 = pfVar38 + lVar49 + 8;
                        *pfVar53 = *pfVar47 + fVar62;
                        pfVar53[1] = fVar232 + fVar62;
                        pfVar53[2] = fVar233 + fVar62;
                        pfVar53[3] = fVar234 + fVar62;
                        pfVar47 = pfVar38 + lVar49 + 0xc;
                        *pfVar47 = fVar235 + fVar62;
                        pfVar47[1] = fVar264 + fVar62;
                        pfVar47[2] = fVar265 + fVar62;
                        pfVar47[3] = fVar266 + fVar62;
                        lVar49 = lVar49 + 0x10;
                        uVar54 = uVar54 - 2;
                      } while (uVar54 != 0);
                    }
                    if ((uVar52 & 1) != 0) {
                      pfVar47 = local_88 + lVar49;
                      fVar232 = pfVar47[1];
                      fVar233 = pfVar47[2];
                      fVar234 = pfVar47[3];
                      pfVar53 = local_88 + lVar49 + 4;
                      fVar235 = *pfVar53;
                      fVar264 = pfVar53[1];
                      fVar265 = pfVar53[2];
                      fVar266 = pfVar53[3];
                      pfVar53 = pfVar38 + lVar49;
                      *pfVar53 = *pfVar47 + fVar62;
                      pfVar53[1] = fVar232 + fVar62;
                      pfVar53[2] = fVar233 + fVar62;
                      pfVar53[3] = fVar234 + fVar62;
                      pfVar47 = pfVar38 + lVar49 + 4;
                      *pfVar47 = fVar235 + fVar62;
                      pfVar47[1] = fVar264 + fVar62;
                      pfVar47[2] = fVar265 + fVar62;
                      pfVar47[3] = fVar266 + fVar62;
                    }
                    if (uVar57 + 1 == uVar44) goto LAB_005b73c2;
                    pfVar38 = pfVar38 + uVar44;
                    pfVar47 = local_88 + uVar44;
                  }
                  uVar43 = (uint)uVar44;
                  uVar50 = ~uVar43;
                  if ((uVar34 & 3) != 0) {
                    iVar40 = 0;
                    do {
                      *pfVar38 = *pfVar47 + fVar62;
                      pfVar38 = pfVar38 + 1;
                      pfVar47 = pfVar47 + 1;
                      iVar40 = iVar40 + -1;
                    } while (-(uVar34 & 3) != iVar40);
                    uVar43 = uVar43 - iVar40;
                  }
                  if (2 < uVar50 + uVar34) {
                    lVar49 = 0;
                    do {
                      pfVar38[lVar49] = pfVar47[lVar49] + fVar62;
                      pfVar38[lVar49 + 1] = pfVar47[lVar49 + 1] + fVar62;
                      pfVar38[lVar49 + 2] = pfVar47[lVar49 + 2] + fVar62;
                      pfVar38[lVar49 + 3] = pfVar47[lVar49 + 3] + fVar62;
                      lVar49 = lVar49 + 4;
                    } while (uVar34 - uVar43 != (int)lVar49);
                  }
                }
                goto LAB_005b73c2;
              }
              if (lStack_80 == 2) {
                if (*(long *)(param_9 + 2) == 0xf) {
                  iVar40 = *(int *)(param_7 + 0x28f8);
                  if (0 < iVar40) {
                    fVar62 = (float)(long)local_68 + local_88._0_4_;
                    lVar49 = *(long *)param_9;
                    uVar44 = 0;
                    if (6 < iVar40 - 1U) {
                      uVar52 = (ulong)(iVar40 - 1U) + 1;
                      uVar44 = uVar52 & 0xfffffffffffffff8;
                      uVar54 = (uVar44 - 8 >> 3) + 1;
                      uVar57 = (ulong)((uint)uVar54 & 7);
                      if (uVar44 - 8 < 0x38) {
                        lVar45 = 0;
                      }
                      else {
                        uVar54 = uVar54 & 0xfffffffffffffff8;
                        lVar45 = 0;
                        do {
                          pfVar38 = (float *)(lVar49 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          lVar45 = lVar45 + 0x40;
                          uVar54 = uVar54 - 8;
                        } while (uVar54 != 0);
                      }
                      if (uVar57 != 0) {
                        lVar45 = lVar49 + lVar45 * 4;
                        lVar48 = 0;
                        do {
                          pfVar38 = (float *)(lVar45 + lVar48);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          lVar48 = lVar48 + 0x20;
                        } while (uVar57 * 0x20 != lVar48);
                      }
                      if (uVar52 == uVar44) goto LAB_005b73c2;
                      lVar49 = lVar49 + uVar44 * 4;
                    }
                    lVar45 = 0;
                    do {
                      *(float *)(lVar49 + lVar45 * 4) = fVar62;
                      lVar45 = lVar45 + 1;
                    } while (iVar40 - (int)uVar44 != (int)lVar45);
                  }
                }
                else {
                  param_9[2] = 2.8026e-45;
                  param_9[3] = 0.0;
                  *param_9 = (float)(long)local_68 + local_88._0_4_;
                }
                goto LAB_005b73c2;
              }
              if (lStack_80 == 1) {
                if (*(long *)(param_9 + 2) == 0xf) {
                  iVar40 = *(int *)(param_7 + 0x28f8);
                  if (0 < iVar40) {
                    fVar62 = (float)((long)local_88 + (long)local_68);
                    lVar49 = *(long *)param_9;
                    uVar44 = 0;
                    if (6 < iVar40 - 1U) {
                      uVar52 = (ulong)(iVar40 - 1U) + 1;
                      uVar44 = uVar52 & 0xfffffffffffffff8;
                      uVar54 = (uVar44 - 8 >> 3) + 1;
                      uVar57 = (ulong)((uint)uVar54 & 7);
                      if (uVar44 - 8 < 0x38) {
                        lVar45 = 0;
                      }
                      else {
                        uVar54 = uVar54 & 0xfffffffffffffff8;
                        lVar45 = 0;
                        do {
                          pfVar38 = (float *)(lVar49 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          lVar45 = lVar45 + 0x40;
                          uVar54 = uVar54 - 8;
                        } while (uVar54 != 0);
                      }
                      if (uVar57 != 0) {
                        lVar45 = lVar49 + lVar45 * 4;
                        lVar48 = 0;
                        do {
                          pfVar38 = (float *)(lVar45 + lVar48);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          lVar48 = lVar48 + 0x20;
                        } while (uVar57 * 0x20 != lVar48);
                      }
                      if (uVar52 == uVar44) goto LAB_005b73c2;
                      lVar49 = lVar49 + uVar44 * 4;
                    }
                    lVar45 = 0;
                    do {
                      *(float *)(lVar49 + lVar45 * 4) = fVar62;
                      lVar45 = lVar45 + 1;
                    } while (iVar40 - (int)uVar44 != (int)lVar45);
                  }
                }
                else {
                  param_9[2] = 1.4013e-45;
                  param_9[3] = 0.0;
                  *(long *)param_9 = (long)local_88 + (long)local_68;
                }
                goto LAB_005b73c2;
              }
              goto LAB_005b72e0;
            }
            pcVar55 = "expr: ex_eval(%d): bad left type %ld\n";
            lVar49 = lStack_60;
          }
          uVar46 = 0x52d;
          goto LAB_005b73bb;
        }
        puVar36 = ex_eval(0,param_2,param_3,param_4,param_5,param_6,param_7,puVar36,
                          (float *)&local_68,puVar51,param_11,param_12);
        puVar36 = ex_eval(extraout_XMM0_Qa_10,param_2,param_3,param_4,param_5,param_6,param_7,
                          puVar36,(float *)&local_88,puVar51,param_11,param_12);
        uVar236 = in_XMM3._0_8_;
        uVar63 = in_XMM2._0_8_;
        uVar44 = extraout_XMM0_Qa_11;
        if (lStack_60 - 0xeU < 2) {
          if (*(long *)(param_9 + 2) == 0xf) {
            pfVar38 = *(float **)param_9;
          }
          else {
            if (*(long *)(param_9 + 2) == 0xe) goto LAB_005c5996;
            param_9[2] = 2.10195e-44;
            param_9[3] = 0.0;
            pfVar38 = malloc((long)*(int *)(param_7 + 0x28f8) << 2);
            uVar236 = in_XMM3._0_8_;
            uVar63 = in_XMM2._0_8_;
            *(float **)param_9 = pfVar38;
            uVar44 = extraout_XMM0_Qa_24;
          }
          if (lStack_80 - 0xeU < 2) {
            uVar34 = *(uint *)(param_7 + 0x28f8);
            if (0 < (int)uVar34) {
              uVar44 = (ulong)(uVar34 - 1);
              uVar57 = 0;
              pfVar53 = local_68;
              pfVar47 = local_88;
              if (6 < uVar34 - 1) {
                if ((local_68 + uVar44 + 1 <= pfVar38 || pfVar38 + uVar44 + 1 <= local_68) &&
                   (local_88 + uVar44 + 1 <= pfVar38 || pfVar38 + uVar44 + 1 <= local_88)) {
                  uVar57 = uVar44 + 1 & 0xfffffffffffffff8;
                  uVar52 = (uVar57 - 8 >> 3) + 1;
                  if (uVar57 - 8 == 0) {
                    lVar49 = 0;
                  }
                  else {
                    uVar54 = uVar52 & 0x3ffffffffffffffe;
                    lVar49 = 0;
                    do {
                      pfVar47 = local_68 + lVar49;
                      fVar62 = pfVar47[1];
                      fVar232 = pfVar47[2];
                      fVar233 = pfVar47[3];
                      pfVar53 = local_68 + lVar49 + 4;
                      fVar234 = *pfVar53;
                      fVar235 = pfVar53[1];
                      fVar264 = pfVar53[2];
                      fVar265 = pfVar53[3];
                      pfVar53 = local_88 + lVar49;
                      fVar266 = pfVar53[1];
                      fVar28 = pfVar53[2];
                      fVar29 = pfVar53[3];
                      pfVar2 = local_88 + lVar49 + 4;
                      fVar30 = *pfVar2;
                      fVar31 = pfVar2[1];
                      fVar32 = pfVar2[2];
                      fVar33 = pfVar2[3];
                      pfVar2 = pfVar38 + lVar49;
                      *pfVar2 = *pfVar47 - *pfVar53;
                      pfVar2[1] = fVar62 - fVar266;
                      pfVar2[2] = fVar232 - fVar28;
                      pfVar2[3] = fVar233 - fVar29;
                      pfVar47 = pfVar38 + lVar49 + 4;
                      *pfVar47 = fVar234 - fVar30;
                      pfVar47[1] = fVar235 - fVar31;
                      pfVar47[2] = fVar264 - fVar32;
                      pfVar47[3] = fVar265 - fVar33;
                      pfVar47 = local_68 + lVar49 + 8;
                      fVar62 = pfVar47[1];
                      fVar232 = pfVar47[2];
                      fVar233 = pfVar47[3];
                      pfVar53 = local_68 + lVar49 + 0xc;
                      fVar234 = *pfVar53;
                      fVar235 = pfVar53[1];
                      fVar264 = pfVar53[2];
                      fVar265 = pfVar53[3];
                      pfVar53 = local_88 + lVar49 + 8;
                      fVar266 = pfVar53[1];
                      fVar28 = pfVar53[2];
                      fVar29 = pfVar53[3];
                      pfVar2 = local_88 + lVar49 + 0xc;
                      fVar30 = *pfVar2;
                      fVar31 = pfVar2[1];
                      fVar32 = pfVar2[2];
                      fVar33 = pfVar2[3];
                      pfVar2 = pfVar38 + lVar49 + 8;
                      *pfVar2 = *pfVar47 - *pfVar53;
                      pfVar2[1] = fVar62 - fVar266;
                      pfVar2[2] = fVar232 - fVar28;
                      pfVar2[3] = fVar233 - fVar29;
                      pfVar47 = pfVar38 + lVar49 + 0xc;
                      *pfVar47 = fVar234 - fVar30;
                      pfVar47[1] = fVar235 - fVar31;
                      pfVar47[2] = fVar264 - fVar32;
                      pfVar47[3] = fVar265 - fVar33;
                      lVar49 = lVar49 + 0x10;
                      uVar54 = uVar54 - 2;
                    } while (uVar54 != 0);
                  }
                  if ((uVar52 & 1) != 0) {
                    pfVar47 = local_68 + lVar49;
                    fVar62 = pfVar47[1];
                    fVar232 = pfVar47[2];
                    fVar233 = pfVar47[3];
                    pfVar53 = local_68 + lVar49 + 4;
                    fVar234 = *pfVar53;
                    fVar235 = pfVar53[1];
                    fVar264 = pfVar53[2];
                    fVar265 = pfVar53[3];
                    pfVar53 = local_88 + lVar49;
                    fVar266 = pfVar53[1];
                    fVar28 = pfVar53[2];
                    fVar29 = pfVar53[3];
                    pfVar2 = local_88 + lVar49 + 4;
                    fVar30 = *pfVar2;
                    fVar31 = pfVar2[1];
                    fVar32 = pfVar2[2];
                    fVar33 = pfVar2[3];
                    pfVar2 = pfVar38 + lVar49;
                    *pfVar2 = *pfVar47 - *pfVar53;
                    pfVar2[1] = fVar62 - fVar266;
                    pfVar2[2] = fVar232 - fVar28;
                    pfVar2[3] = fVar233 - fVar29;
                    pfVar47 = pfVar38 + lVar49 + 4;
                    *pfVar47 = fVar234 - fVar30;
                    pfVar47[1] = fVar235 - fVar31;
                    pfVar47[2] = fVar264 - fVar32;
                    pfVar47[3] = fVar265 - fVar33;
                  }
                  if (uVar44 + 1 == uVar57) goto LAB_005b73c2;
                  pfVar38 = pfVar38 + uVar57;
                  pfVar47 = local_88 + uVar57;
                  pfVar53 = local_68 + uVar57;
                }
              }
              uVar50 = (uint)uVar57;
              uVar43 = ~uVar50;
              if ((uVar34 & 3) != 0) {
                iVar40 = 0;
                do {
                  *pfVar38 = *pfVar53 - *pfVar47;
                  pfVar38 = pfVar38 + 1;
                  pfVar47 = pfVar47 + 1;
                  pfVar53 = pfVar53 + 1;
                  iVar40 = iVar40 + -1;
                } while (-(uVar34 & 3) != iVar40);
                uVar50 = uVar50 - iVar40;
              }
              if (2 < uVar43 + uVar34) {
                lVar49 = 0;
                do {
                  pfVar38[lVar49] = pfVar53[lVar49] - pfVar47[lVar49];
                  pfVar38[lVar49 + 1] = pfVar53[lVar49 + 1] - pfVar47[lVar49 + 1];
                  pfVar38[lVar49 + 2] = pfVar53[lVar49 + 2] - pfVar47[lVar49 + 2];
                  pfVar38[lVar49 + 3] = pfVar53[lVar49 + 3] - pfVar47[lVar49 + 3];
                  lVar49 = lVar49 + 4;
                } while (uVar34 - uVar50 != (int)lVar49);
              }
            }
            goto LAB_005b73c2;
          }
          if (lStack_80 == 2) {
            uVar34 = *(uint *)(param_7 + 0x28f8);
            if (0 < (int)uVar34) {
              uVar57 = (ulong)(uVar34 - 1);
              uVar44 = 0;
              pfVar47 = local_68;
              if ((6 < uVar34 - 1) &&
                 ((local_68 + uVar57 + 1 <= pfVar38 || (pfVar38 + uVar57 + 1 <= local_68)))) {
                uVar44 = uVar57 + 1 & 0xfffffffffffffff8;
                uVar52 = (uVar44 - 8 >> 3) + 1;
                if (uVar44 - 8 == 0) {
                  lVar49 = 0;
                }
                else {
                  uVar54 = uVar52 & 0x3ffffffffffffffe;
                  lVar49 = 0;
                  do {
                    pfVar47 = local_68 + lVar49;
                    fVar62 = pfVar47[1];
                    fVar232 = pfVar47[2];
                    fVar233 = pfVar47[3];
                    pfVar53 = local_68 + lVar49 + 4;
                    fVar234 = *pfVar53;
                    fVar235 = pfVar53[1];
                    fVar264 = pfVar53[2];
                    fVar265 = pfVar53[3];
                    pfVar53 = pfVar38 + lVar49;
                    *pfVar53 = *pfVar47 - local_88._0_4_;
                    pfVar53[1] = fVar62 - local_88._0_4_;
                    pfVar53[2] = fVar232 - local_88._0_4_;
                    pfVar53[3] = fVar233 - local_88._0_4_;
                    pfVar47 = pfVar38 + lVar49 + 4;
                    *pfVar47 = fVar234 - local_88._0_4_;
                    pfVar47[1] = fVar235 - local_88._0_4_;
                    pfVar47[2] = fVar264 - local_88._0_4_;
                    pfVar47[3] = fVar265 - local_88._0_4_;
                    pfVar47 = local_68 + lVar49 + 8;
                    fVar62 = pfVar47[1];
                    fVar232 = pfVar47[2];
                    fVar233 = pfVar47[3];
                    pfVar53 = local_68 + lVar49 + 0xc;
                    fVar234 = *pfVar53;
                    fVar235 = pfVar53[1];
                    fVar264 = pfVar53[2];
                    fVar265 = pfVar53[3];
                    pfVar53 = pfVar38 + lVar49 + 8;
                    *pfVar53 = *pfVar47 - local_88._0_4_;
                    pfVar53[1] = fVar62 - local_88._0_4_;
                    pfVar53[2] = fVar232 - local_88._0_4_;
                    pfVar53[3] = fVar233 - local_88._0_4_;
                    pfVar47 = pfVar38 + lVar49 + 0xc;
                    *pfVar47 = fVar234 - local_88._0_4_;
                    pfVar47[1] = fVar235 - local_88._0_4_;
                    pfVar47[2] = fVar264 - local_88._0_4_;
                    pfVar47[3] = fVar265 - local_88._0_4_;
                    lVar49 = lVar49 + 0x10;
                    uVar54 = uVar54 - 2;
                  } while (uVar54 != 0);
                }
                if ((uVar52 & 1) != 0) {
                  pfVar47 = local_68 + lVar49;
                  fVar62 = pfVar47[1];
                  fVar232 = pfVar47[2];
                  fVar233 = pfVar47[3];
                  pfVar53 = local_68 + lVar49 + 4;
                  fVar234 = *pfVar53;
                  fVar235 = pfVar53[1];
                  fVar264 = pfVar53[2];
                  fVar265 = pfVar53[3];
                  pfVar53 = pfVar38 + lVar49;
                  *pfVar53 = *pfVar47 - local_88._0_4_;
                  pfVar53[1] = fVar62 - local_88._0_4_;
                  pfVar53[2] = fVar232 - local_88._0_4_;
                  pfVar53[3] = fVar233 - local_88._0_4_;
                  pfVar47 = pfVar38 + lVar49 + 4;
                  *pfVar47 = fVar234 - local_88._0_4_;
                  pfVar47[1] = fVar235 - local_88._0_4_;
                  pfVar47[2] = fVar264 - local_88._0_4_;
                  pfVar47[3] = fVar265 - local_88._0_4_;
                }
                if (uVar57 + 1 == uVar44) goto LAB_005b73c2;
                pfVar38 = pfVar38 + uVar44;
                pfVar47 = local_68 + uVar44;
              }
              uVar43 = (uint)uVar44;
              uVar50 = ~uVar43;
              if ((uVar34 & 3) != 0) {
                iVar40 = 0;
                do {
                  *pfVar38 = *pfVar47 - local_88._0_4_;
                  pfVar38 = pfVar38 + 1;
                  pfVar47 = pfVar47 + 1;
                  iVar40 = iVar40 + -1;
                } while (-(uVar34 & 3) != iVar40);
                uVar43 = uVar43 - iVar40;
              }
              if (2 < uVar50 + uVar34) {
                lVar49 = 0;
                do {
                  pfVar38[lVar49] = pfVar47[lVar49] - local_88._0_4_;
                  pfVar38[lVar49 + 1] = pfVar47[lVar49 + 1] - local_88._0_4_;
                  pfVar38[lVar49 + 2] = pfVar47[lVar49 + 2] - local_88._0_4_;
                  pfVar38[lVar49 + 3] = pfVar47[lVar49 + 3] - local_88._0_4_;
                  lVar49 = lVar49 + 4;
                } while (uVar34 - uVar43 != (int)lVar49);
              }
            }
            goto LAB_005b73c2;
          }
          if (lStack_80 == 1) {
            uVar34 = *(uint *)(param_7 + 0x28f8);
            if (0 < (int)uVar34) {
              fVar62 = (float)(long)local_88;
              uVar57 = (ulong)(uVar34 - 1);
              uVar44 = 0;
              pfVar47 = local_68;
              if ((6 < uVar34 - 1) &&
                 ((local_68 + uVar57 + 1 <= pfVar38 || (pfVar38 + uVar57 + 1 <= local_68)))) {
                uVar44 = uVar57 + 1 & 0xfffffffffffffff8;
                uVar52 = (uVar44 - 8 >> 3) + 1;
                if (uVar44 - 8 == 0) {
                  lVar49 = 0;
                }
                else {
                  uVar54 = uVar52 & 0x3ffffffffffffffe;
                  lVar49 = 0;
                  do {
                    pfVar47 = local_68 + lVar49;
                    fVar232 = pfVar47[1];
                    fVar233 = pfVar47[2];
                    fVar234 = pfVar47[3];
                    pfVar53 = local_68 + lVar49 + 4;
                    fVar235 = *pfVar53;
                    fVar264 = pfVar53[1];
                    fVar265 = pfVar53[2];
                    fVar266 = pfVar53[3];
                    pfVar53 = pfVar38 + lVar49;
                    *pfVar53 = *pfVar47 - fVar62;
                    pfVar53[1] = fVar232 - fVar62;
                    pfVar53[2] = fVar233 - fVar62;
                    pfVar53[3] = fVar234 - fVar62;
                    pfVar47 = pfVar38 + lVar49 + 4;
                    *pfVar47 = fVar235 - fVar62;
                    pfVar47[1] = fVar264 - fVar62;
                    pfVar47[2] = fVar265 - fVar62;
                    pfVar47[3] = fVar266 - fVar62;
                    pfVar47 = local_68 + lVar49 + 8;
                    fVar232 = pfVar47[1];
                    fVar233 = pfVar47[2];
                    fVar234 = pfVar47[3];
                    pfVar53 = local_68 + lVar49 + 0xc;
                    fVar235 = *pfVar53;
                    fVar264 = pfVar53[1];
                    fVar265 = pfVar53[2];
                    fVar266 = pfVar53[3];
                    pfVar53 = pfVar38 + lVar49 + 8;
                    *pfVar53 = *pfVar47 - fVar62;
                    pfVar53[1] = fVar232 - fVar62;
                    pfVar53[2] = fVar233 - fVar62;
                    pfVar53[3] = fVar234 - fVar62;
                    pfVar47 = pfVar38 + lVar49 + 0xc;
                    *pfVar47 = fVar235 - fVar62;
                    pfVar47[1] = fVar264 - fVar62;
                    pfVar47[2] = fVar265 - fVar62;
                    pfVar47[3] = fVar266 - fVar62;
                    lVar49 = lVar49 + 0x10;
                    uVar54 = uVar54 - 2;
                  } while (uVar54 != 0);
                }
                if ((uVar52 & 1) != 0) {
                  pfVar47 = local_68 + lVar49;
                  fVar232 = pfVar47[1];
                  fVar233 = pfVar47[2];
                  fVar234 = pfVar47[3];
                  pfVar53 = local_68 + lVar49 + 4;
                  fVar235 = *pfVar53;
                  fVar264 = pfVar53[1];
                  fVar265 = pfVar53[2];
                  fVar266 = pfVar53[3];
                  pfVar53 = pfVar38 + lVar49;
                  *pfVar53 = *pfVar47 - fVar62;
                  pfVar53[1] = fVar232 - fVar62;
                  pfVar53[2] = fVar233 - fVar62;
                  pfVar53[3] = fVar234 - fVar62;
                  pfVar47 = pfVar38 + lVar49 + 4;
                  *pfVar47 = fVar235 - fVar62;
                  pfVar47[1] = fVar264 - fVar62;
                  pfVar47[2] = fVar265 - fVar62;
                  pfVar47[3] = fVar266 - fVar62;
                }
                if (uVar57 + 1 == uVar44) goto LAB_005b73c2;
                pfVar38 = pfVar38 + uVar44;
                pfVar47 = local_68 + uVar44;
              }
              uVar43 = (uint)uVar44;
              uVar50 = ~uVar43;
              if ((uVar34 & 3) != 0) {
                iVar40 = 0;
                do {
                  *pfVar38 = *pfVar47 - fVar62;
                  pfVar38 = pfVar38 + 1;
                  pfVar47 = pfVar47 + 1;
                  iVar40 = iVar40 + -1;
                } while (-(uVar34 & 3) != iVar40);
                uVar43 = uVar43 - iVar40;
              }
              if (2 < uVar50 + uVar34) {
                lVar49 = 0;
                do {
                  pfVar38[lVar49] = pfVar47[lVar49] - fVar62;
                  pfVar38[lVar49 + 1] = pfVar47[lVar49 + 1] - fVar62;
                  pfVar38[lVar49 + 2] = pfVar47[lVar49 + 2] - fVar62;
                  pfVar38[lVar49 + 3] = pfVar47[lVar49 + 3] - fVar62;
                  lVar49 = lVar49 + 4;
                } while (uVar34 - uVar43 != (int)lVar49);
              }
            }
            goto LAB_005b73c2;
          }
LAB_005b72c9:
          pcVar55 = "expr: ex_eval(%d): bad right type %ld\n";
          puVar36 = (ulong *)0x0;
          lVar49 = lStack_80;
        }
        else {
          if (lStack_60 == 2) {
            if (lStack_80 - 0xeU < 2) {
              if (*(long *)(param_9 + 2) == 0xf) {
                pfVar38 = *(float **)param_9;
              }
              else {
                if (*(long *)(param_9 + 2) == 0xe) goto LAB_005c5996;
                param_9[2] = 2.10195e-44;
                param_9[3] = 0.0;
                pfVar38 = malloc((long)*(int *)(param_7 + 0x28f8) << 2);
                *(float **)param_9 = pfVar38;
              }
              uVar34 = *(uint *)(param_7 + 0x28f8);
              if (0 < (int)uVar34) {
                uVar57 = (ulong)(uVar34 - 1);
                uVar44 = 0;
                pfVar47 = local_88;
                if ((6 < uVar34 - 1) &&
                   ((local_88 + uVar57 + 1 <= pfVar38 || (pfVar38 + uVar57 + 1 <= local_88)))) {
                  uVar44 = uVar57 + 1 & 0xfffffffffffffff8;
                  uVar52 = (uVar44 - 8 >> 3) + 1;
                  if (uVar44 - 8 == 0) {
                    lVar49 = 0;
                  }
                  else {
                    uVar54 = uVar52 & 0x3ffffffffffffffe;
                    lVar49 = 0;
                    do {
                      pfVar47 = local_88 + lVar49;
                      fVar62 = pfVar47[1];
                      fVar232 = pfVar47[2];
                      fVar233 = pfVar47[3];
                      pfVar53 = local_88 + lVar49 + 4;
                      fVar234 = *pfVar53;
                      fVar235 = pfVar53[1];
                      fVar264 = pfVar53[2];
                      fVar265 = pfVar53[3];
                      pfVar53 = pfVar38 + lVar49;
                      *pfVar53 = local_68._0_4_ - *pfVar47;
                      pfVar53[1] = local_68._0_4_ - fVar62;
                      pfVar53[2] = local_68._0_4_ - fVar232;
                      pfVar53[3] = local_68._0_4_ - fVar233;
                      pfVar47 = pfVar38 + lVar49 + 4;
                      *pfVar47 = local_68._0_4_ - fVar234;
                      pfVar47[1] = local_68._0_4_ - fVar235;
                      pfVar47[2] = local_68._0_4_ - fVar264;
                      pfVar47[3] = local_68._0_4_ - fVar265;
                      pfVar47 = local_88 + lVar49 + 8;
                      fVar62 = pfVar47[1];
                      fVar232 = pfVar47[2];
                      fVar233 = pfVar47[3];
                      pfVar53 = local_88 + lVar49 + 0xc;
                      fVar234 = *pfVar53;
                      fVar235 = pfVar53[1];
                      fVar264 = pfVar53[2];
                      fVar265 = pfVar53[3];
                      pfVar53 = pfVar38 + lVar49 + 8;
                      *pfVar53 = local_68._0_4_ - *pfVar47;
                      pfVar53[1] = local_68._0_4_ - fVar62;
                      pfVar53[2] = local_68._0_4_ - fVar232;
                      pfVar53[3] = local_68._0_4_ - fVar233;
                      pfVar47 = pfVar38 + lVar49 + 0xc;
                      *pfVar47 = local_68._0_4_ - fVar234;
                      pfVar47[1] = local_68._0_4_ - fVar235;
                      pfVar47[2] = local_68._0_4_ - fVar264;
                      pfVar47[3] = local_68._0_4_ - fVar265;
                      lVar49 = lVar49 + 0x10;
                      uVar54 = uVar54 - 2;
                    } while (uVar54 != 0);
                  }
                  if ((uVar52 & 1) != 0) {
                    pfVar47 = local_88 + lVar49;
                    fVar62 = pfVar47[1];
                    fVar232 = pfVar47[2];
                    fVar233 = pfVar47[3];
                    pfVar53 = local_88 + lVar49 + 4;
                    fVar234 = *pfVar53;
                    fVar235 = pfVar53[1];
                    fVar264 = pfVar53[2];
                    fVar265 = pfVar53[3];
                    pfVar53 = pfVar38 + lVar49;
                    *pfVar53 = local_68._0_4_ - *pfVar47;
                    pfVar53[1] = local_68._0_4_ - fVar62;
                    pfVar53[2] = local_68._0_4_ - fVar232;
                    pfVar53[3] = local_68._0_4_ - fVar233;
                    pfVar47 = pfVar38 + lVar49 + 4;
                    *pfVar47 = local_68._0_4_ - fVar234;
                    pfVar47[1] = local_68._0_4_ - fVar235;
                    pfVar47[2] = local_68._0_4_ - fVar264;
                    pfVar47[3] = local_68._0_4_ - fVar265;
                  }
                  if (uVar57 + 1 == uVar44) goto LAB_005b73c2;
                  pfVar38 = pfVar38 + uVar44;
                  pfVar47 = local_88 + uVar44;
                }
                uVar43 = (uint)uVar44;
                uVar50 = ~uVar43;
                if ((uVar34 & 3) != 0) {
                  iVar40 = 0;
                  do {
                    *pfVar38 = local_68._0_4_ - *pfVar47;
                    pfVar38 = pfVar38 + 1;
                    pfVar47 = pfVar47 + 1;
                    iVar40 = iVar40 + -1;
                  } while (-(uVar34 & 3) != iVar40);
                  uVar43 = uVar43 - iVar40;
                }
                if (2 < uVar50 + uVar34) {
                  lVar49 = 0;
                  do {
                    pfVar38[lVar49] = local_68._0_4_ - pfVar47[lVar49];
                    pfVar38[lVar49 + 1] = local_68._0_4_ - pfVar47[lVar49 + 1];
                    pfVar38[lVar49 + 2] = local_68._0_4_ - pfVar47[lVar49 + 2];
                    pfVar38[lVar49 + 3] = local_68._0_4_ - pfVar47[lVar49 + 3];
                    lVar49 = lVar49 + 4;
                  } while (uVar34 - uVar43 != (int)lVar49);
                }
              }
              goto LAB_005b73c2;
            }
            if (lStack_80 == 2) {
              if (*(long *)(param_9 + 2) == 0xf) {
                iVar40 = *(int *)(param_7 + 0x28f8);
                if (0 < iVar40) {
                  fVar62 = local_68._0_4_ - local_88._0_4_;
                  lVar49 = *(long *)param_9;
                  uVar44 = 0;
                  if (6 < iVar40 - 1U) {
                    uVar52 = (ulong)(iVar40 - 1U) + 1;
                    uVar44 = uVar52 & 0xfffffffffffffff8;
                    uVar54 = (uVar44 - 8 >> 3) + 1;
                    uVar57 = (ulong)((uint)uVar54 & 7);
                    if (uVar44 - 8 < 0x38) {
                      lVar45 = 0;
                    }
                    else {
                      uVar54 = uVar54 & 0xfffffffffffffff8;
                      lVar45 = 0;
                      do {
                        pfVar38 = (float *)(lVar49 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar45 = lVar45 + 0x40;
                        uVar54 = uVar54 - 8;
                      } while (uVar54 != 0);
                    }
                    if (uVar57 != 0) {
                      lVar45 = lVar49 + lVar45 * 4;
                      lVar48 = 0;
                      do {
                        pfVar38 = (float *)(lVar45 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar48 = lVar48 + 0x20;
                      } while (uVar57 * 0x20 != lVar48);
                    }
                    if (uVar52 == uVar44) goto LAB_005b73c2;
                    lVar49 = lVar49 + uVar44 * 4;
                  }
                  lVar45 = 0;
                  do {
                    *(float *)(lVar49 + lVar45 * 4) = fVar62;
                    lVar45 = lVar45 + 1;
                  } while (iVar40 - (int)uVar44 != (int)lVar45);
                }
                goto LAB_005b73c2;
              }
              param_9[2] = 2.8026e-45;
              param_9[3] = 0.0;
              fVar62 = local_68._0_4_;
LAB_005bd066:
              *param_9 = fVar62 - local_88._0_4_;
              goto LAB_005b73c2;
            }
            if (lStack_80 == 1) {
              if (*(long *)(param_9 + 2) == 0xf) {
                iVar40 = *(int *)(param_7 + 0x28f8);
                if (0 < iVar40) {
                  fVar62 = local_68._0_4_ - (float)(long)local_88;
                  lVar49 = *(long *)param_9;
                  uVar44 = 0;
                  if (6 < iVar40 - 1U) {
                    uVar52 = (ulong)(iVar40 - 1U) + 1;
                    uVar44 = uVar52 & 0xfffffffffffffff8;
                    uVar54 = (uVar44 - 8 >> 3) + 1;
                    uVar57 = (ulong)((uint)uVar54 & 7);
                    if (uVar44 - 8 < 0x38) {
                      lVar45 = 0;
                    }
                    else {
                      uVar54 = uVar54 & 0xfffffffffffffff8;
                      lVar45 = 0;
                      do {
                        pfVar38 = (float *)(lVar49 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar45 = lVar45 + 0x40;
                        uVar54 = uVar54 - 8;
                      } while (uVar54 != 0);
                    }
                    if (uVar57 != 0) {
                      lVar45 = lVar49 + lVar45 * 4;
                      lVar48 = 0;
                      do {
                        pfVar38 = (float *)(lVar45 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar48 = lVar48 + 0x20;
                      } while (uVar57 * 0x20 != lVar48);
                    }
                    if (uVar52 == uVar44) goto LAB_005b73c2;
                    lVar49 = lVar49 + uVar44 * 4;
                  }
                  lVar45 = 0;
                  do {
                    *(float *)(lVar49 + lVar45 * 4) = fVar62;
                    lVar45 = lVar45 + 1;
                  } while (iVar40 - (int)uVar44 != (int)lVar45);
                }
              }
              else {
                param_9[2] = 2.8026e-45;
                param_9[3] = 0.0;
                *param_9 = local_68._0_4_ - (float)(long)local_88;
              }
              goto LAB_005b73c2;
            }
            goto LAB_005b72c9;
          }
          if (lStack_60 == 1) {
            if (lStack_80 - 0xeU < 2) {
              if (*(long *)(param_9 + 2) == 0xf) {
                pfVar38 = *(float **)param_9;
              }
              else {
                if (*(long *)(param_9 + 2) == 0xe) goto LAB_005c5996;
                param_9[2] = 2.10195e-44;
                param_9[3] = 0.0;
                pfVar38 = malloc((long)*(int *)(param_7 + 0x28f8) << 2);
                *(float **)param_9 = pfVar38;
              }
              uVar34 = *(uint *)(param_7 + 0x28f8);
              if (0 < (int)uVar34) {
                fVar62 = (float)(long)local_68;
                uVar57 = (ulong)(uVar34 - 1);
                uVar44 = 0;
                pfVar47 = local_88;
                if ((6 < uVar34 - 1) &&
                   ((local_88 + uVar57 + 1 <= pfVar38 || (pfVar38 + uVar57 + 1 <= local_88)))) {
                  uVar44 = uVar57 + 1 & 0xfffffffffffffff8;
                  uVar52 = (uVar44 - 8 >> 3) + 1;
                  if (uVar44 - 8 == 0) {
                    lVar49 = 0;
                  }
                  else {
                    uVar54 = uVar52 & 0x3ffffffffffffffe;
                    lVar49 = 0;
                    do {
                      pfVar47 = local_88 + lVar49;
                      fVar232 = pfVar47[1];
                      fVar233 = pfVar47[2];
                      fVar234 = pfVar47[3];
                      pfVar53 = local_88 + lVar49 + 4;
                      fVar235 = *pfVar53;
                      fVar264 = pfVar53[1];
                      fVar265 = pfVar53[2];
                      fVar266 = pfVar53[3];
                      pfVar53 = pfVar38 + lVar49;
                      *pfVar53 = fVar62 - *pfVar47;
                      pfVar53[1] = fVar62 - fVar232;
                      pfVar53[2] = fVar62 - fVar233;
                      pfVar53[3] = fVar62 - fVar234;
                      pfVar47 = pfVar38 + lVar49 + 4;
                      *pfVar47 = fVar62 - fVar235;
                      pfVar47[1] = fVar62 - fVar264;
                      pfVar47[2] = fVar62 - fVar265;
                      pfVar47[3] = fVar62 - fVar266;
                      pfVar47 = local_88 + lVar49 + 8;
                      fVar232 = pfVar47[1];
                      fVar233 = pfVar47[2];
                      fVar234 = pfVar47[3];
                      pfVar53 = local_88 + lVar49 + 0xc;
                      fVar235 = *pfVar53;
                      fVar264 = pfVar53[1];
                      fVar265 = pfVar53[2];
                      fVar266 = pfVar53[3];
                      pfVar53 = pfVar38 + lVar49 + 8;
                      *pfVar53 = fVar62 - *pfVar47;
                      pfVar53[1] = fVar62 - fVar232;
                      pfVar53[2] = fVar62 - fVar233;
                      pfVar53[3] = fVar62 - fVar234;
                      pfVar47 = pfVar38 + lVar49 + 0xc;
                      *pfVar47 = fVar62 - fVar235;
                      pfVar47[1] = fVar62 - fVar264;
                      pfVar47[2] = fVar62 - fVar265;
                      pfVar47[3] = fVar62 - fVar266;
                      lVar49 = lVar49 + 0x10;
                      uVar54 = uVar54 - 2;
                    } while (uVar54 != 0);
                  }
                  if ((uVar52 & 1) != 0) {
                    pfVar47 = local_88 + lVar49;
                    fVar232 = pfVar47[1];
                    fVar233 = pfVar47[2];
                    fVar234 = pfVar47[3];
                    pfVar53 = local_88 + lVar49 + 4;
                    fVar235 = *pfVar53;
                    fVar264 = pfVar53[1];
                    fVar265 = pfVar53[2];
                    fVar266 = pfVar53[3];
                    pfVar53 = pfVar38 + lVar49;
                    *pfVar53 = fVar62 - *pfVar47;
                    pfVar53[1] = fVar62 - fVar232;
                    pfVar53[2] = fVar62 - fVar233;
                    pfVar53[3] = fVar62 - fVar234;
                    pfVar47 = pfVar38 + lVar49 + 4;
                    *pfVar47 = fVar62 - fVar235;
                    pfVar47[1] = fVar62 - fVar264;
                    pfVar47[2] = fVar62 - fVar265;
                    pfVar47[3] = fVar62 - fVar266;
                  }
                  if (uVar57 + 1 == uVar44) goto LAB_005b73c2;
                  pfVar38 = pfVar38 + uVar44;
                  pfVar47 = local_88 + uVar44;
                }
                uVar43 = (uint)uVar44;
                uVar50 = ~uVar43;
                if ((uVar34 & 3) != 0) {
                  iVar40 = 0;
                  do {
                    *pfVar38 = fVar62 - *pfVar47;
                    pfVar38 = pfVar38 + 1;
                    pfVar47 = pfVar47 + 1;
                    iVar40 = iVar40 + -1;
                  } while (-(uVar34 & 3) != iVar40);
                  uVar43 = uVar43 - iVar40;
                }
                if (2 < uVar50 + uVar34) {
                  lVar49 = 0;
                  do {
                    pfVar38[lVar49] = fVar62 - pfVar47[lVar49];
                    pfVar38[lVar49 + 1] = fVar62 - pfVar47[lVar49 + 1];
                    pfVar38[lVar49 + 2] = fVar62 - pfVar47[lVar49 + 2];
                    pfVar38[lVar49 + 3] = fVar62 - pfVar47[lVar49 + 3];
                    lVar49 = lVar49 + 4;
                  } while (uVar34 - uVar43 != (int)lVar49);
                }
              }
              goto LAB_005b73c2;
            }
            if (lStack_80 == 2) {
              if (*(long *)(param_9 + 2) == 0xf) {
                iVar40 = *(int *)(param_7 + 0x28f8);
                if (0 < iVar40) {
                  fVar62 = (float)(long)local_68 - local_88._0_4_;
                  lVar49 = *(long *)param_9;
                  uVar44 = 0;
                  if (6 < iVar40 - 1U) {
                    uVar52 = (ulong)(iVar40 - 1U) + 1;
                    uVar44 = uVar52 & 0xfffffffffffffff8;
                    uVar54 = (uVar44 - 8 >> 3) + 1;
                    uVar57 = (ulong)((uint)uVar54 & 7);
                    if (uVar44 - 8 < 0x38) {
                      lVar45 = 0;
                    }
                    else {
                      uVar54 = uVar54 & 0xfffffffffffffff8;
                      lVar45 = 0;
                      do {
                        pfVar38 = (float *)(lVar49 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar45 = lVar45 + 0x40;
                        uVar54 = uVar54 - 8;
                      } while (uVar54 != 0);
                    }
                    if (uVar57 != 0) {
                      lVar45 = lVar49 + lVar45 * 4;
                      lVar48 = 0;
                      do {
                        pfVar38 = (float *)(lVar45 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar48 = lVar48 + 0x20;
                      } while (uVar57 * 0x20 != lVar48);
                    }
                    if (uVar52 == uVar44) goto LAB_005b73c2;
                    lVar49 = lVar49 + uVar44 * 4;
                  }
                  lVar45 = 0;
                  do {
                    *(float *)(lVar49 + lVar45 * 4) = fVar62;
                    lVar45 = lVar45 + 1;
                  } while (iVar40 - (int)uVar44 != (int)lVar45);
                }
                goto LAB_005b73c2;
              }
              param_9[2] = 2.8026e-45;
              param_9[3] = 0.0;
              fVar62 = (float)(long)local_68;
              goto LAB_005bd066;
            }
            if (lStack_80 == 1) {
              if (*(long *)(param_9 + 2) == 0xf) {
                iVar40 = *(int *)(param_7 + 0x28f8);
                if (0 < iVar40) {
                  fVar62 = (float)((long)local_68 - (long)local_88);
                  lVar49 = *(long *)param_9;
                  uVar44 = 0;
                  if (6 < iVar40 - 1U) {
                    uVar52 = (ulong)(iVar40 - 1U) + 1;
                    uVar44 = uVar52 & 0xfffffffffffffff8;
                    uVar54 = (uVar44 - 8 >> 3) + 1;
                    uVar57 = (ulong)((uint)uVar54 & 7);
                    if (uVar44 - 8 < 0x38) {
                      lVar45 = 0;
                    }
                    else {
                      uVar54 = uVar54 & 0xfffffffffffffff8;
                      lVar45 = 0;
                      do {
                        pfVar38 = (float *)(lVar49 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar45 = lVar45 + 0x40;
                        uVar54 = uVar54 - 8;
                      } while (uVar54 != 0);
                    }
                    if (uVar57 != 0) {
                      lVar45 = lVar49 + lVar45 * 4;
                      lVar48 = 0;
                      do {
                        pfVar38 = (float *)(lVar45 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar48 = lVar48 + 0x20;
                      } while (uVar57 * 0x20 != lVar48);
                    }
                    if (uVar52 == uVar44) goto LAB_005b73c2;
                    lVar49 = lVar49 + uVar44 * 4;
                  }
                  lVar45 = 0;
                  do {
                    *(float *)(lVar49 + lVar45 * 4) = fVar62;
                    lVar45 = lVar45 + 1;
                  } while (iVar40 - (int)uVar44 != (int)lVar45);
                }
              }
              else {
                param_9[2] = 1.4013e-45;
                param_9[3] = 0.0;
                *(long *)param_9 = (long)local_68 - (long)local_88;
              }
              goto LAB_005b73c2;
            }
            goto LAB_005b72c9;
          }
          pcVar55 = "expr: ex_eval(%d): bad left type %ld\n";
          lVar49 = lStack_60;
        }
        uVar46 = 0x52f;
      }
      else if ((long)uVar57 < 0xe0015) {
        if (uVar57 == 0xd0013) {
          puVar36 = ex_eval(0,param_2,param_3,param_4,param_5,param_6,param_7,puVar36,
                            (float *)&local_68,puVar51,param_11,param_12);
          puVar36 = ex_eval(extraout_XMM0_Qa_17,param_2,param_3,param_4,param_5,param_6,param_7,
                            puVar36,(float *)&local_88,puVar51,param_11,param_12);
          uVar236 = in_XMM3._0_8_;
          uVar63 = in_XMM2._0_8_;
          uVar44 = extraout_XMM0_06._0_8_;
          if (lStack_60 - 0xeU < 2) {
            if (*(long *)(param_9 + 2) == 0xf) {
              pvVar37 = *(void **)param_9;
              auVar172 = extraout_XMM0_06;
            }
            else {
              if (*(long *)(param_9 + 2) == 0xe) goto LAB_005c5996;
              param_9[2] = 2.10195e-44;
              param_9[3] = 0.0;
              pvVar37 = malloc((long)*(int *)(param_7 + 0x28f8) << 2);
              *(void **)param_9 = pvVar37;
              auVar172 = extraout_XMM0_13;
            }
            pfVar47 = local_68;
            pfVar38 = local_88;
            uVar236 = in_XMM3._0_8_;
            uVar63 = in_XMM2._0_8_;
            uVar44 = auVar172._0_8_;
            if (lStack_80 - 0xeU < 2) {
              iVar40 = *(int *)(param_7 + 0x28f8);
              if (0 < iVar40) {
                lVar49 = 0;
                do {
                  while( true ) {
                    fVar62 = pfVar38[lVar49];
                    if (fVar62 == 0.0) break;
                    auVar172 = ZEXT416((uint)(pfVar47[lVar49] / fVar62));
                    *(float *)((long)pvVar37 + lVar49 * 4) = pfVar47[lVar49] / fVar62;
                    lVar49 = lVar49 + 1;
                    if (iVar40 <= (int)lVar49) goto LAB_005b73c2;
                  }
                  ex_dzdetect(auVar172._0_8_,(ulong)(uint)fVar62,0,in_XMM3._0_8_,param_3,param_4,
                              param_5,param_6,param_7);
                  iVar40 = *(int *)(param_7 + 0x28f8);
                  auVar172 = ZEXT816(0);
                  *(undefined4 *)((long)pvVar37 + lVar49 * 4) = 0;
                  lVar49 = lVar49 + 1;
                } while ((int)lVar49 < iVar40);
              }
              goto LAB_005b73c2;
            }
            if (lStack_80 == 2) {
              iVar40 = *(int *)(param_7 + 0x28f8);
              if (0 < iVar40) {
                auVar238 = ZEXT416((uint)local_88._0_4_);
                auVar172 = ZEXT416((uint)(DAT_005d9038 / local_88._0_4_));
                auStack_48._0_4_ = DAT_005d9038 / local_88._0_4_;
                lVar49 = 0;
                fStack_34 = local_88._0_4_;
                do {
                  while (auVar238._0_4_ != 0.0) {
                    auVar172 = ZEXT416((uint)(pfVar47[lVar49] * (float)auStack_48._0_4_));
                    *(float *)((long)pvVar37 + lVar49 * 4) =
                         pfVar47[lVar49] * (float)auStack_48._0_4_;
                    lVar49 = lVar49 + 1;
                    if (iVar40 <= (int)lVar49) goto LAB_005b73c2;
                  }
                  ex_dzdetect(auVar172._0_8_,auVar238._0_8_,0,in_XMM3._0_8_,param_3,param_4,param_5,
                              param_6,param_7);
                  auVar238 = ZEXT416((uint)fStack_34);
                  iVar40 = *(int *)(param_7 + 0x28f8);
                  auVar172 = ZEXT816(0);
                  *(undefined4 *)((long)pvVar37 + lVar49 * 4) = 0;
                  lVar49 = lVar49 + 1;
                } while ((int)lVar49 < iVar40);
              }
              goto LAB_005b73c2;
            }
            if (lStack_80 == 1) {
              iVar40 = *(int *)(param_7 + 0x28f8);
              if (0 < iVar40) {
                auVar172._0_4_ = (float)(long)local_88;
                auVar238 = ZEXT416((uint)(DAT_005d9038 / auVar172._0_4_));
                auStack_48._0_4_ = DAT_005d9038 / auVar172._0_4_;
                lVar49 = 0;
                do {
                  while (pfVar38 == (float *)0x0) {
                    ex_dzdetect(auVar172._0_8_,auVar238._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,param_3,
                                param_4,param_5,param_6,param_7);
                    auVar238._8_8_ = extraout_XMM1_Qb;
                    auVar238._0_8_ = extraout_XMM1_Qa_04;
                    iVar40 = *(int *)(param_7 + 0x28f8);
                    auVar172 = ZEXT816(0);
                    *(undefined4 *)((long)pvVar37 + lVar49 * 4) = 0;
                    lVar49 = lVar49 + 1;
                    if (iVar40 <= (int)lVar49) goto LAB_005b73c2;
                  }
                  auVar172 = ZEXT416((uint)(pfVar47[lVar49] * (float)auStack_48._0_4_));
                  *(float *)((long)pvVar37 + lVar49 * 4) = pfVar47[lVar49] * (float)auStack_48._0_4_
                  ;
                  lVar49 = lVar49 + 1;
                } while ((int)lVar49 < iVar40);
              }
              goto LAB_005b73c2;
            }
          }
          else {
            fVar62 = local_88._0_4_;
            if (lStack_60 == 2) {
              if (lStack_80 - 0xeU < 2) {
                if (*(long *)(param_9 + 2) == 0xf) {
                  pvVar37 = *(void **)param_9;
                }
                else {
                  if (*(long *)(param_9 + 2) == 0xe) goto LAB_005c5996;
                  param_9[2] = 2.10195e-44;
                  param_9[3] = 0.0;
                  pvVar37 = malloc((long)*(int *)(param_7 + 0x28f8) << 2);
                  *(void **)param_9 = pvVar37;
                }
                pfVar38 = local_88;
                iVar40 = *(int *)(param_7 + 0x28f8);
                if (0 < iVar40) {
                  auVar172 = ZEXT416((uint)local_68._0_4_);
                  auStack_48._0_4_ = local_68._0_4_;
                  lVar49 = 0;
                  do {
                    while( true ) {
                      fVar62 = pfVar38[lVar49];
                      if (fVar62 == 0.0) break;
                      auVar172 = ZEXT416((uint)((float)auStack_48._0_4_ / fVar62));
                      *(float *)((long)pvVar37 + lVar49 * 4) = (float)auStack_48._0_4_ / fVar62;
                      lVar49 = lVar49 + 1;
                      if (iVar40 <= (int)lVar49) goto LAB_005b73c2;
                    }
                    ex_dzdetect(auVar172._0_8_,(ulong)(uint)fVar62,0,in_XMM3._0_8_,param_3,param_4,
                                param_5,param_6,param_7);
                    iVar40 = *(int *)(param_7 + 0x28f8);
                    auVar172 = ZEXT816(0);
                    *(undefined4 *)((long)pvVar37 + lVar49 * 4) = 0;
                    lVar49 = lVar49 + 1;
                  } while ((int)lVar49 < iVar40);
                }
                goto LAB_005b73c2;
              }
              if (lStack_80 == 2) {
                if (*(long *)(param_9 + 2) == 0xf) {
                  lVar49 = *(long *)param_9;
                  auStack_48 = ZEXT816(0);
                  if (local_88._0_4_ == 0.0) {
                    ex_dzdetect((ulong)local_88 & 0xffffffff,0,0,uVar236,param_3,param_4,param_5,
                                param_6,param_7);
                  }
                  else {
                    auStack_48 = ZEXT416((uint)(local_68._0_4_ / local_88._0_4_));
                  }
                  iVar40 = *(int *)(param_7 + 0x28f8);
                  if (0 < iVar40) {
                    uVar44 = 0;
                    if (6 < iVar40 - 1U) {
                      uVar57 = (ulong)(iVar40 - 1U) + 1;
                      uVar44 = uVar57 & 0xfffffffffffffff8;
                      uVar54 = (uVar44 - 8 >> 3) + 1;
                      uVar52 = (ulong)((uint)uVar54 & 7);
                      if (uVar44 - 8 < 0x38) {
                        lVar45 = 0;
                      }
                      else {
                        uVar54 = uVar54 & 0xfffffffffffffff8;
                        lVar45 = 0;
                        do {
                          puVar1 = (undefined4 *)(lVar49 + lVar45 * 4);
                          *puVar1 = auStack_48._0_4_;
                          puVar1[1] = auStack_48._0_4_;
                          puVar1[2] = auStack_48._0_4_;
                          puVar1[3] = auStack_48._0_4_;
                          puVar1 = (undefined4 *)(lVar49 + 0x10 + lVar45 * 4);
                          *puVar1 = auStack_48._0_4_;
                          puVar1[1] = auStack_48._0_4_;
                          puVar1[2] = auStack_48._0_4_;
                          puVar1[3] = auStack_48._0_4_;
                          puVar1 = (undefined4 *)(lVar49 + 0x20 + lVar45 * 4);
                          *puVar1 = auStack_48._0_4_;
                          puVar1[1] = auStack_48._0_4_;
                          puVar1[2] = auStack_48._0_4_;
                          puVar1[3] = auStack_48._0_4_;
                          puVar1 = (undefined4 *)(lVar49 + 0x30 + lVar45 * 4);
                          *puVar1 = auStack_48._0_4_;
                          puVar1[1] = auStack_48._0_4_;
                          puVar1[2] = auStack_48._0_4_;
                          puVar1[3] = auStack_48._0_4_;
                          puVar1 = (undefined4 *)(lVar49 + 0x40 + lVar45 * 4);
                          *puVar1 = auStack_48._0_4_;
                          puVar1[1] = auStack_48._0_4_;
                          puVar1[2] = auStack_48._0_4_;
                          puVar1[3] = auStack_48._0_4_;
                          puVar1 = (undefined4 *)(lVar49 + 0x50 + lVar45 * 4);
                          *puVar1 = auStack_48._0_4_;
                          puVar1[1] = auStack_48._0_4_;
                          puVar1[2] = auStack_48._0_4_;
                          puVar1[3] = auStack_48._0_4_;
                          puVar1 = (undefined4 *)(lVar49 + 0x60 + lVar45 * 4);
                          *puVar1 = auStack_48._0_4_;
                          puVar1[1] = auStack_48._0_4_;
                          puVar1[2] = auStack_48._0_4_;
                          puVar1[3] = auStack_48._0_4_;
                          puVar1 = (undefined4 *)(lVar49 + 0x70 + lVar45 * 4);
                          *puVar1 = auStack_48._0_4_;
                          puVar1[1] = auStack_48._0_4_;
                          puVar1[2] = auStack_48._0_4_;
                          puVar1[3] = auStack_48._0_4_;
                          puVar1 = (undefined4 *)(lVar49 + 0x80 + lVar45 * 4);
                          *puVar1 = auStack_48._0_4_;
                          puVar1[1] = auStack_48._0_4_;
                          puVar1[2] = auStack_48._0_4_;
                          puVar1[3] = auStack_48._0_4_;
                          puVar1 = (undefined4 *)(lVar49 + 0x90 + lVar45 * 4);
                          *puVar1 = auStack_48._0_4_;
                          puVar1[1] = auStack_48._0_4_;
                          puVar1[2] = auStack_48._0_4_;
                          puVar1[3] = auStack_48._0_4_;
                          puVar1 = (undefined4 *)(lVar49 + 0xa0 + lVar45 * 4);
                          *puVar1 = auStack_48._0_4_;
                          puVar1[1] = auStack_48._0_4_;
                          puVar1[2] = auStack_48._0_4_;
                          puVar1[3] = auStack_48._0_4_;
                          puVar1 = (undefined4 *)(lVar49 + 0xb0 + lVar45 * 4);
                          *puVar1 = auStack_48._0_4_;
                          puVar1[1] = auStack_48._0_4_;
                          puVar1[2] = auStack_48._0_4_;
                          puVar1[3] = auStack_48._0_4_;
                          puVar1 = (undefined4 *)(lVar49 + 0xc0 + lVar45 * 4);
                          *puVar1 = auStack_48._0_4_;
                          puVar1[1] = auStack_48._0_4_;
                          puVar1[2] = auStack_48._0_4_;
                          puVar1[3] = auStack_48._0_4_;
                          puVar1 = (undefined4 *)(lVar49 + 0xd0 + lVar45 * 4);
                          *puVar1 = auStack_48._0_4_;
                          puVar1[1] = auStack_48._0_4_;
                          puVar1[2] = auStack_48._0_4_;
                          puVar1[3] = auStack_48._0_4_;
                          puVar1 = (undefined4 *)(lVar49 + 0xe0 + lVar45 * 4);
                          *puVar1 = auStack_48._0_4_;
                          puVar1[1] = auStack_48._0_4_;
                          puVar1[2] = auStack_48._0_4_;
                          puVar1[3] = auStack_48._0_4_;
                          puVar1 = (undefined4 *)(lVar49 + 0xf0 + lVar45 * 4);
                          *puVar1 = auStack_48._0_4_;
                          puVar1[1] = auStack_48._0_4_;
                          puVar1[2] = auStack_48._0_4_;
                          puVar1[3] = auStack_48._0_4_;
                          lVar45 = lVar45 + 0x40;
                          uVar54 = uVar54 - 8;
                        } while (uVar54 != 0);
                      }
                      if (uVar52 != 0) {
                        lVar45 = lVar49 + lVar45 * 4;
                        lVar48 = 0;
                        do {
                          puVar1 = (undefined4 *)(lVar45 + lVar48);
                          *puVar1 = auStack_48._0_4_;
                          puVar1[1] = auStack_48._0_4_;
                          puVar1[2] = auStack_48._0_4_;
                          puVar1[3] = auStack_48._0_4_;
                          puVar1 = (undefined4 *)(lVar45 + 0x10 + lVar48);
                          *puVar1 = auStack_48._0_4_;
                          puVar1[1] = auStack_48._0_4_;
                          puVar1[2] = auStack_48._0_4_;
                          puVar1[3] = auStack_48._0_4_;
                          lVar48 = lVar48 + 0x20;
                        } while (uVar52 * 0x20 != lVar48);
                      }
                      if (uVar57 == uVar44) goto LAB_005b73c2;
                      lVar49 = lVar49 + uVar44 * 4;
                    }
                    lVar45 = 0;
                    do {
                      *(undefined4 *)(lVar49 + lVar45 * 4) = auStack_48._0_4_;
                      lVar45 = lVar45 + 1;
                    } while (iVar40 - (int)uVar44 != (int)lVar45);
                  }
                  goto LAB_005b73c2;
                }
                param_9[2] = 2.8026e-45;
                param_9[3] = 0.0;
                uVar44 = (ulong)local_88 & 0xffffffff;
                param_2 = 0;
                if (local_88._0_4_ != 0.0) {
LAB_005bd0e4:
                  fVar232 = local_68._0_4_;
                  goto LAB_005bd0ea;
                }
              }
              else {
                if (lStack_80 != 1) goto LAB_005b7319;
                if (*(long *)(param_9 + 2) == 0xf) {
                  lVar49 = *(long *)param_9;
                  if (local_88 == (float *)0x0) {
                    ex_dzdetect(uVar44,param_2,uVar63,uVar236,param_3,param_4,param_5,param_6,
                                param_7);
                    fVar62 = 0.0;
                  }
                  else {
                    fVar62 = local_68._0_4_ / (float)(long)local_88;
                  }
                  iVar40 = *(int *)(param_7 + 0x28f8);
                  if (0 < iVar40) {
                    uVar44 = 0;
                    if (6 < iVar40 - 1U) {
                      uVar57 = (ulong)(iVar40 - 1U) + 1;
                      uVar44 = uVar57 & 0xfffffffffffffff8;
                      uVar54 = (uVar44 - 8 >> 3) + 1;
                      uVar52 = (ulong)((uint)uVar54 & 7);
                      if (uVar44 - 8 < 0x38) {
                        lVar45 = 0;
                      }
                      else {
                        uVar54 = uVar54 & 0xfffffffffffffff8;
                        lVar45 = 0;
                        do {
                          pfVar38 = (float *)(lVar49 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          lVar45 = lVar45 + 0x40;
                          uVar54 = uVar54 - 8;
                        } while (uVar54 != 0);
                      }
                      if (uVar52 != 0) {
                        lVar45 = lVar49 + lVar45 * 4;
                        lVar48 = 0;
                        do {
                          pfVar38 = (float *)(lVar45 + lVar48);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                          *pfVar38 = fVar62;
                          pfVar38[1] = fVar62;
                          pfVar38[2] = fVar62;
                          pfVar38[3] = fVar62;
                          lVar48 = lVar48 + 0x20;
                        } while (uVar52 * 0x20 != lVar48);
                      }
                      if (uVar57 == uVar44) goto LAB_005b73c2;
                      lVar49 = lVar49 + uVar44 * 4;
                    }
                    lVar45 = 0;
                    do {
                      *(float *)(lVar49 + lVar45 * 4) = fVar62;
                      lVar45 = lVar45 + 1;
                    } while (iVar40 - (int)uVar44 != (int)lVar45);
                  }
                  goto LAB_005b73c2;
                }
                param_9[2] = 2.8026e-45;
                param_9[3] = 0.0;
                if (local_88 != (float *)0x0) {
                  fVar62 = (float)(long)local_88;
                  goto LAB_005bd0e4;
                }
              }
LAB_005bd0f7:
              ex_dzdetect(uVar44,param_2,uVar63,uVar236,param_3,param_4,param_5,param_6,param_7);
              *param_9 = 0.0;
              goto LAB_005b73c2;
            }
            if (lStack_60 != 1) {
              pcVar55 = "expr: ex_eval(%d): bad left type %ld\n";
              uVar46 = 0x55d;
              lVar49 = lStack_60;
              goto LAB_005b73bb;
            }
            if (lStack_80 - 0xeU < 2) {
              if (*(long *)(param_9 + 2) == 0xf) {
                pvVar37 = *(void **)param_9;
                auVar172 = extraout_XMM0_06;
              }
              else {
                if (*(long *)(param_9 + 2) == 0xe) goto LAB_005c5996;
                param_9[2] = 2.10195e-44;
                param_9[3] = 0.0;
                pvVar37 = malloc((long)*(int *)(param_7 + 0x28f8) << 2);
                *(void **)param_9 = pvVar37;
                auVar172 = extraout_XMM0_16;
              }
              pfVar38 = local_88;
              iVar40 = *(int *)(param_7 + 0x28f8);
              if (0 < iVar40) {
                auVar268._4_12_ = auVar172._4_12_;
                auVar268._0_4_ = (float)(long)local_68;
                auStack_48._0_4_ = auVar268._0_4_;
                lVar49 = 0;
                do {
                  while( true ) {
                    fVar62 = pfVar38[lVar49];
                    if (fVar62 == 0.0) break;
                    auVar268 = ZEXT416((uint)((float)auStack_48._0_4_ / fVar62));
                    *(float *)((long)pvVar37 + lVar49 * 4) = (float)auStack_48._0_4_ / fVar62;
                    lVar49 = lVar49 + 1;
                    if (iVar40 <= (int)lVar49) goto LAB_005b73c2;
                  }
                  ex_dzdetect(auVar268._0_8_,(ulong)(uint)fVar62,0,in_XMM3._0_8_,param_3,param_4,
                              param_5,param_6,param_7);
                  iVar40 = *(int *)(param_7 + 0x28f8);
                  auVar268 = ZEXT816(0);
                  *(undefined4 *)((long)pvVar37 + lVar49 * 4) = 0;
                  lVar49 = lVar49 + 1;
                } while ((int)lVar49 < iVar40);
              }
              goto LAB_005b73c2;
            }
            if (lStack_80 == 2) {
              if (*(long *)(param_9 + 2) == 0xf) {
                lVar49 = *(long *)param_9;
                auStack_48 = ZEXT816(0);
                if (local_88._0_4_ == 0.0) {
                  ex_dzdetect((ulong)local_88 & 0xffffffff,0,0,uVar236,param_3,param_4,param_5,
                              param_6,param_7);
                }
                else {
                  auStack_48 = ZEXT416((uint)((float)(long)local_68 / local_88._0_4_));
                }
                iVar40 = *(int *)(param_7 + 0x28f8);
                if (0 < iVar40) {
                  uVar44 = 0;
                  if (6 < iVar40 - 1U) {
                    uVar57 = (ulong)(iVar40 - 1U) + 1;
                    uVar44 = uVar57 & 0xfffffffffffffff8;
                    uVar54 = (uVar44 - 8 >> 3) + 1;
                    uVar52 = (ulong)((uint)uVar54 & 7);
                    if (uVar44 - 8 < 0x38) {
                      lVar45 = 0;
                    }
                    else {
                      uVar54 = uVar54 & 0xfffffffffffffff8;
                      lVar45 = 0;
                      do {
                        puVar1 = (undefined4 *)(lVar49 + lVar45 * 4);
                        *puVar1 = auStack_48._0_4_;
                        puVar1[1] = auStack_48._0_4_;
                        puVar1[2] = auStack_48._0_4_;
                        puVar1[3] = auStack_48._0_4_;
                        puVar1 = (undefined4 *)(lVar49 + 0x10 + lVar45 * 4);
                        *puVar1 = auStack_48._0_4_;
                        puVar1[1] = auStack_48._0_4_;
                        puVar1[2] = auStack_48._0_4_;
                        puVar1[3] = auStack_48._0_4_;
                        puVar1 = (undefined4 *)(lVar49 + 0x20 + lVar45 * 4);
                        *puVar1 = auStack_48._0_4_;
                        puVar1[1] = auStack_48._0_4_;
                        puVar1[2] = auStack_48._0_4_;
                        puVar1[3] = auStack_48._0_4_;
                        puVar1 = (undefined4 *)(lVar49 + 0x30 + lVar45 * 4);
                        *puVar1 = auStack_48._0_4_;
                        puVar1[1] = auStack_48._0_4_;
                        puVar1[2] = auStack_48._0_4_;
                        puVar1[3] = auStack_48._0_4_;
                        puVar1 = (undefined4 *)(lVar49 + 0x40 + lVar45 * 4);
                        *puVar1 = auStack_48._0_4_;
                        puVar1[1] = auStack_48._0_4_;
                        puVar1[2] = auStack_48._0_4_;
                        puVar1[3] = auStack_48._0_4_;
                        puVar1 = (undefined4 *)(lVar49 + 0x50 + lVar45 * 4);
                        *puVar1 = auStack_48._0_4_;
                        puVar1[1] = auStack_48._0_4_;
                        puVar1[2] = auStack_48._0_4_;
                        puVar1[3] = auStack_48._0_4_;
                        puVar1 = (undefined4 *)(lVar49 + 0x60 + lVar45 * 4);
                        *puVar1 = auStack_48._0_4_;
                        puVar1[1] = auStack_48._0_4_;
                        puVar1[2] = auStack_48._0_4_;
                        puVar1[3] = auStack_48._0_4_;
                        puVar1 = (undefined4 *)(lVar49 + 0x70 + lVar45 * 4);
                        *puVar1 = auStack_48._0_4_;
                        puVar1[1] = auStack_48._0_4_;
                        puVar1[2] = auStack_48._0_4_;
                        puVar1[3] = auStack_48._0_4_;
                        puVar1 = (undefined4 *)(lVar49 + 0x80 + lVar45 * 4);
                        *puVar1 = auStack_48._0_4_;
                        puVar1[1] = auStack_48._0_4_;
                        puVar1[2] = auStack_48._0_4_;
                        puVar1[3] = auStack_48._0_4_;
                        puVar1 = (undefined4 *)(lVar49 + 0x90 + lVar45 * 4);
                        *puVar1 = auStack_48._0_4_;
                        puVar1[1] = auStack_48._0_4_;
                        puVar1[2] = auStack_48._0_4_;
                        puVar1[3] = auStack_48._0_4_;
                        puVar1 = (undefined4 *)(lVar49 + 0xa0 + lVar45 * 4);
                        *puVar1 = auStack_48._0_4_;
                        puVar1[1] = auStack_48._0_4_;
                        puVar1[2] = auStack_48._0_4_;
                        puVar1[3] = auStack_48._0_4_;
                        puVar1 = (undefined4 *)(lVar49 + 0xb0 + lVar45 * 4);
                        *puVar1 = auStack_48._0_4_;
                        puVar1[1] = auStack_48._0_4_;
                        puVar1[2] = auStack_48._0_4_;
                        puVar1[3] = auStack_48._0_4_;
                        puVar1 = (undefined4 *)(lVar49 + 0xc0 + lVar45 * 4);
                        *puVar1 = auStack_48._0_4_;
                        puVar1[1] = auStack_48._0_4_;
                        puVar1[2] = auStack_48._0_4_;
                        puVar1[3] = auStack_48._0_4_;
                        puVar1 = (undefined4 *)(lVar49 + 0xd0 + lVar45 * 4);
                        *puVar1 = auStack_48._0_4_;
                        puVar1[1] = auStack_48._0_4_;
                        puVar1[2] = auStack_48._0_4_;
                        puVar1[3] = auStack_48._0_4_;
                        puVar1 = (undefined4 *)(lVar49 + 0xe0 + lVar45 * 4);
                        *puVar1 = auStack_48._0_4_;
                        puVar1[1] = auStack_48._0_4_;
                        puVar1[2] = auStack_48._0_4_;
                        puVar1[3] = auStack_48._0_4_;
                        puVar1 = (undefined4 *)(lVar49 + 0xf0 + lVar45 * 4);
                        *puVar1 = auStack_48._0_4_;
                        puVar1[1] = auStack_48._0_4_;
                        puVar1[2] = auStack_48._0_4_;
                        puVar1[3] = auStack_48._0_4_;
                        lVar45 = lVar45 + 0x40;
                        uVar54 = uVar54 - 8;
                      } while (uVar54 != 0);
                    }
                    if (uVar52 != 0) {
                      lVar45 = lVar49 + lVar45 * 4;
                      lVar48 = 0;
                      do {
                        puVar1 = (undefined4 *)(lVar45 + lVar48);
                        *puVar1 = auStack_48._0_4_;
                        puVar1[1] = auStack_48._0_4_;
                        puVar1[2] = auStack_48._0_4_;
                        puVar1[3] = auStack_48._0_4_;
                        puVar1 = (undefined4 *)(lVar45 + 0x10 + lVar48);
                        *puVar1 = auStack_48._0_4_;
                        puVar1[1] = auStack_48._0_4_;
                        puVar1[2] = auStack_48._0_4_;
                        puVar1[3] = auStack_48._0_4_;
                        lVar48 = lVar48 + 0x20;
                      } while (uVar52 * 0x20 != lVar48);
                    }
                    if (uVar57 == uVar44) goto LAB_005b73c2;
                    lVar49 = lVar49 + uVar44 * 4;
                  }
                  lVar45 = 0;
                  do {
                    *(undefined4 *)(lVar49 + lVar45 * 4) = auStack_48._0_4_;
                    lVar45 = lVar45 + 1;
                  } while (iVar40 - (int)uVar44 != (int)lVar45);
                }
                goto LAB_005b73c2;
              }
              param_9[2] = 2.8026e-45;
              param_9[3] = 0.0;
              uVar44 = (ulong)local_88 & 0xffffffff;
              param_2 = 0;
              if (local_88._0_4_ == 0.0) goto LAB_005bd0f7;
              fVar232 = (float)(long)local_68;
LAB_005bd0ea:
              *param_9 = fVar232 / fVar62;
              goto LAB_005b73c2;
            }
            if (lStack_80 == 1) {
              if (*(long *)(param_9 + 2) == 0xf) {
                lVar49 = *(long *)param_9;
                if (local_88 == (float *)0x0) {
                  ex_dzdetect(uVar44,param_2,uVar63,uVar236,param_3,param_4,param_5,param_6,param_7)
                  ;
                  fVar62 = 0.0;
                }
                else {
                  if (((ulong)local_68 | (ulong)local_88) >> 0x20 == 0) {
                    uVar44 = ((ulong)local_68 & 0xffffffff) / ((ulong)local_88 & 0xffffffff);
                  }
                  else {
                    uVar44 = (long)local_68 / (long)local_88;
                  }
                  fVar62 = (float)(long)uVar44;
                }
                iVar40 = *(int *)(param_7 + 0x28f8);
                if (0 < iVar40) {
                  uVar44 = 0;
                  if (6 < iVar40 - 1U) {
                    uVar57 = (ulong)(iVar40 - 1U) + 1;
                    uVar44 = uVar57 & 0xfffffffffffffff8;
                    uVar54 = (uVar44 - 8 >> 3) + 1;
                    uVar52 = (ulong)((uint)uVar54 & 7);
                    if (uVar44 - 8 < 0x38) {
                      lVar45 = 0;
                    }
                    else {
                      uVar54 = uVar54 & 0xfffffffffffffff8;
                      lVar45 = 0;
                      do {
                        pfVar38 = (float *)(lVar49 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar45 = lVar45 + 0x40;
                        uVar54 = uVar54 - 8;
                      } while (uVar54 != 0);
                    }
                    if (uVar52 != 0) {
                      lVar45 = lVar49 + lVar45 * 4;
                      lVar48 = 0;
                      do {
                        pfVar38 = (float *)(lVar45 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar48 = lVar48 + 0x20;
                      } while (uVar52 * 0x20 != lVar48);
                    }
                    if (uVar57 == uVar44) goto LAB_005b73c2;
                    lVar49 = lVar49 + uVar44 * 4;
                  }
                  lVar45 = 0;
                  do {
                    *(float *)(lVar49 + lVar45 * 4) = fVar62;
                    lVar45 = lVar45 + 1;
                  } while (iVar40 - (int)uVar44 != (int)lVar45);
                }
                goto LAB_005b73c2;
              }
              param_9[2] = 1.4013e-45;
              param_9[3] = 0.0;
              if (local_88 != (float *)0x0) {
                if (((ulong)local_68 | (ulong)local_88) >> 0x20 == 0) {
                  *(ulong *)param_9 =
                       ((ulong)local_68 & 0xffffffff) / ((ulong)local_88 & 0xffffffff);
                }
                else {
                  *(long *)param_9 = (long)local_68 / (long)local_88;
                }
                goto LAB_005b73c2;
              }
LAB_005bd645:
              ex_dzdetect(uVar44,param_2,uVar63,uVar236,param_3,param_4,param_5,param_6,param_7);
              param_9[0] = 0.0;
              param_9[1] = 0.0;
              goto LAB_005b73c2;
            }
          }
LAB_005b7319:
          uVar46 = 0x55d;
          goto LAB_005b7339;
        }
        if (uVar57 != 0xd0014) goto code_r0x005b4c3c;
        puVar36 = ex_eval(0,param_2,param_3,param_4,param_5,param_6,param_7,puVar36,
                          (float *)&local_68,puVar51,param_11,param_12);
        puVar36 = ex_eval(extraout_XMM0_Qa_06,param_2,param_3,param_4,param_5,param_6,param_7,
                          puVar36,(float *)&local_88,puVar51,param_11,param_12);
        uVar236 = in_XMM3._0_8_;
        uVar63 = in_XMM2._0_8_;
        uVar44 = extraout_XMM0_Qa_07;
        if (lStack_60 - 0xeU < 2) {
          if (*(long *)(param_9 + 2) == 0xf) {
            pfVar38 = *(float **)param_9;
          }
          else {
            if (*(long *)(param_9 + 2) == 0xe) goto LAB_005c5996;
            param_9[2] = 2.10195e-44;
            param_9[3] = 0.0;
            pfVar38 = malloc((long)*(int *)(param_7 + 0x28f8) << 2);
            uVar236 = in_XMM3._0_8_;
            uVar63 = in_XMM2._0_8_;
            *(float **)param_9 = pfVar38;
            uVar44 = extraout_XMM0_Qa_22;
          }
          if (lStack_80 - 0xeU < 2) {
            uVar34 = *(uint *)(param_7 + 0x28f8);
            if (0 < (int)uVar34) {
              uVar44 = (ulong)(uVar34 - 1);
              uVar57 = 0;
              pfVar53 = local_68;
              pfVar47 = local_88;
              if (6 < uVar34 - 1) {
                if ((local_68 + uVar44 + 1 <= pfVar38 || pfVar38 + uVar44 + 1 <= local_68) &&
                   (local_88 + uVar44 + 1 <= pfVar38 || pfVar38 + uVar44 + 1 <= local_88)) {
                  uVar57 = uVar44 + 1 & 0xfffffffffffffff8;
                  uVar52 = (uVar57 - 8 >> 3) + 1;
                  if (uVar57 - 8 == 0) {
                    lVar49 = 0;
                  }
                  else {
                    uVar54 = uVar52 & 0x3ffffffffffffffe;
                    lVar49 = 0;
                    do {
                      pfVar47 = local_68 + lVar49;
                      fVar62 = pfVar47[1];
                      fVar232 = pfVar47[2];
                      fVar233 = pfVar47[3];
                      pfVar53 = local_68 + lVar49 + 4;
                      fVar234 = *pfVar53;
                      fVar235 = pfVar53[1];
                      fVar264 = pfVar53[2];
                      fVar265 = pfVar53[3];
                      pfVar53 = local_88 + lVar49;
                      fVar266 = pfVar53[1];
                      fVar28 = pfVar53[2];
                      fVar29 = pfVar53[3];
                      pfVar2 = local_88 + lVar49 + 4;
                      fVar30 = *pfVar2;
                      fVar31 = pfVar2[1];
                      fVar32 = pfVar2[2];
                      fVar33 = pfVar2[3];
                      pfVar2 = pfVar38 + lVar49;
                      *pfVar2 = *pfVar53 * *pfVar47;
                      pfVar2[1] = fVar266 * fVar62;
                      pfVar2[2] = fVar28 * fVar232;
                      pfVar2[3] = fVar29 * fVar233;
                      pfVar47 = pfVar38 + lVar49 + 4;
                      *pfVar47 = fVar30 * fVar234;
                      pfVar47[1] = fVar31 * fVar235;
                      pfVar47[2] = fVar32 * fVar264;
                      pfVar47[3] = fVar33 * fVar265;
                      pfVar47 = local_68 + lVar49 + 8;
                      fVar62 = pfVar47[1];
                      fVar232 = pfVar47[2];
                      fVar233 = pfVar47[3];
                      pfVar53 = local_68 + lVar49 + 0xc;
                      fVar234 = *pfVar53;
                      fVar235 = pfVar53[1];
                      fVar264 = pfVar53[2];
                      fVar265 = pfVar53[3];
                      pfVar53 = local_88 + lVar49 + 8;
                      fVar266 = pfVar53[1];
                      fVar28 = pfVar53[2];
                      fVar29 = pfVar53[3];
                      pfVar2 = local_88 + lVar49 + 0xc;
                      fVar30 = *pfVar2;
                      fVar31 = pfVar2[1];
                      fVar32 = pfVar2[2];
                      fVar33 = pfVar2[3];
                      pfVar2 = pfVar38 + lVar49 + 8;
                      *pfVar2 = *pfVar53 * *pfVar47;
                      pfVar2[1] = fVar266 * fVar62;
                      pfVar2[2] = fVar28 * fVar232;
                      pfVar2[3] = fVar29 * fVar233;
                      pfVar47 = pfVar38 + lVar49 + 0xc;
                      *pfVar47 = fVar30 * fVar234;
                      pfVar47[1] = fVar31 * fVar235;
                      pfVar47[2] = fVar32 * fVar264;
                      pfVar47[3] = fVar33 * fVar265;
                      lVar49 = lVar49 + 0x10;
                      uVar54 = uVar54 - 2;
                    } while (uVar54 != 0);
                  }
                  if ((uVar52 & 1) != 0) {
                    pfVar47 = local_68 + lVar49;
                    fVar62 = pfVar47[1];
                    fVar232 = pfVar47[2];
                    fVar233 = pfVar47[3];
                    pfVar53 = local_68 + lVar49 + 4;
                    fVar234 = *pfVar53;
                    fVar235 = pfVar53[1];
                    fVar264 = pfVar53[2];
                    fVar265 = pfVar53[3];
                    pfVar53 = local_88 + lVar49;
                    fVar266 = pfVar53[1];
                    fVar28 = pfVar53[2];
                    fVar29 = pfVar53[3];
                    pfVar2 = local_88 + lVar49 + 4;
                    fVar30 = *pfVar2;
                    fVar31 = pfVar2[1];
                    fVar32 = pfVar2[2];
                    fVar33 = pfVar2[3];
                    pfVar2 = pfVar38 + lVar49;
                    *pfVar2 = *pfVar53 * *pfVar47;
                    pfVar2[1] = fVar266 * fVar62;
                    pfVar2[2] = fVar28 * fVar232;
                    pfVar2[3] = fVar29 * fVar233;
                    pfVar47 = pfVar38 + lVar49 + 4;
                    *pfVar47 = fVar30 * fVar234;
                    pfVar47[1] = fVar31 * fVar235;
                    pfVar47[2] = fVar32 * fVar264;
                    pfVar47[3] = fVar33 * fVar265;
                  }
                  if (uVar44 + 1 == uVar57) goto LAB_005b73c2;
                  pfVar38 = pfVar38 + uVar57;
                  pfVar47 = local_88 + uVar57;
                  pfVar53 = local_68 + uVar57;
                }
              }
              uVar50 = (uint)uVar57;
              uVar43 = ~uVar50;
              if ((uVar34 & 3) != 0) {
                iVar40 = 0;
                do {
                  *pfVar38 = *pfVar47 * *pfVar53;
                  pfVar38 = pfVar38 + 1;
                  pfVar47 = pfVar47 + 1;
                  pfVar53 = pfVar53 + 1;
                  iVar40 = iVar40 + -1;
                } while (-(uVar34 & 3) != iVar40);
                uVar50 = uVar50 - iVar40;
              }
              if (2 < uVar43 + uVar34) {
                lVar49 = 0;
                do {
                  pfVar38[lVar49] = pfVar47[lVar49] * pfVar53[lVar49];
                  pfVar38[lVar49 + 1] = pfVar47[lVar49 + 1] * pfVar53[lVar49 + 1];
                  pfVar38[lVar49 + 2] = pfVar47[lVar49 + 2] * pfVar53[lVar49 + 2];
                  pfVar38[lVar49 + 3] = pfVar47[lVar49 + 3] * pfVar53[lVar49 + 3];
                  lVar49 = lVar49 + 4;
                } while (uVar34 - uVar50 != (int)lVar49);
              }
            }
            goto LAB_005b73c2;
          }
          if (lStack_80 == 2) {
            uVar34 = *(uint *)(param_7 + 0x28f8);
            if (0 < (int)uVar34) {
              uVar57 = (ulong)(uVar34 - 1);
              uVar44 = 0;
              pfVar47 = local_68;
              if ((6 < uVar34 - 1) &&
                 ((local_68 + uVar57 + 1 <= pfVar38 || (pfVar38 + uVar57 + 1 <= local_68)))) {
                uVar44 = uVar57 + 1 & 0xfffffffffffffff8;
                uVar52 = (uVar44 - 8 >> 3) + 1;
                if (uVar44 - 8 == 0) {
                  lVar49 = 0;
                }
                else {
                  uVar54 = uVar52 & 0x3ffffffffffffffe;
                  lVar49 = 0;
                  do {
                    pfVar47 = local_68 + lVar49;
                    fVar62 = pfVar47[1];
                    fVar232 = pfVar47[2];
                    fVar233 = pfVar47[3];
                    pfVar53 = local_68 + lVar49 + 4;
                    fVar234 = *pfVar53;
                    fVar235 = pfVar53[1];
                    fVar264 = pfVar53[2];
                    fVar265 = pfVar53[3];
                    pfVar53 = pfVar38 + lVar49;
                    *pfVar53 = *pfVar47 * local_88._0_4_;
                    pfVar53[1] = fVar62 * local_88._0_4_;
                    pfVar53[2] = fVar232 * local_88._0_4_;
                    pfVar53[3] = fVar233 * local_88._0_4_;
                    pfVar47 = pfVar38 + lVar49 + 4;
                    *pfVar47 = fVar234 * local_88._0_4_;
                    pfVar47[1] = fVar235 * local_88._0_4_;
                    pfVar47[2] = fVar264 * local_88._0_4_;
                    pfVar47[3] = fVar265 * local_88._0_4_;
                    pfVar47 = local_68 + lVar49 + 8;
                    fVar62 = pfVar47[1];
                    fVar232 = pfVar47[2];
                    fVar233 = pfVar47[3];
                    pfVar53 = local_68 + lVar49 + 0xc;
                    fVar234 = *pfVar53;
                    fVar235 = pfVar53[1];
                    fVar264 = pfVar53[2];
                    fVar265 = pfVar53[3];
                    pfVar53 = pfVar38 + lVar49 + 8;
                    *pfVar53 = *pfVar47 * local_88._0_4_;
                    pfVar53[1] = fVar62 * local_88._0_4_;
                    pfVar53[2] = fVar232 * local_88._0_4_;
                    pfVar53[3] = fVar233 * local_88._0_4_;
                    pfVar47 = pfVar38 + lVar49 + 0xc;
                    *pfVar47 = fVar234 * local_88._0_4_;
                    pfVar47[1] = fVar235 * local_88._0_4_;
                    pfVar47[2] = fVar264 * local_88._0_4_;
                    pfVar47[3] = fVar265 * local_88._0_4_;
                    lVar49 = lVar49 + 0x10;
                    uVar54 = uVar54 - 2;
                  } while (uVar54 != 0);
                }
                if ((uVar52 & 1) != 0) {
                  pfVar47 = local_68 + lVar49;
                  fVar62 = pfVar47[1];
                  fVar232 = pfVar47[2];
                  fVar233 = pfVar47[3];
                  pfVar53 = local_68 + lVar49 + 4;
                  fVar234 = *pfVar53;
                  fVar235 = pfVar53[1];
                  fVar264 = pfVar53[2];
                  fVar265 = pfVar53[3];
                  pfVar53 = pfVar38 + lVar49;
                  *pfVar53 = *pfVar47 * local_88._0_4_;
                  pfVar53[1] = fVar62 * local_88._0_4_;
                  pfVar53[2] = fVar232 * local_88._0_4_;
                  pfVar53[3] = fVar233 * local_88._0_4_;
                  pfVar47 = pfVar38 + lVar49 + 4;
                  *pfVar47 = fVar234 * local_88._0_4_;
                  pfVar47[1] = fVar235 * local_88._0_4_;
                  pfVar47[2] = fVar264 * local_88._0_4_;
                  pfVar47[3] = fVar265 * local_88._0_4_;
                }
                if (uVar57 + 1 == uVar44) goto LAB_005b73c2;
                pfVar38 = pfVar38 + uVar44;
                pfVar47 = local_68 + uVar44;
              }
              uVar43 = (uint)uVar44;
              uVar50 = ~uVar43;
              if ((uVar34 & 3) != 0) {
                iVar40 = 0;
                do {
                  *pfVar38 = *pfVar47 * local_88._0_4_;
                  pfVar38 = pfVar38 + 1;
                  pfVar47 = pfVar47 + 1;
                  iVar40 = iVar40 + -1;
                } while (-(uVar34 & 3) != iVar40);
                uVar43 = uVar43 - iVar40;
              }
              if (2 < uVar50 + uVar34) {
                lVar49 = 0;
                do {
                  pfVar38[lVar49] = pfVar47[lVar49] * local_88._0_4_;
                  pfVar38[lVar49 + 1] = pfVar47[lVar49 + 1] * local_88._0_4_;
                  pfVar38[lVar49 + 2] = pfVar47[lVar49 + 2] * local_88._0_4_;
                  pfVar38[lVar49 + 3] = pfVar47[lVar49 + 3] * local_88._0_4_;
                  lVar49 = lVar49 + 4;
                } while (uVar34 - uVar43 != (int)lVar49);
              }
            }
            goto LAB_005b73c2;
          }
          if (lStack_80 == 1) {
            uVar34 = *(uint *)(param_7 + 0x28f8);
            if (0 < (int)uVar34) {
              fVar62 = (float)(long)local_88;
              uVar57 = (ulong)(uVar34 - 1);
              uVar44 = 0;
              pfVar47 = local_68;
              if ((6 < uVar34 - 1) &&
                 ((local_68 + uVar57 + 1 <= pfVar38 || (pfVar38 + uVar57 + 1 <= local_68)))) {
                uVar44 = uVar57 + 1 & 0xfffffffffffffff8;
                uVar52 = (uVar44 - 8 >> 3) + 1;
                if (uVar44 - 8 == 0) {
                  lVar49 = 0;
                }
                else {
                  uVar54 = uVar52 & 0x3ffffffffffffffe;
                  lVar49 = 0;
                  do {
                    pfVar47 = local_68 + lVar49;
                    fVar232 = pfVar47[1];
                    fVar233 = pfVar47[2];
                    fVar234 = pfVar47[3];
                    pfVar53 = local_68 + lVar49 + 4;
                    fVar235 = *pfVar53;
                    fVar264 = pfVar53[1];
                    fVar265 = pfVar53[2];
                    fVar266 = pfVar53[3];
                    pfVar53 = pfVar38 + lVar49;
                    *pfVar53 = *pfVar47 * fVar62;
                    pfVar53[1] = fVar232 * fVar62;
                    pfVar53[2] = fVar233 * fVar62;
                    pfVar53[3] = fVar234 * fVar62;
                    pfVar47 = pfVar38 + lVar49 + 4;
                    *pfVar47 = fVar235 * fVar62;
                    pfVar47[1] = fVar264 * fVar62;
                    pfVar47[2] = fVar265 * fVar62;
                    pfVar47[3] = fVar266 * fVar62;
                    pfVar47 = local_68 + lVar49 + 8;
                    fVar232 = pfVar47[1];
                    fVar233 = pfVar47[2];
                    fVar234 = pfVar47[3];
                    pfVar53 = local_68 + lVar49 + 0xc;
                    fVar235 = *pfVar53;
                    fVar264 = pfVar53[1];
                    fVar265 = pfVar53[2];
                    fVar266 = pfVar53[3];
                    pfVar53 = pfVar38 + lVar49 + 8;
                    *pfVar53 = *pfVar47 * fVar62;
                    pfVar53[1] = fVar232 * fVar62;
                    pfVar53[2] = fVar233 * fVar62;
                    pfVar53[3] = fVar234 * fVar62;
                    pfVar47 = pfVar38 + lVar49 + 0xc;
                    *pfVar47 = fVar235 * fVar62;
                    pfVar47[1] = fVar264 * fVar62;
                    pfVar47[2] = fVar265 * fVar62;
                    pfVar47[3] = fVar266 * fVar62;
                    lVar49 = lVar49 + 0x10;
                    uVar54 = uVar54 - 2;
                  } while (uVar54 != 0);
                }
                if ((uVar52 & 1) != 0) {
                  pfVar47 = local_68 + lVar49;
                  fVar232 = pfVar47[1];
                  fVar233 = pfVar47[2];
                  fVar234 = pfVar47[3];
                  pfVar53 = local_68 + lVar49 + 4;
                  fVar235 = *pfVar53;
                  fVar264 = pfVar53[1];
                  fVar265 = pfVar53[2];
                  fVar266 = pfVar53[3];
                  pfVar53 = pfVar38 + lVar49;
                  *pfVar53 = *pfVar47 * fVar62;
                  pfVar53[1] = fVar232 * fVar62;
                  pfVar53[2] = fVar233 * fVar62;
                  pfVar53[3] = fVar234 * fVar62;
                  pfVar47 = pfVar38 + lVar49 + 4;
                  *pfVar47 = fVar235 * fVar62;
                  pfVar47[1] = fVar264 * fVar62;
                  pfVar47[2] = fVar265 * fVar62;
                  pfVar47[3] = fVar266 * fVar62;
                }
                if (uVar57 + 1 == uVar44) goto LAB_005b73c2;
                pfVar38 = pfVar38 + uVar44;
                pfVar47 = local_68 + uVar44;
              }
              uVar43 = (uint)uVar44;
              uVar50 = ~uVar43;
              if ((uVar34 & 3) != 0) {
                iVar40 = 0;
                do {
                  *pfVar38 = *pfVar47 * fVar62;
                  pfVar38 = pfVar38 + 1;
                  pfVar47 = pfVar47 + 1;
                  iVar40 = iVar40 + -1;
                } while (-(uVar34 & 3) != iVar40);
                uVar43 = uVar43 - iVar40;
              }
              if (2 < uVar50 + uVar34) {
                lVar49 = 0;
                do {
                  pfVar38[lVar49] = pfVar47[lVar49] * fVar62;
                  pfVar38[lVar49 + 1] = pfVar47[lVar49 + 1] * fVar62;
                  pfVar38[lVar49 + 2] = pfVar47[lVar49 + 2] * fVar62;
                  pfVar38[lVar49 + 3] = pfVar47[lVar49 + 3] * fVar62;
                  lVar49 = lVar49 + 4;
                } while (uVar34 - uVar43 != (int)lVar49);
              }
            }
            goto LAB_005b73c2;
          }
LAB_005b72a1:
          pcVar55 = "expr: ex_eval(%d): bad right type %ld\n";
          puVar36 = (ulong *)0x0;
          lVar49 = lStack_80;
        }
        else {
          if (lStack_60 == 2) {
            if (lStack_80 - 0xeU < 2) {
              if (*(long *)(param_9 + 2) == 0xf) {
                pfVar38 = *(float **)param_9;
              }
              else {
                if (*(long *)(param_9 + 2) == 0xe) goto LAB_005c5996;
                param_9[2] = 2.10195e-44;
                param_9[3] = 0.0;
                pfVar38 = malloc((long)*(int *)(param_7 + 0x28f8) << 2);
                *(float **)param_9 = pfVar38;
              }
              uVar34 = *(uint *)(param_7 + 0x28f8);
              if (0 < (int)uVar34) {
                uVar57 = (ulong)(uVar34 - 1);
                uVar44 = 0;
                pfVar47 = local_88;
                if ((6 < uVar34 - 1) &&
                   ((local_88 + uVar57 + 1 <= pfVar38 || (pfVar38 + uVar57 + 1 <= local_88)))) {
                  uVar44 = uVar57 + 1 & 0xfffffffffffffff8;
                  uVar52 = (uVar44 - 8 >> 3) + 1;
                  if (uVar44 - 8 == 0) {
                    lVar49 = 0;
                  }
                  else {
                    uVar54 = uVar52 & 0x3ffffffffffffffe;
                    lVar49 = 0;
                    do {
                      pfVar47 = local_88 + lVar49;
                      fVar62 = pfVar47[1];
                      fVar232 = pfVar47[2];
                      fVar233 = pfVar47[3];
                      pfVar53 = local_88 + lVar49 + 4;
                      fVar234 = *pfVar53;
                      fVar235 = pfVar53[1];
                      fVar264 = pfVar53[2];
                      fVar265 = pfVar53[3];
                      pfVar53 = pfVar38 + lVar49;
                      *pfVar53 = *pfVar47 * local_68._0_4_;
                      pfVar53[1] = fVar62 * local_68._0_4_;
                      pfVar53[2] = fVar232 * local_68._0_4_;
                      pfVar53[3] = fVar233 * local_68._0_4_;
                      pfVar47 = pfVar38 + lVar49 + 4;
                      *pfVar47 = fVar234 * local_68._0_4_;
                      pfVar47[1] = fVar235 * local_68._0_4_;
                      pfVar47[2] = fVar264 * local_68._0_4_;
                      pfVar47[3] = fVar265 * local_68._0_4_;
                      pfVar47 = local_88 + lVar49 + 8;
                      fVar62 = pfVar47[1];
                      fVar232 = pfVar47[2];
                      fVar233 = pfVar47[3];
                      pfVar53 = local_88 + lVar49 + 0xc;
                      fVar234 = *pfVar53;
                      fVar235 = pfVar53[1];
                      fVar264 = pfVar53[2];
                      fVar265 = pfVar53[3];
                      pfVar53 = pfVar38 + lVar49 + 8;
                      *pfVar53 = *pfVar47 * local_68._0_4_;
                      pfVar53[1] = fVar62 * local_68._0_4_;
                      pfVar53[2] = fVar232 * local_68._0_4_;
                      pfVar53[3] = fVar233 * local_68._0_4_;
                      pfVar47 = pfVar38 + lVar49 + 0xc;
                      *pfVar47 = fVar234 * local_68._0_4_;
                      pfVar47[1] = fVar235 * local_68._0_4_;
                      pfVar47[2] = fVar264 * local_68._0_4_;
                      pfVar47[3] = fVar265 * local_68._0_4_;
                      lVar49 = lVar49 + 0x10;
                      uVar54 = uVar54 - 2;
                    } while (uVar54 != 0);
                  }
                  if ((uVar52 & 1) != 0) {
                    pfVar47 = local_88 + lVar49;
                    fVar62 = pfVar47[1];
                    fVar232 = pfVar47[2];
                    fVar233 = pfVar47[3];
                    pfVar53 = local_88 + lVar49 + 4;
                    fVar234 = *pfVar53;
                    fVar235 = pfVar53[1];
                    fVar264 = pfVar53[2];
                    fVar265 = pfVar53[3];
                    pfVar53 = pfVar38 + lVar49;
                    *pfVar53 = *pfVar47 * local_68._0_4_;
                    pfVar53[1] = fVar62 * local_68._0_4_;
                    pfVar53[2] = fVar232 * local_68._0_4_;
                    pfVar53[3] = fVar233 * local_68._0_4_;
                    pfVar47 = pfVar38 + lVar49 + 4;
                    *pfVar47 = fVar234 * local_68._0_4_;
                    pfVar47[1] = fVar235 * local_68._0_4_;
                    pfVar47[2] = fVar264 * local_68._0_4_;
                    pfVar47[3] = fVar265 * local_68._0_4_;
                  }
                  if (uVar57 + 1 == uVar44) goto LAB_005b73c2;
                  pfVar38 = pfVar38 + uVar44;
                  pfVar47 = local_88 + uVar44;
                }
                uVar43 = (uint)uVar44;
                uVar50 = ~uVar43;
                if ((uVar34 & 3) != 0) {
                  iVar40 = 0;
                  do {
                    *pfVar38 = *pfVar47 * local_68._0_4_;
                    pfVar38 = pfVar38 + 1;
                    pfVar47 = pfVar47 + 1;
                    iVar40 = iVar40 + -1;
                  } while (-(uVar34 & 3) != iVar40);
                  uVar43 = uVar43 - iVar40;
                }
                if (2 < uVar50 + uVar34) {
                  lVar49 = 0;
                  do {
                    pfVar38[lVar49] = pfVar47[lVar49] * local_68._0_4_;
                    pfVar38[lVar49 + 1] = pfVar47[lVar49 + 1] * local_68._0_4_;
                    pfVar38[lVar49 + 2] = pfVar47[lVar49 + 2] * local_68._0_4_;
                    pfVar38[lVar49 + 3] = pfVar47[lVar49 + 3] * local_68._0_4_;
                    lVar49 = lVar49 + 4;
                  } while (uVar34 - uVar43 != (int)lVar49);
                }
              }
              goto LAB_005b73c2;
            }
            if (lStack_80 == 2) {
              if (*(long *)(param_9 + 2) == 0xf) {
                iVar40 = *(int *)(param_7 + 0x28f8);
                if (0 < iVar40) {
                  fVar62 = local_88._0_4_ * local_68._0_4_;
                  lVar49 = *(long *)param_9;
                  uVar44 = 0;
                  if (6 < iVar40 - 1U) {
                    uVar52 = (ulong)(iVar40 - 1U) + 1;
                    uVar44 = uVar52 & 0xfffffffffffffff8;
                    uVar54 = (uVar44 - 8 >> 3) + 1;
                    uVar57 = (ulong)((uint)uVar54 & 7);
                    if (uVar44 - 8 < 0x38) {
                      lVar45 = 0;
                    }
                    else {
                      uVar54 = uVar54 & 0xfffffffffffffff8;
                      lVar45 = 0;
                      do {
                        pfVar38 = (float *)(lVar49 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar45 = lVar45 + 0x40;
                        uVar54 = uVar54 - 8;
                      } while (uVar54 != 0);
                    }
                    if (uVar57 != 0) {
                      lVar45 = lVar49 + lVar45 * 4;
                      lVar48 = 0;
                      do {
                        pfVar38 = (float *)(lVar45 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar48 = lVar48 + 0x20;
                      } while (uVar57 * 0x20 != lVar48);
                    }
                    if (uVar52 == uVar44) goto LAB_005b73c2;
                    lVar49 = lVar49 + uVar44 * 4;
                  }
                  lVar45 = 0;
                  do {
                    *(float *)(lVar49 + lVar45 * 4) = fVar62;
                    lVar45 = lVar45 + 1;
                  } while (iVar40 - (int)uVar44 != (int)lVar45);
                }
                goto LAB_005b73c2;
              }
              param_9[2] = 2.8026e-45;
              param_9[3] = 0.0;
              fVar62 = local_88._0_4_;
            }
            else {
              if (lStack_80 != 1) goto LAB_005b72a1;
              if (*(long *)(param_9 + 2) == 0xf) {
                iVar40 = *(int *)(param_7 + 0x28f8);
                if (0 < iVar40) {
                  fVar62 = (float)(long)local_88 * local_68._0_4_;
                  lVar49 = *(long *)param_9;
                  uVar44 = 0;
                  if (6 < iVar40 - 1U) {
                    uVar52 = (ulong)(iVar40 - 1U) + 1;
                    uVar44 = uVar52 & 0xfffffffffffffff8;
                    uVar54 = (uVar44 - 8 >> 3) + 1;
                    uVar57 = (ulong)((uint)uVar54 & 7);
                    if (uVar44 - 8 < 0x38) {
                      lVar45 = 0;
                    }
                    else {
                      uVar54 = uVar54 & 0xfffffffffffffff8;
                      lVar45 = 0;
                      do {
                        pfVar38 = (float *)(lVar49 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar45 = lVar45 + 0x40;
                        uVar54 = uVar54 - 8;
                      } while (uVar54 != 0);
                    }
                    if (uVar57 != 0) {
                      lVar45 = lVar49 + lVar45 * 4;
                      lVar48 = 0;
                      do {
                        pfVar38 = (float *)(lVar45 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar48 = lVar48 + 0x20;
                      } while (uVar57 * 0x20 != lVar48);
                    }
                    if (uVar52 == uVar44) goto LAB_005b73c2;
                    lVar49 = lVar49 + uVar44 * 4;
                  }
                  lVar45 = 0;
                  do {
                    *(float *)(lVar49 + lVar45 * 4) = fVar62;
                    lVar45 = lVar45 + 1;
                  } while (iVar40 - (int)uVar44 != (int)lVar45);
                }
                goto LAB_005b73c2;
              }
              param_9[2] = 2.8026e-45;
              param_9[3] = 0.0;
              fVar62 = (float)(long)local_88;
            }
            *param_9 = fVar62 * local_68._0_4_;
            goto LAB_005b73c2;
          }
          if (lStack_60 == 1) {
            if (lStack_80 - 0xeU < 2) {
              if (*(long *)(param_9 + 2) == 0xf) {
                pfVar38 = *(float **)param_9;
              }
              else {
                if (*(long *)(param_9 + 2) == 0xe) goto LAB_005c5996;
                param_9[2] = 2.10195e-44;
                param_9[3] = 0.0;
                pfVar38 = malloc((long)*(int *)(param_7 + 0x28f8) << 2);
                *(float **)param_9 = pfVar38;
              }
              uVar34 = *(uint *)(param_7 + 0x28f8);
              if (0 < (int)uVar34) {
                fVar62 = (float)(long)local_68;
                uVar57 = (ulong)(uVar34 - 1);
                uVar44 = 0;
                pfVar47 = local_88;
                if ((6 < uVar34 - 1) &&
                   ((local_88 + uVar57 + 1 <= pfVar38 || (pfVar38 + uVar57 + 1 <= local_88)))) {
                  uVar44 = uVar57 + 1 & 0xfffffffffffffff8;
                  uVar52 = (uVar44 - 8 >> 3) + 1;
                  if (uVar44 - 8 == 0) {
                    lVar49 = 0;
                  }
                  else {
                    uVar54 = uVar52 & 0x3ffffffffffffffe;
                    lVar49 = 0;
                    do {
                      pfVar47 = local_88 + lVar49;
                      fVar232 = pfVar47[1];
                      fVar233 = pfVar47[2];
                      fVar234 = pfVar47[3];
                      pfVar53 = local_88 + lVar49 + 4;
                      fVar235 = *pfVar53;
                      fVar264 = pfVar53[1];
                      fVar265 = pfVar53[2];
                      fVar266 = pfVar53[3];
                      pfVar53 = pfVar38 + lVar49;
                      *pfVar53 = *pfVar47 * fVar62;
                      pfVar53[1] = fVar232 * fVar62;
                      pfVar53[2] = fVar233 * fVar62;
                      pfVar53[3] = fVar234 * fVar62;
                      pfVar47 = pfVar38 + lVar49 + 4;
                      *pfVar47 = fVar235 * fVar62;
                      pfVar47[1] = fVar264 * fVar62;
                      pfVar47[2] = fVar265 * fVar62;
                      pfVar47[3] = fVar266 * fVar62;
                      pfVar47 = local_88 + lVar49 + 8;
                      fVar232 = pfVar47[1];
                      fVar233 = pfVar47[2];
                      fVar234 = pfVar47[3];
                      pfVar53 = local_88 + lVar49 + 0xc;
                      fVar235 = *pfVar53;
                      fVar264 = pfVar53[1];
                      fVar265 = pfVar53[2];
                      fVar266 = pfVar53[3];
                      pfVar53 = pfVar38 + lVar49 + 8;
                      *pfVar53 = *pfVar47 * fVar62;
                      pfVar53[1] = fVar232 * fVar62;
                      pfVar53[2] = fVar233 * fVar62;
                      pfVar53[3] = fVar234 * fVar62;
                      pfVar47 = pfVar38 + lVar49 + 0xc;
                      *pfVar47 = fVar235 * fVar62;
                      pfVar47[1] = fVar264 * fVar62;
                      pfVar47[2] = fVar265 * fVar62;
                      pfVar47[3] = fVar266 * fVar62;
                      lVar49 = lVar49 + 0x10;
                      uVar54 = uVar54 - 2;
                    } while (uVar54 != 0);
                  }
                  if ((uVar52 & 1) != 0) {
                    pfVar47 = local_88 + lVar49;
                    fVar232 = pfVar47[1];
                    fVar233 = pfVar47[2];
                    fVar234 = pfVar47[3];
                    pfVar53 = local_88 + lVar49 + 4;
                    fVar235 = *pfVar53;
                    fVar264 = pfVar53[1];
                    fVar265 = pfVar53[2];
                    fVar266 = pfVar53[3];
                    pfVar53 = pfVar38 + lVar49;
                    *pfVar53 = *pfVar47 * fVar62;
                    pfVar53[1] = fVar232 * fVar62;
                    pfVar53[2] = fVar233 * fVar62;
                    pfVar53[3] = fVar234 * fVar62;
                    pfVar47 = pfVar38 + lVar49 + 4;
                    *pfVar47 = fVar235 * fVar62;
                    pfVar47[1] = fVar264 * fVar62;
                    pfVar47[2] = fVar265 * fVar62;
                    pfVar47[3] = fVar266 * fVar62;
                  }
                  if (uVar57 + 1 == uVar44) goto LAB_005b73c2;
                  pfVar38 = pfVar38 + uVar44;
                  pfVar47 = local_88 + uVar44;
                }
                uVar43 = (uint)uVar44;
                uVar50 = ~uVar43;
                if ((uVar34 & 3) != 0) {
                  iVar40 = 0;
                  do {
                    *pfVar38 = *pfVar47 * fVar62;
                    pfVar38 = pfVar38 + 1;
                    pfVar47 = pfVar47 + 1;
                    iVar40 = iVar40 + -1;
                  } while (-(uVar34 & 3) != iVar40);
                  uVar43 = uVar43 - iVar40;
                }
                if (2 < uVar50 + uVar34) {
                  lVar49 = 0;
                  do {
                    pfVar38[lVar49] = pfVar47[lVar49] * fVar62;
                    pfVar38[lVar49 + 1] = pfVar47[lVar49 + 1] * fVar62;
                    pfVar38[lVar49 + 2] = pfVar47[lVar49 + 2] * fVar62;
                    pfVar38[lVar49 + 3] = pfVar47[lVar49 + 3] * fVar62;
                    lVar49 = lVar49 + 4;
                  } while (uVar34 - uVar43 != (int)lVar49);
                }
              }
              goto LAB_005b73c2;
            }
            if (lStack_80 == 2) {
              if (*(long *)(param_9 + 2) == 0xf) {
                iVar40 = *(int *)(param_7 + 0x28f8);
                if (0 < iVar40) {
                  fVar62 = (float)(long)local_68 * local_88._0_4_;
                  lVar49 = *(long *)param_9;
                  uVar44 = 0;
                  if (6 < iVar40 - 1U) {
                    uVar52 = (ulong)(iVar40 - 1U) + 1;
                    uVar44 = uVar52 & 0xfffffffffffffff8;
                    uVar54 = (uVar44 - 8 >> 3) + 1;
                    uVar57 = (ulong)((uint)uVar54 & 7);
                    if (uVar44 - 8 < 0x38) {
                      lVar45 = 0;
                    }
                    else {
                      uVar54 = uVar54 & 0xfffffffffffffff8;
                      lVar45 = 0;
                      do {
                        pfVar38 = (float *)(lVar49 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar45 = lVar45 + 0x40;
                        uVar54 = uVar54 - 8;
                      } while (uVar54 != 0);
                    }
                    if (uVar57 != 0) {
                      lVar45 = lVar49 + lVar45 * 4;
                      lVar48 = 0;
                      do {
                        pfVar38 = (float *)(lVar45 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar48 = lVar48 + 0x20;
                      } while (uVar57 * 0x20 != lVar48);
                    }
                    if (uVar52 == uVar44) goto LAB_005b73c2;
                    lVar49 = lVar49 + uVar44 * 4;
                  }
                  lVar45 = 0;
                  do {
                    *(float *)(lVar49 + lVar45 * 4) = fVar62;
                    lVar45 = lVar45 + 1;
                  } while (iVar40 - (int)uVar44 != (int)lVar45);
                }
              }
              else {
                param_9[2] = 2.8026e-45;
                param_9[3] = 0.0;
                *param_9 = (float)(long)local_68 * local_88._0_4_;
              }
              goto LAB_005b73c2;
            }
            if (lStack_80 == 1) {
              if (*(long *)(param_9 + 2) == 0xf) {
                iVar40 = *(int *)(param_7 + 0x28f8);
                if (0 < iVar40) {
                  fVar62 = (float)((long)local_88 * (long)local_68);
                  lVar49 = *(long *)param_9;
                  uVar44 = 0;
                  if (6 < iVar40 - 1U) {
                    uVar52 = (ulong)(iVar40 - 1U) + 1;
                    uVar44 = uVar52 & 0xfffffffffffffff8;
                    uVar54 = (uVar44 - 8 >> 3) + 1;
                    uVar57 = (ulong)((uint)uVar54 & 7);
                    if (uVar44 - 8 < 0x38) {
                      lVar45 = 0;
                    }
                    else {
                      uVar54 = uVar54 & 0xfffffffffffffff8;
                      lVar45 = 0;
                      do {
                        pfVar38 = (float *)(lVar49 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar45 = lVar45 + 0x40;
                        uVar54 = uVar54 - 8;
                      } while (uVar54 != 0);
                    }
                    if (uVar57 != 0) {
                      lVar45 = lVar49 + lVar45 * 4;
                      lVar48 = 0;
                      do {
                        pfVar38 = (float *)(lVar45 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar48 = lVar48 + 0x20;
                      } while (uVar57 * 0x20 != lVar48);
                    }
                    if (uVar52 == uVar44) goto LAB_005b73c2;
                    lVar49 = lVar49 + uVar44 * 4;
                  }
                  lVar45 = 0;
                  do {
                    *(float *)(lVar49 + lVar45 * 4) = fVar62;
                    lVar45 = lVar45 + 1;
                  } while (iVar40 - (int)uVar44 != (int)lVar45);
                }
              }
              else {
                param_9[2] = 1.4013e-45;
                param_9[3] = 0.0;
                *(long *)param_9 = (long)local_88 * (long)local_68;
              }
              goto LAB_005b73c2;
            }
            goto LAB_005b72a1;
          }
          pcVar55 = "expr: ex_eval(%d): bad left type %ld\n";
          lVar49 = lStack_60;
        }
        uVar46 = 0x52b;
      }
      else if (uVar57 == 0xe0015) {
        puVar36 = ex_eval(0,param_2,param_3,param_4,param_5,param_6,param_7,puVar36,
                          (float *)&local_68,puVar51,param_11,param_12);
        uVar236 = in_XMM3._0_8_;
        uVar63 = in_XMM2._0_8_;
        if (lStack_60 - 0xeU < 2) {
          if (*(long *)(param_9 + 2) == 0xf) {
            pfVar38 = *(float **)param_9;
          }
          else {
            param_9[2] = 2.10195e-44;
            param_9[3] = 0.0;
            pfVar38 = malloc((long)*(int *)(param_7 + 0x28f8) << 2);
            *(float **)param_9 = pfVar38;
          }
          uVar7 = _UNK_006524bc;
          uVar56 = _UNK_006524b8;
          uVar50 = _UNK_006524b4;
          uVar43 = _DAT_006524b0;
          uVar34 = *(uint *)(param_7 + 0x28f8);
          if (0 < (int)uVar34) {
            uVar57 = (ulong)(uVar34 - 1);
            uVar44 = 0;
            pfVar47 = local_68;
            if ((6 < uVar34 - 1) &&
               ((local_68 + uVar57 + 1 <= pfVar38 || (pfVar38 + uVar57 + 1 <= local_68)))) {
              uVar44 = uVar57 + 1 & 0xfffffffffffffff8;
              uVar52 = (uVar44 - 8 >> 3) + 1;
              if (uVar44 - 8 == 0) {
                lVar49 = 0;
              }
              else {
                uVar54 = uVar52 & 0x3ffffffffffffffe;
                lVar49 = 0;
                do {
                  pfVar47 = local_68 + lVar49;
                  fVar62 = pfVar47[1];
                  fVar232 = pfVar47[2];
                  fVar233 = pfVar47[3];
                  pfVar53 = local_68 + lVar49 + 4;
                  fVar234 = *pfVar53;
                  fVar235 = pfVar53[1];
                  fVar264 = pfVar53[2];
                  fVar265 = pfVar53[3];
                  pfVar53 = pfVar38 + lVar49;
                  *pfVar53 = (float)((uint)*pfVar47 ^ uVar43);
                  pfVar53[1] = (float)((uint)fVar62 ^ uVar50);
                  pfVar53[2] = (float)((uint)fVar232 ^ uVar56);
                  pfVar53[3] = (float)((uint)fVar233 ^ uVar7);
                  pfVar47 = pfVar38 + lVar49 + 4;
                  *pfVar47 = (float)((uint)fVar234 ^ uVar43);
                  pfVar47[1] = (float)((uint)fVar235 ^ uVar50);
                  pfVar47[2] = (float)((uint)fVar264 ^ uVar56);
                  pfVar47[3] = (float)((uint)fVar265 ^ uVar7);
                  pfVar47 = local_68 + lVar49 + 8;
                  fVar62 = pfVar47[1];
                  fVar232 = pfVar47[2];
                  fVar233 = pfVar47[3];
                  pfVar53 = local_68 + lVar49 + 0xc;
                  fVar234 = *pfVar53;
                  fVar235 = pfVar53[1];
                  fVar264 = pfVar53[2];
                  fVar265 = pfVar53[3];
                  pfVar53 = pfVar38 + lVar49 + 8;
                  *pfVar53 = (float)((uint)*pfVar47 ^ uVar43);
                  pfVar53[1] = (float)((uint)fVar62 ^ uVar50);
                  pfVar53[2] = (float)((uint)fVar232 ^ uVar56);
                  pfVar53[3] = (float)((uint)fVar233 ^ uVar7);
                  pfVar47 = pfVar38 + lVar49 + 0xc;
                  *pfVar47 = (float)((uint)fVar234 ^ uVar43);
                  pfVar47[1] = (float)((uint)fVar235 ^ uVar50);
                  pfVar47[2] = (float)((uint)fVar264 ^ uVar56);
                  pfVar47[3] = (float)((uint)fVar265 ^ uVar7);
                  lVar49 = lVar49 + 0x10;
                  uVar54 = uVar54 - 2;
                } while (uVar54 != 0);
              }
              if ((uVar52 & 1) != 0) {
                pfVar47 = local_68 + lVar49;
                pfVar53 = local_68 + lVar49 + 4;
                fVar62 = (float)((uint)pfVar47[1] ^ _UNK_006524b4);
                fVar232 = (float)((uint)pfVar47[2] ^ _UNK_006524b8);
                fVar233 = (float)((uint)pfVar47[3] ^ _UNK_006524bc);
                fVar234 = (float)((uint)*pfVar53 ^ _DAT_006524b0);
                fVar235 = (float)((uint)pfVar53[1] ^ _UNK_006524b4);
                fVar264 = (float)((uint)pfVar53[2] ^ _UNK_006524b8);
                fVar265 = (float)((uint)pfVar53[3] ^ _UNK_006524bc);
                pfVar53 = pfVar38 + lVar49;
                *pfVar53 = (float)((uint)*pfVar47 ^ _DAT_006524b0);
                pfVar53[1] = fVar62;
                pfVar53[2] = fVar232;
                pfVar53[3] = fVar233;
                pfVar47 = pfVar38 + lVar49 + 4;
                *pfVar47 = fVar234;
                pfVar47[1] = fVar235;
                pfVar47[2] = fVar264;
                pfVar47[3] = fVar265;
              }
              if (uVar57 + 1 == uVar44) goto LAB_005b73c2;
              pfVar38 = pfVar38 + uVar44;
              pfVar47 = local_68 + uVar44;
            }
            uVar43 = _DAT_006524b0;
            uVar50 = (uint)uVar44;
            uVar56 = ~uVar50;
            if ((uVar34 & 3) != 0) {
              iVar40 = 0;
              do {
                fVar62 = *pfVar47;
                pfVar47 = pfVar47 + 1;
                *pfVar38 = (float)((uint)fVar62 ^ uVar43);
                pfVar38 = pfVar38 + 1;
                iVar40 = iVar40 + -1;
              } while (-(uVar34 & 3) != iVar40);
              uVar50 = uVar50 - iVar40;
            }
            uVar43 = _DAT_006524b0;
            if (2 < uVar56 + uVar34) {
              lVar49 = 0;
              do {
                pfVar38[lVar49] = (float)((uint)pfVar47[lVar49] ^ uVar43);
                pfVar38[lVar49 + 1] = (float)((uint)pfVar47[lVar49 + 1] ^ uVar43);
                pfVar38[lVar49 + 2] = (float)((uint)pfVar47[lVar49 + 2] ^ uVar43);
                pfVar38[lVar49 + 3] = (float)((uint)pfVar47[lVar49 + 3] ^ uVar43);
                lVar49 = lVar49 + 4;
              } while (uVar34 - uVar50 != (int)lVar49);
            }
          }
          goto LAB_005b73c2;
        }
        if (lStack_60 == 2) {
          if (*(long *)(param_9 + 2) == 0xf) {
            iVar40 = *(int *)(param_7 + 0x28f8);
            if (iVar40 != 0) {
              uVar34 = (uint)local_68._0_4_ ^ _DAT_006524b0;
              lVar49 = *(long *)param_9;
              if (6 < iVar40 - 1U) {
                uVar44 = (ulong)(iVar40 - 1U) + 1;
                uVar52 = uVar44 & 0xfffffffffffffff8;
                uVar54 = (uVar52 - 8 >> 3) + 1;
                uVar57 = (ulong)((uint)uVar54 & 7);
                if (uVar52 - 8 < 0x38) {
                  lVar45 = 0;
                }
                else {
                  uVar54 = uVar54 & 0xfffffffffffffff8;
                  lVar45 = 0;
                  do {
                    puVar4 = (uint *)(lVar49 + lVar45 * 4);
                    *puVar4 = uVar34;
                    puVar4[1] = uVar34;
                    puVar4[2] = uVar34;
                    puVar4[3] = uVar34;
                    puVar4 = (uint *)(lVar49 + 0x10 + lVar45 * 4);
                    *puVar4 = uVar34;
                    puVar4[1] = uVar34;
                    puVar4[2] = uVar34;
                    puVar4[3] = uVar34;
                    puVar4 = (uint *)(lVar49 + 0x20 + lVar45 * 4);
                    *puVar4 = uVar34;
                    puVar4[1] = uVar34;
                    puVar4[2] = uVar34;
                    puVar4[3] = uVar34;
                    puVar4 = (uint *)(lVar49 + 0x30 + lVar45 * 4);
                    *puVar4 = uVar34;
                    puVar4[1] = uVar34;
                    puVar4[2] = uVar34;
                    puVar4[3] = uVar34;
                    puVar4 = (uint *)(lVar49 + 0x40 + lVar45 * 4);
                    *puVar4 = uVar34;
                    puVar4[1] = uVar34;
                    puVar4[2] = uVar34;
                    puVar4[3] = uVar34;
                    puVar4 = (uint *)(lVar49 + 0x50 + lVar45 * 4);
                    *puVar4 = uVar34;
                    puVar4[1] = uVar34;
                    puVar4[2] = uVar34;
                    puVar4[3] = uVar34;
                    puVar4 = (uint *)(lVar49 + 0x60 + lVar45 * 4);
                    *puVar4 = uVar34;
                    puVar4[1] = uVar34;
                    puVar4[2] = uVar34;
                    puVar4[3] = uVar34;
                    puVar4 = (uint *)(lVar49 + 0x70 + lVar45 * 4);
                    *puVar4 = uVar34;
                    puVar4[1] = uVar34;
                    puVar4[2] = uVar34;
                    puVar4[3] = uVar34;
                    puVar4 = (uint *)(lVar49 + 0x80 + lVar45 * 4);
                    *puVar4 = uVar34;
                    puVar4[1] = uVar34;
                    puVar4[2] = uVar34;
                    puVar4[3] = uVar34;
                    puVar4 = (uint *)(lVar49 + 0x90 + lVar45 * 4);
                    *puVar4 = uVar34;
                    puVar4[1] = uVar34;
                    puVar4[2] = uVar34;
                    puVar4[3] = uVar34;
                    puVar4 = (uint *)(lVar49 + 0xa0 + lVar45 * 4);
                    *puVar4 = uVar34;
                    puVar4[1] = uVar34;
                    puVar4[2] = uVar34;
                    puVar4[3] = uVar34;
                    puVar4 = (uint *)(lVar49 + 0xb0 + lVar45 * 4);
                    *puVar4 = uVar34;
                    puVar4[1] = uVar34;
                    puVar4[2] = uVar34;
                    puVar4[3] = uVar34;
                    puVar4 = (uint *)(lVar49 + 0xc0 + lVar45 * 4);
                    *puVar4 = uVar34;
                    puVar4[1] = uVar34;
                    puVar4[2] = uVar34;
                    puVar4[3] = uVar34;
                    puVar4 = (uint *)(lVar49 + 0xd0 + lVar45 * 4);
                    *puVar4 = uVar34;
                    puVar4[1] = uVar34;
                    puVar4[2] = uVar34;
                    puVar4[3] = uVar34;
                    puVar4 = (uint *)(lVar49 + 0xe0 + lVar45 * 4);
                    *puVar4 = uVar34;
                    puVar4[1] = uVar34;
                    puVar4[2] = uVar34;
                    puVar4[3] = uVar34;
                    puVar4 = (uint *)(lVar49 + 0xf0 + lVar45 * 4);
                    *puVar4 = uVar34;
                    puVar4[1] = uVar34;
                    puVar4[2] = uVar34;
                    puVar4[3] = uVar34;
                    lVar45 = lVar45 + 0x40;
                    uVar54 = uVar54 - 8;
                  } while (uVar54 != 0);
                }
                if (uVar57 != 0) {
                  lVar45 = lVar49 + lVar45 * 4;
                  lVar48 = 0;
                  do {
                    puVar4 = (uint *)(lVar45 + lVar48);
                    *puVar4 = uVar34;
                    puVar4[1] = uVar34;
                    puVar4[2] = uVar34;
                    puVar4[3] = uVar34;
                    puVar4 = (uint *)(lVar45 + 0x10 + lVar48);
                    *puVar4 = uVar34;
                    puVar4[1] = uVar34;
                    puVar4[2] = uVar34;
                    puVar4[3] = uVar34;
                    lVar48 = lVar48 + 0x20;
                  } while (uVar57 * 0x20 != lVar48);
                }
                if (uVar44 == uVar52) goto LAB_005b73c2;
                iVar40 = iVar40 - (int)uVar52;
                lVar49 = lVar49 + uVar52 * 4;
              }
              lVar45 = 0;
              do {
                *(uint *)(lVar49 + lVar45 * 4) = uVar34;
                lVar45 = lVar45 + 1;
              } while (iVar40 != (int)lVar45);
            }
          }
          else {
            param_9[2] = 2.8026e-45;
            param_9[3] = 0.0;
            *param_9 = (float)((uint)local_68._0_4_ ^ _DAT_006524b0);
          }
          goto LAB_005b73c2;
        }
        if (lStack_60 == 1) {
          if (*(long *)(param_9 + 2) == 0xf) {
            iVar40 = *(int *)(param_7 + 0x28f8);
            if (iVar40 != 0) {
              fVar62 = (float)-(long)local_68;
              lVar49 = *(long *)param_9;
              if (6 < iVar40 - 1U) {
                uVar44 = (ulong)(iVar40 - 1U) + 1;
                uVar52 = uVar44 & 0xfffffffffffffff8;
                uVar54 = (uVar52 - 8 >> 3) + 1;
                uVar57 = (ulong)((uint)uVar54 & 7);
                if (uVar52 - 8 < 0x38) {
                  lVar45 = 0;
                }
                else {
                  uVar54 = uVar54 & 0xfffffffffffffff8;
                  lVar45 = 0;
                  do {
                    pfVar38 = (float *)(lVar49 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    lVar45 = lVar45 + 0x40;
                    uVar54 = uVar54 - 8;
                  } while (uVar54 != 0);
                }
                if (uVar57 != 0) {
                  lVar45 = lVar49 + lVar45 * 4;
                  lVar48 = 0;
                  do {
                    pfVar38 = (float *)(lVar45 + lVar48);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    lVar48 = lVar48 + 0x20;
                  } while (uVar57 * 0x20 != lVar48);
                }
                if (uVar44 == uVar52) goto LAB_005b73c2;
                iVar40 = iVar40 - (int)uVar52;
                lVar49 = lVar49 + uVar52 * 4;
              }
              lVar45 = 0;
              do {
                *(float *)(lVar49 + lVar45 * 4) = fVar62;
                lVar45 = lVar45 + 1;
              } while (iVar40 != (int)lVar45);
            }
          }
          else {
            param_9[2] = 1.4013e-45;
            param_9[3] = 0.0;
            *(long *)param_9 = -(long)local_68;
          }
          goto LAB_005b73c2;
        }
        pcVar55 = "expr: ex_eval(%d): bad left type %ld\n";
        puVar36 = (ulong *)0x0;
        uVar46 = 0x529;
        lVar49 = lStack_60;
        uVar44 = extraout_XMM0_Qa_14;
      }
      else if (uVar57 == 0xe0016) {
        puVar36 = ex_eval(0,param_2,param_3,param_4,param_5,param_6,param_7,puVar36,
                          (float *)&local_68,puVar51,param_11,param_12);
        uVar236 = in_XMM3._0_8_;
        uVar63 = in_XMM2._0_8_;
        uVar44 = extraout_XMM0_03._0_8_;
        if (lStack_60 - 0xeU < 2) {
          if (*(long *)(param_9 + 2) == 0xf) {
            pvVar37 = *(void **)param_9;
          }
          else {
            param_9[2] = 2.10195e-44;
            param_9[3] = 0.0;
            pvVar37 = malloc((long)*(int *)(param_7 + 0x28f8) << 2);
            *(void **)param_9 = pvVar37;
          }
          uVar34 = *(uint *)(param_7 + 0x28f8);
          if (0 < (int)uVar34) {
            pfVar38 = local_68;
            if (2 < uVar34 - 1) {
              lVar49 = 0;
              lVar45 = 0;
              do {
                *(float *)((long)pvVar37 + lVar49 * 4) = (float)~(long)local_68[lVar49];
                *(float *)((long)pvVar37 + lVar49 * 4 + 4) = (float)~(long)local_68[lVar49 + 1];
                *(float *)((long)pvVar37 + lVar49 * 4 + 8) = (float)~(long)local_68[lVar49 + 2];
                *(float *)((long)pvVar37 + lVar49 * 4 + 0xc) = (float)~(long)local_68[lVar49 + 3];
                lVar45 = lVar45 + -0x10;
                lVar49 = lVar49 + 4;
              } while ((uVar34 & 0xfffffffc) != (uint)lVar49);
              pvVar37 = (void *)((long)pvVar37 - lVar45);
              pfVar38 = (float *)((long)local_68 - lVar45);
            }
            if ((uVar34 & 3) != 0) {
              lVar49 = 0;
              do {
                *(float *)((long)pvVar37 + lVar49 * 4) = (float)~(long)pfVar38[lVar49];
                lVar49 = lVar49 + 1;
              } while ((uVar34 & 3) != (uint)lVar49);
            }
          }
          goto LAB_005b73c2;
        }
        if (lStack_60 == 2) {
          if (*(long *)(param_9 + 2) == 0xf) {
            iVar40 = *(int *)(param_7 + 0x28f8);
            if (iVar40 != 0) {
              fVar62 = (float)~(long)local_68._0_4_;
              lVar49 = *(long *)param_9;
              if (6 < iVar40 - 1U) {
                uVar44 = (ulong)(iVar40 - 1U) + 1;
                uVar52 = uVar44 & 0xfffffffffffffff8;
                uVar54 = (uVar52 - 8 >> 3) + 1;
                uVar57 = (ulong)((uint)uVar54 & 7);
                if (uVar52 - 8 < 0x38) {
                  lVar45 = 0;
                }
                else {
                  uVar54 = uVar54 & 0xfffffffffffffff8;
                  lVar45 = 0;
                  do {
                    pfVar38 = (float *)(lVar49 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    lVar45 = lVar45 + 0x40;
                    uVar54 = uVar54 - 8;
                  } while (uVar54 != 0);
                }
                if (uVar57 != 0) {
                  lVar45 = lVar49 + lVar45 * 4;
                  lVar48 = 0;
                  do {
                    pfVar38 = (float *)(lVar45 + lVar48);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    lVar48 = lVar48 + 0x20;
                  } while (uVar57 * 0x20 != lVar48);
                }
                if (uVar44 == uVar52) goto LAB_005b73c2;
                iVar40 = iVar40 - (int)uVar52;
                lVar49 = lVar49 + uVar52 * 4;
              }
              lVar45 = 0;
              do {
                *(float *)(lVar49 + lVar45 * 4) = fVar62;
                lVar45 = lVar45 + 1;
              } while (iVar40 != (int)lVar45);
            }
          }
          else {
            param_9[2] = 2.8026e-45;
            param_9[3] = 0.0;
            *param_9 = (float)~(long)local_68._0_4_;
          }
          goto LAB_005b73c2;
        }
        if (lStack_60 == 1) {
          if (*(long *)(param_9 + 2) == 0xf) {
            iVar40 = *(int *)(param_7 + 0x28f8);
            if (iVar40 != 0) {
              fVar62 = (float)(long)~(ulong)local_68;
              lVar49 = *(long *)param_9;
              if (6 < iVar40 - 1U) {
                uVar44 = (ulong)(iVar40 - 1U) + 1;
                uVar52 = uVar44 & 0xfffffffffffffff8;
                uVar54 = (uVar52 - 8 >> 3) + 1;
                uVar57 = (ulong)((uint)uVar54 & 7);
                if (uVar52 - 8 < 0x38) {
                  lVar45 = 0;
                }
                else {
                  uVar54 = uVar54 & 0xfffffffffffffff8;
                  lVar45 = 0;
                  do {
                    pfVar38 = (float *)(lVar49 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    lVar45 = lVar45 + 0x40;
                    uVar54 = uVar54 - 8;
                  } while (uVar54 != 0);
                }
                if (uVar57 != 0) {
                  lVar45 = lVar49 + lVar45 * 4;
                  lVar48 = 0;
                  do {
                    pfVar38 = (float *)(lVar45 + lVar48);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    lVar48 = lVar48 + 0x20;
                  } while (uVar57 * 0x20 != lVar48);
                }
                if (uVar44 == uVar52) goto LAB_005b73c2;
                iVar40 = iVar40 - (int)uVar52;
                lVar49 = lVar49 + uVar52 * 4;
              }
              lVar45 = 0;
              do {
                *(float *)(lVar49 + lVar45 * 4) = fVar62;
                lVar45 = lVar45 + 1;
              } while (iVar40 != (int)lVar45);
            }
          }
          else {
            param_9[2] = 1.4013e-45;
            param_9[3] = 0.0;
            *(ulong *)param_9 = ~(ulong)local_68;
          }
          goto LAB_005b73c2;
        }
        pcVar55 = "expr: ex_eval(%d): bad left type %ld\n";
        puVar36 = (ulong *)0x0;
        uVar46 = 0x527;
        lVar49 = lStack_60;
      }
      else {
        if (uVar57 != 0xe0017) goto code_r0x005b4c3c;
        puVar36 = ex_eval(0,param_2,param_3,param_4,param_5,param_6,param_7,puVar36,
                          (float *)&local_68,puVar51,param_11,param_12);
        uVar236 = in_XMM3._0_8_;
        uVar63 = in_XMM2._0_8_;
        if (lStack_60 - 0xeU < 2) {
          if (*(long *)(param_9 + 2) == 0xf) {
            pfVar38 = *(float **)param_9;
          }
          else {
            param_9[2] = 2.10195e-44;
            param_9[3] = 0.0;
            pfVar38 = malloc((long)*(int *)(param_7 + 0x28f8) << 2);
            *(float **)param_9 = pfVar38;
          }
          uVar7 = _UNK_0065257c;
          uVar56 = _UNK_00652578;
          uVar50 = _UNK_00652574;
          uVar43 = _DAT_00652570;
          uVar34 = *(uint *)(param_7 + 0x28f8);
          if (0 < (int)uVar34) {
            uVar57 = (ulong)(uVar34 - 1);
            uVar44 = 0;
            pfVar47 = local_68;
            if ((6 < uVar34 - 1) &&
               ((local_68 + uVar57 + 1 <= pfVar38 || (pfVar38 + uVar57 + 1 <= local_68)))) {
              uVar44 = uVar57 + 1 & 0xfffffffffffffff8;
              uVar52 = (uVar44 - 8 >> 3) + 1;
              if (uVar44 - 8 == 0) {
                lVar49 = 0;
              }
              else {
                uVar54 = uVar52 & 0x3ffffffffffffffe;
                lVar49 = 0;
                do {
                  pfVar47 = local_68 + lVar49;
                  fVar62 = pfVar47[1];
                  fVar232 = pfVar47[2];
                  fVar233 = pfVar47[3];
                  pfVar53 = local_68 + lVar49 + 4;
                  fVar234 = *pfVar53;
                  fVar235 = pfVar53[1];
                  fVar264 = pfVar53[2];
                  fVar265 = pfVar53[3];
                  pfVar53 = pfVar38 + lVar49;
                  *pfVar53 = (float)(-(uint)(*pfVar47 == 0.0) & uVar43);
                  pfVar53[1] = (float)(-(uint)(fVar62 == 0.0) & uVar50);
                  pfVar53[2] = (float)(-(uint)(fVar232 == 0.0) & uVar56);
                  pfVar53[3] = (float)(-(uint)(fVar233 == 0.0) & uVar7);
                  pfVar47 = pfVar38 + lVar49 + 4;
                  *pfVar47 = (float)(-(uint)(fVar234 == 0.0) & uVar43);
                  pfVar47[1] = (float)(-(uint)(fVar235 == 0.0) & uVar50);
                  pfVar47[2] = (float)(-(uint)(fVar264 == 0.0) & uVar56);
                  pfVar47[3] = (float)(-(uint)(fVar265 == 0.0) & uVar7);
                  pfVar47 = local_68 + lVar49 + 8;
                  fVar62 = pfVar47[1];
                  fVar232 = pfVar47[2];
                  fVar233 = pfVar47[3];
                  pfVar53 = local_68 + lVar49 + 0xc;
                  fVar234 = *pfVar53;
                  fVar235 = pfVar53[1];
                  fVar264 = pfVar53[2];
                  fVar265 = pfVar53[3];
                  pfVar53 = pfVar38 + lVar49 + 8;
                  *pfVar53 = (float)(-(uint)(*pfVar47 == 0.0) & uVar43);
                  pfVar53[1] = (float)(-(uint)(fVar62 == 0.0) & uVar50);
                  pfVar53[2] = (float)(-(uint)(fVar232 == 0.0) & uVar56);
                  pfVar53[3] = (float)(-(uint)(fVar233 == 0.0) & uVar7);
                  pfVar47 = pfVar38 + lVar49 + 0xc;
                  *pfVar47 = (float)(-(uint)(fVar234 == 0.0) & uVar43);
                  pfVar47[1] = (float)(-(uint)(fVar235 == 0.0) & uVar50);
                  pfVar47[2] = (float)(-(uint)(fVar264 == 0.0) & uVar56);
                  pfVar47[3] = (float)(-(uint)(fVar265 == 0.0) & uVar7);
                  lVar49 = lVar49 + 0x10;
                  uVar54 = uVar54 - 2;
                } while (uVar54 != 0);
              }
              if ((uVar52 & 1) != 0) {
                pfVar47 = local_68 + lVar49;
                pfVar53 = local_68 + lVar49 + 4;
                fVar62 = (float)(-(uint)(pfVar47[1] == 0.0) & _UNK_00652574);
                fVar232 = (float)(-(uint)(pfVar47[2] == 0.0) & _UNK_00652578);
                fVar233 = (float)(-(uint)(pfVar47[3] == 0.0) & _UNK_0065257c);
                fVar234 = (float)(-(uint)(*pfVar53 == 0.0) & _DAT_00652570);
                fVar235 = (float)(-(uint)(pfVar53[1] == 0.0) & _UNK_00652574);
                fVar264 = (float)(-(uint)(pfVar53[2] == 0.0) & _UNK_00652578);
                fVar265 = (float)(-(uint)(pfVar53[3] == 0.0) & _UNK_0065257c);
                pfVar53 = pfVar38 + lVar49;
                *pfVar53 = (float)(-(uint)(*pfVar47 == 0.0) & _DAT_00652570);
                pfVar53[1] = fVar62;
                pfVar53[2] = fVar232;
                pfVar53[3] = fVar233;
                pfVar47 = pfVar38 + lVar49 + 4;
                *pfVar47 = fVar234;
                pfVar47[1] = fVar235;
                pfVar47[2] = fVar264;
                pfVar47[3] = fVar265;
              }
              if (uVar57 + 1 == uVar44) goto LAB_005b73c2;
              pfVar38 = pfVar38 + uVar44;
              pfVar47 = local_68 + uVar44;
            }
            fVar62 = DAT_005d9038;
            uVar43 = (uint)uVar44;
            uVar50 = ~uVar43;
            if ((uVar34 & 3) != 0) {
              iVar40 = 0;
              do {
                fVar232 = *pfVar47;
                pfVar47 = pfVar47 + 1;
                *pfVar38 = (float)(-(uint)(fVar232 == 0.0) & (uint)fVar62);
                pfVar38 = pfVar38 + 1;
                iVar40 = iVar40 + -1;
              } while (-(uVar34 & 3) != iVar40);
              uVar43 = uVar43 - iVar40;
            }
            fVar62 = DAT_005d9038;
            if (2 < uVar50 + uVar34) {
              lVar49 = 0;
              do {
                pfVar38[lVar49] = (float)(-(uint)(pfVar47[lVar49] == 0.0) & (uint)fVar62);
                pfVar38[lVar49 + 1] = (float)(-(uint)(pfVar47[lVar49 + 1] == 0.0) & (uint)fVar62);
                pfVar38[lVar49 + 2] = (float)(-(uint)(pfVar47[lVar49 + 2] == 0.0) & (uint)fVar62);
                pfVar38[lVar49 + 3] = (float)(-(uint)(pfVar47[lVar49 + 3] == 0.0) & (uint)fVar62);
                lVar49 = lVar49 + 4;
              } while (uVar34 - uVar43 != (int)lVar49);
            }
          }
          goto LAB_005b73c2;
        }
        if (lStack_60 == 2) {
          if (*(long *)(param_9 + 2) == 0xf) {
            iVar40 = *(int *)(param_7 + 0x28f8);
            if (iVar40 != 0) {
              uVar34 = (uint)DAT_005d9038 & -(uint)(local_68._0_4_ == 0.0);
              lVar49 = *(long *)param_9;
              if (6 < iVar40 - 1U) {
                uVar44 = (ulong)(iVar40 - 1U) + 1;
                uVar52 = uVar44 & 0xfffffffffffffff8;
                uVar54 = (uVar52 - 8 >> 3) + 1;
                uVar57 = (ulong)((uint)uVar54 & 7);
                if (uVar52 - 8 < 0x38) {
                  lVar45 = 0;
                }
                else {
                  uVar54 = uVar54 & 0xfffffffffffffff8;
                  lVar45 = 0;
                  do {
                    puVar4 = (uint *)(lVar49 + lVar45 * 4);
                    *puVar4 = uVar34;
                    puVar4[1] = uVar34;
                    puVar4[2] = uVar34;
                    puVar4[3] = uVar34;
                    puVar4 = (uint *)(lVar49 + 0x10 + lVar45 * 4);
                    *puVar4 = uVar34;
                    puVar4[1] = uVar34;
                    puVar4[2] = uVar34;
                    puVar4[3] = uVar34;
                    puVar4 = (uint *)(lVar49 + 0x20 + lVar45 * 4);
                    *puVar4 = uVar34;
                    puVar4[1] = uVar34;
                    puVar4[2] = uVar34;
                    puVar4[3] = uVar34;
                    puVar4 = (uint *)(lVar49 + 0x30 + lVar45 * 4);
                    *puVar4 = uVar34;
                    puVar4[1] = uVar34;
                    puVar4[2] = uVar34;
                    puVar4[3] = uVar34;
                    puVar4 = (uint *)(lVar49 + 0x40 + lVar45 * 4);
                    *puVar4 = uVar34;
                    puVar4[1] = uVar34;
                    puVar4[2] = uVar34;
                    puVar4[3] = uVar34;
                    puVar4 = (uint *)(lVar49 + 0x50 + lVar45 * 4);
                    *puVar4 = uVar34;
                    puVar4[1] = uVar34;
                    puVar4[2] = uVar34;
                    puVar4[3] = uVar34;
                    puVar4 = (uint *)(lVar49 + 0x60 + lVar45 * 4);
                    *puVar4 = uVar34;
                    puVar4[1] = uVar34;
                    puVar4[2] = uVar34;
                    puVar4[3] = uVar34;
                    puVar4 = (uint *)(lVar49 + 0x70 + lVar45 * 4);
                    *puVar4 = uVar34;
                    puVar4[1] = uVar34;
                    puVar4[2] = uVar34;
                    puVar4[3] = uVar34;
                    puVar4 = (uint *)(lVar49 + 0x80 + lVar45 * 4);
                    *puVar4 = uVar34;
                    puVar4[1] = uVar34;
                    puVar4[2] = uVar34;
                    puVar4[3] = uVar34;
                    puVar4 = (uint *)(lVar49 + 0x90 + lVar45 * 4);
                    *puVar4 = uVar34;
                    puVar4[1] = uVar34;
                    puVar4[2] = uVar34;
                    puVar4[3] = uVar34;
                    puVar4 = (uint *)(lVar49 + 0xa0 + lVar45 * 4);
                    *puVar4 = uVar34;
                    puVar4[1] = uVar34;
                    puVar4[2] = uVar34;
                    puVar4[3] = uVar34;
                    puVar4 = (uint *)(lVar49 + 0xb0 + lVar45 * 4);
                    *puVar4 = uVar34;
                    puVar4[1] = uVar34;
                    puVar4[2] = uVar34;
                    puVar4[3] = uVar34;
                    puVar4 = (uint *)(lVar49 + 0xc0 + lVar45 * 4);
                    *puVar4 = uVar34;
                    puVar4[1] = uVar34;
                    puVar4[2] = uVar34;
                    puVar4[3] = uVar34;
                    puVar4 = (uint *)(lVar49 + 0xd0 + lVar45 * 4);
                    *puVar4 = uVar34;
                    puVar4[1] = uVar34;
                    puVar4[2] = uVar34;
                    puVar4[3] = uVar34;
                    puVar4 = (uint *)(lVar49 + 0xe0 + lVar45 * 4);
                    *puVar4 = uVar34;
                    puVar4[1] = uVar34;
                    puVar4[2] = uVar34;
                    puVar4[3] = uVar34;
                    puVar4 = (uint *)(lVar49 + 0xf0 + lVar45 * 4);
                    *puVar4 = uVar34;
                    puVar4[1] = uVar34;
                    puVar4[2] = uVar34;
                    puVar4[3] = uVar34;
                    lVar45 = lVar45 + 0x40;
                    uVar54 = uVar54 - 8;
                  } while (uVar54 != 0);
                }
                if (uVar57 != 0) {
                  lVar45 = lVar49 + lVar45 * 4;
                  lVar48 = 0;
                  do {
                    puVar4 = (uint *)(lVar45 + lVar48);
                    *puVar4 = uVar34;
                    puVar4[1] = uVar34;
                    puVar4[2] = uVar34;
                    puVar4[3] = uVar34;
                    puVar4 = (uint *)(lVar45 + 0x10 + lVar48);
                    *puVar4 = uVar34;
                    puVar4[1] = uVar34;
                    puVar4[2] = uVar34;
                    puVar4[3] = uVar34;
                    lVar48 = lVar48 + 0x20;
                  } while (uVar57 * 0x20 != lVar48);
                }
                if (uVar44 == uVar52) goto LAB_005b73c2;
                iVar40 = iVar40 - (int)uVar52;
                lVar49 = lVar49 + uVar52 * 4;
              }
              lVar45 = 0;
              do {
                *(uint *)(lVar49 + lVar45 * 4) = uVar34;
                lVar45 = lVar45 + 1;
              } while (iVar40 != (int)lVar45);
            }
            goto LAB_005b73c2;
          }
          param_9[2] = 2.8026e-45;
          param_9[3] = 0.0;
          fVar62 = 0.0;
          goto LAB_005b844f;
        }
        if (lStack_60 == 1) {
          if (*(long *)(param_9 + 2) == 0xf) {
            if (local_68 == (float *)0x0) {
              fVar62 = DAT_005d9038;
            }
            else {
              fVar62 = 0.0;
            }
            iVar40 = *(int *)(param_7 + 0x28f8);
            if (iVar40 != 0) {
              lVar49 = *(long *)param_9;
              if (6 < iVar40 - 1U) {
                uVar44 = (ulong)(iVar40 - 1U) + 1;
                uVar52 = uVar44 & 0xfffffffffffffff8;
                uVar54 = (uVar52 - 8 >> 3) + 1;
                uVar57 = (ulong)((uint)uVar54 & 7);
                if (uVar52 - 8 < 0x38) {
                  lVar45 = 0;
                }
                else {
                  uVar54 = uVar54 & 0xfffffffffffffff8;
                  lVar45 = 0;
                  do {
                    pfVar38 = (float *)(lVar49 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    lVar45 = lVar45 + 0x40;
                    uVar54 = uVar54 - 8;
                  } while (uVar54 != 0);
                }
                if (uVar57 != 0) {
                  lVar45 = lVar49 + lVar45 * 4;
                  lVar48 = 0;
                  do {
                    pfVar38 = (float *)(lVar45 + lVar48);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    lVar48 = lVar48 + 0x20;
                  } while (uVar57 * 0x20 != lVar48);
                }
                if (uVar44 == uVar52) goto LAB_005b73c2;
                iVar40 = iVar40 - (int)uVar52;
                lVar49 = lVar49 + uVar52 * 4;
              }
              lVar45 = 0;
              do {
                *(float *)(lVar49 + lVar45 * 4) = fVar62;
                lVar45 = lVar45 + 1;
              } while (iVar40 != (int)lVar45);
            }
          }
          else {
            param_9[2] = 1.4013e-45;
            param_9[3] = 0.0;
            *(ulong *)param_9 = (ulong)(local_68 == (float *)0x0);
          }
          goto LAB_005b73c2;
        }
        pcVar55 = "expr: ex_eval(%d): bad left type %ld\n";
        puVar36 = (ulong *)0x0;
        uVar46 = 0x525;
        lVar49 = lStack_60;
        uVar44 = extraout_XMM0_Qa_02;
      }
LAB_005b73bb:
      pd_error(uVar44,param_2,uVar63,uVar236,param_3,param_4,param_5,param_6,param_7,pcVar55,uVar46,
               lVar49,param_11,param_12);
      goto LAB_005b73c2;
    }
    if (0x90007 < (long)uVar57) {
      if (uVar57 - 0xa000a < 4) {
                    /* WARNING: Divide by 0 */
                    /* WARNING: Treating indirect jump as call */
        puVar36 = (ulong *)(*(code *)(&UNK_0065f118 +
                                     *(int *)(&UNK_0065f118 + (uVar57 - 0xa000a) * 4)))();
        return puVar36;
      }
      if (uVar57 != 0x90008) {
        if (uVar57 != 0x90009) {
code_r0x005b4c3c:
          pd_error(0,param_2,uVar63,uVar236,param_3,param_4,param_5,param_6,param_7,
                   "expr: \'%s\' - bad op 0x%x\n",*(undefined8 *)(param_7 + 0x40),
                   (ulong)(uint)*puVar36,param_11,param_12);
          return (ulong *)0x0;
        }
        puVar36 = ex_eval(0,param_2,param_3,param_4,param_5,param_6,param_7,puVar36,
                          (float *)&local_68,(undefined *)((ulong)param_10 & 0xffffffff),param_11,
                          param_12);
        puVar36 = ex_eval(extraout_XMM0_Qa_04,param_2,param_3,param_4,param_5,param_6,param_7,
                          puVar36,(float *)&local_88,(undefined *)((ulong)param_10 & 0xffffffff),
                          param_11,param_12);
        uVar236 = in_XMM3._0_8_;
        uVar63 = in_XMM2._0_8_;
        uVar44 = extraout_XMM0_01._0_8_;
        if (lStack_60 - 0xeU < 2) {
          if (*(long *)(param_9 + 2) == 0xf) {
            pfVar38 = *(float **)param_9;
          }
          else {
            if (*(long *)(param_9 + 2) == 0xe) goto LAB_005c5996;
            param_9[2] = 2.10195e-44;
            param_9[3] = 0.0;
            pfVar38 = malloc((long)*(int *)(param_7 + 0x28f8) << 2);
            uVar63 = in_XMM2._0_8_;
            uVar236 = in_XMM3._0_8_;
            *(float **)param_9 = pfVar38;
            uVar44 = extraout_XMM0_Qa_26;
          }
          uVar56 = _UNK_0065257c;
          uVar50 = _UNK_00652578;
          uVar43 = _UNK_00652574;
          uVar34 = _DAT_00652570;
          if (lStack_80 - 0xeU < 2) {
            uVar7 = *(uint *)(param_7 + 0x28f8);
            if (0 < (int)uVar7) {
              uVar57 = (ulong)(uVar7 - 1);
              uVar44 = 0;
              pfVar53 = local_68;
              pfVar47 = local_88;
              if (6 < uVar7 - 1) {
                if ((local_68 + uVar57 + 1 <= pfVar38 || pfVar38 + uVar57 + 1 <= local_68) &&
                   (local_88 + uVar57 + 1 <= pfVar38 || pfVar38 + uVar57 + 1 <= local_88)) {
                  uVar44 = uVar57 + 1 & 0xfffffffffffffff8;
                  uVar52 = (uVar44 - 8 >> 3) + 1;
                  if (uVar44 - 8 == 0) {
                    lVar49 = 0;
                  }
                  else {
                    uVar54 = uVar52 & 0x3ffffffffffffffe;
                    lVar49 = 0;
                    do {
                      pfVar47 = local_68 + lVar49;
                      fVar62 = pfVar47[1];
                      fVar232 = pfVar47[2];
                      fVar233 = pfVar47[3];
                      pfVar53 = local_68 + lVar49 + 4;
                      fVar234 = *pfVar53;
                      fVar235 = pfVar53[1];
                      fVar264 = pfVar53[2];
                      fVar265 = pfVar53[3];
                      pfVar53 = local_88 + lVar49;
                      fVar266 = pfVar53[1];
                      fVar28 = pfVar53[2];
                      fVar29 = pfVar53[3];
                      pfVar2 = local_88 + lVar49 + 4;
                      fVar30 = *pfVar2;
                      fVar31 = pfVar2[1];
                      fVar32 = pfVar2[2];
                      fVar33 = pfVar2[3];
                      pfVar2 = pfVar38 + lVar49;
                      *pfVar2 = (float)(-(uint)(*pfVar53 == *pfVar47) & uVar34);
                      pfVar2[1] = (float)(-(uint)(fVar266 == fVar62) & uVar43);
                      pfVar2[2] = (float)(-(uint)(fVar28 == fVar232) & uVar50);
                      pfVar2[3] = (float)(-(uint)(fVar29 == fVar233) & uVar56);
                      pfVar47 = pfVar38 + lVar49 + 4;
                      *pfVar47 = (float)(-(uint)(fVar30 == fVar234) & uVar34);
                      pfVar47[1] = (float)(-(uint)(fVar31 == fVar235) & uVar43);
                      pfVar47[2] = (float)(-(uint)(fVar32 == fVar264) & uVar50);
                      pfVar47[3] = (float)(-(uint)(fVar33 == fVar265) & uVar56);
                      pfVar47 = local_68 + lVar49 + 8;
                      fVar62 = pfVar47[1];
                      fVar232 = pfVar47[2];
                      fVar233 = pfVar47[3];
                      pfVar53 = local_68 + lVar49 + 0xc;
                      fVar234 = *pfVar53;
                      fVar235 = pfVar53[1];
                      fVar264 = pfVar53[2];
                      fVar265 = pfVar53[3];
                      pfVar53 = local_88 + lVar49 + 8;
                      fVar266 = pfVar53[1];
                      fVar28 = pfVar53[2];
                      fVar29 = pfVar53[3];
                      pfVar2 = local_88 + lVar49 + 0xc;
                      fVar30 = *pfVar2;
                      fVar31 = pfVar2[1];
                      fVar32 = pfVar2[2];
                      fVar33 = pfVar2[3];
                      pfVar2 = pfVar38 + lVar49 + 8;
                      *pfVar2 = (float)(-(uint)(*pfVar53 == *pfVar47) & uVar34);
                      pfVar2[1] = (float)(-(uint)(fVar266 == fVar62) & uVar43);
                      pfVar2[2] = (float)(-(uint)(fVar28 == fVar232) & uVar50);
                      pfVar2[3] = (float)(-(uint)(fVar29 == fVar233) & uVar56);
                      pfVar47 = pfVar38 + lVar49 + 0xc;
                      *pfVar47 = (float)(-(uint)(fVar30 == fVar234) & uVar34);
                      pfVar47[1] = (float)(-(uint)(fVar31 == fVar235) & uVar43);
                      pfVar47[2] = (float)(-(uint)(fVar32 == fVar264) & uVar50);
                      pfVar47[3] = (float)(-(uint)(fVar33 == fVar265) & uVar56);
                      lVar49 = lVar49 + 0x10;
                      uVar54 = uVar54 - 2;
                    } while (uVar54 != 0);
                  }
                  if ((uVar52 & 1) != 0) {
                    pfVar47 = local_68 + lVar49;
                    pfVar2 = local_68 + lVar49 + 4;
                    pfVar53 = local_88 + lVar49;
                    pfVar3 = local_88 + lVar49 + 4;
                    fVar235 = (float)(-(uint)(pfVar53[1] == pfVar47[1]) & _UNK_00652574);
                    fVar264 = (float)(-(uint)(pfVar53[2] == pfVar47[2]) & _UNK_00652578);
                    fVar265 = (float)(-(uint)(pfVar53[3] == pfVar47[3]) & _UNK_0065257c);
                    fVar62 = (float)(-(uint)(*pfVar3 == *pfVar2) & _DAT_00652570);
                    fVar232 = (float)(-(uint)(pfVar3[1] == pfVar2[1]) & _UNK_00652574);
                    fVar233 = (float)(-(uint)(pfVar3[2] == pfVar2[2]) & _UNK_00652578);
                    fVar234 = (float)(-(uint)(pfVar3[3] == pfVar2[3]) & _UNK_0065257c);
                    pfVar2 = pfVar38 + lVar49;
                    *pfVar2 = (float)(-(uint)(*pfVar53 == *pfVar47) & _DAT_00652570);
                    pfVar2[1] = fVar235;
                    pfVar2[2] = fVar264;
                    pfVar2[3] = fVar265;
                    pfVar47 = pfVar38 + lVar49 + 4;
                    *pfVar47 = fVar62;
                    pfVar47[1] = fVar232;
                    pfVar47[2] = fVar233;
                    pfVar47[3] = fVar234;
                  }
                  if (uVar57 + 1 == uVar44) goto LAB_005b73c2;
                  pfVar38 = pfVar38 + uVar44;
                  pfVar47 = local_88 + uVar44;
                  pfVar53 = local_68 + uVar44;
                }
              }
              fVar62 = DAT_005d9038;
              uVar43 = (uint)uVar44;
              uVar34 = ~uVar43;
              if ((uVar7 & 3) != 0) {
                iVar40 = 0;
                do {
                  *pfVar38 = (float)(-(uint)(*pfVar47 == *pfVar53) & (uint)fVar62);
                  pfVar38 = pfVar38 + 1;
                  pfVar47 = pfVar47 + 1;
                  pfVar53 = pfVar53 + 1;
                  iVar40 = iVar40 + -1;
                } while (-(uVar7 & 3) != iVar40);
                uVar43 = uVar43 - iVar40;
              }
              fVar62 = DAT_005d9038;
              if (2 < uVar34 + uVar7) {
                lVar49 = 0;
                do {
                  pfVar38[lVar49] =
                       (float)(-(uint)(pfVar47[lVar49] == pfVar53[lVar49]) & (uint)fVar62);
                  pfVar38[lVar49 + 1] =
                       (float)(-(uint)(pfVar47[lVar49 + 1] == pfVar53[lVar49 + 1]) & (uint)fVar62);
                  pfVar38[lVar49 + 2] =
                       (float)(-(uint)(pfVar47[lVar49 + 2] == pfVar53[lVar49 + 2]) & (uint)fVar62);
                  pfVar38[lVar49 + 3] =
                       (float)(-(uint)(pfVar47[lVar49 + 3] == pfVar53[lVar49 + 3]) & (uint)fVar62);
                  lVar49 = lVar49 + 4;
                } while (uVar7 - uVar43 != (int)lVar49);
              }
            }
            goto LAB_005b73c2;
          }
          if (lStack_80 == 2) {
            uVar7 = *(uint *)(param_7 + 0x28f8);
            if (0 < (int)uVar7) {
              uVar57 = (ulong)(uVar7 - 1);
              uVar44 = 0;
              pfVar47 = local_68;
              if ((6 < uVar7 - 1) &&
                 ((local_68 + uVar57 + 1 <= pfVar38 || (pfVar38 + uVar57 + 1 <= local_68)))) {
                uVar44 = uVar57 + 1 & 0xfffffffffffffff8;
                uVar52 = (uVar44 - 8 >> 3) + 1;
                if (uVar44 - 8 == 0) {
                  lVar49 = 0;
                }
                else {
                  uVar54 = uVar52 & 0x3ffffffffffffffe;
                  lVar49 = 0;
                  do {
                    pfVar47 = local_68 + lVar49;
                    fVar62 = pfVar47[1];
                    fVar232 = pfVar47[2];
                    fVar233 = pfVar47[3];
                    pfVar53 = local_68 + lVar49 + 4;
                    fVar234 = *pfVar53;
                    fVar235 = pfVar53[1];
                    fVar264 = pfVar53[2];
                    fVar265 = pfVar53[3];
                    pfVar53 = pfVar38 + lVar49;
                    *pfVar53 = (float)(-(uint)(*pfVar47 == local_88._0_4_) & uVar34);
                    pfVar53[1] = (float)(-(uint)(fVar62 == local_88._0_4_) & uVar43);
                    pfVar53[2] = (float)(-(uint)(fVar232 == local_88._0_4_) & uVar50);
                    pfVar53[3] = (float)(-(uint)(fVar233 == local_88._0_4_) & uVar56);
                    pfVar47 = pfVar38 + lVar49 + 4;
                    *pfVar47 = (float)(-(uint)(fVar234 == local_88._0_4_) & uVar34);
                    pfVar47[1] = (float)(-(uint)(fVar235 == local_88._0_4_) & uVar43);
                    pfVar47[2] = (float)(-(uint)(fVar264 == local_88._0_4_) & uVar50);
                    pfVar47[3] = (float)(-(uint)(fVar265 == local_88._0_4_) & uVar56);
                    pfVar47 = local_68 + lVar49 + 8;
                    fVar62 = pfVar47[1];
                    fVar232 = pfVar47[2];
                    fVar233 = pfVar47[3];
                    pfVar53 = local_68 + lVar49 + 0xc;
                    fVar234 = *pfVar53;
                    fVar235 = pfVar53[1];
                    fVar264 = pfVar53[2];
                    fVar265 = pfVar53[3];
                    pfVar53 = pfVar38 + lVar49 + 8;
                    *pfVar53 = (float)(-(uint)(*pfVar47 == local_88._0_4_) & uVar34);
                    pfVar53[1] = (float)(-(uint)(fVar62 == local_88._0_4_) & uVar43);
                    pfVar53[2] = (float)(-(uint)(fVar232 == local_88._0_4_) & uVar50);
                    pfVar53[3] = (float)(-(uint)(fVar233 == local_88._0_4_) & uVar56);
                    pfVar47 = pfVar38 + lVar49 + 0xc;
                    *pfVar47 = (float)(-(uint)(fVar234 == local_88._0_4_) & uVar34);
                    pfVar47[1] = (float)(-(uint)(fVar235 == local_88._0_4_) & uVar43);
                    pfVar47[2] = (float)(-(uint)(fVar264 == local_88._0_4_) & uVar50);
                    pfVar47[3] = (float)(-(uint)(fVar265 == local_88._0_4_) & uVar56);
                    lVar49 = lVar49 + 0x10;
                    uVar54 = uVar54 - 2;
                  } while (uVar54 != 0);
                }
                if ((uVar52 & 1) != 0) {
                  pfVar47 = local_68 + lVar49;
                  pfVar53 = local_68 + lVar49 + 4;
                  fVar62 = (float)(-(uint)(pfVar47[1] == local_88._0_4_) & _UNK_00652574);
                  fVar232 = (float)(-(uint)(pfVar47[2] == local_88._0_4_) & _UNK_00652578);
                  fVar233 = (float)(-(uint)(pfVar47[3] == local_88._0_4_) & _UNK_0065257c);
                  fVar234 = (float)(-(uint)(*pfVar53 == local_88._0_4_) & _DAT_00652570);
                  fVar235 = (float)(-(uint)(pfVar53[1] == local_88._0_4_) & _UNK_00652574);
                  fVar264 = (float)(-(uint)(pfVar53[2] == local_88._0_4_) & _UNK_00652578);
                  fVar265 = (float)(-(uint)(pfVar53[3] == local_88._0_4_) & _UNK_0065257c);
                  pfVar53 = pfVar38 + lVar49;
                  *pfVar53 = (float)(-(uint)(*pfVar47 == local_88._0_4_) & _DAT_00652570);
                  pfVar53[1] = fVar62;
                  pfVar53[2] = fVar232;
                  pfVar53[3] = fVar233;
                  pfVar47 = pfVar38 + lVar49 + 4;
                  *pfVar47 = fVar234;
                  pfVar47[1] = fVar235;
                  pfVar47[2] = fVar264;
                  pfVar47[3] = fVar265;
                }
                if (uVar57 + 1 == uVar44) goto LAB_005b73c2;
                pfVar38 = pfVar38 + uVar44;
                pfVar47 = local_68 + uVar44;
              }
              fVar62 = DAT_005d9038;
              uVar34 = (uint)uVar44;
              uVar43 = ~uVar34;
              if ((uVar7 & 3) != 0) {
                iVar40 = 0;
                do {
                  *pfVar38 = (float)(-(uint)(*pfVar47 == local_88._0_4_) & (uint)fVar62);
                  pfVar38 = pfVar38 + 1;
                  pfVar47 = pfVar47 + 1;
                  iVar40 = iVar40 + -1;
                } while (-(uVar7 & 3) != iVar40);
                uVar34 = uVar34 - iVar40;
              }
              fVar62 = DAT_005d9038;
              if (2 < uVar43 + uVar7) {
                lVar49 = 0;
                do {
                  pfVar38[lVar49] =
                       (float)(-(uint)(pfVar47[lVar49] == local_88._0_4_) & (uint)fVar62);
                  pfVar38[lVar49 + 1] =
                       (float)(-(uint)(pfVar47[lVar49 + 1] == local_88._0_4_) & (uint)fVar62);
                  pfVar38[lVar49 + 2] =
                       (float)(-(uint)(pfVar47[lVar49 + 2] == local_88._0_4_) & (uint)fVar62);
                  pfVar38[lVar49 + 3] =
                       (float)(-(uint)(pfVar47[lVar49 + 3] == local_88._0_4_) & (uint)fVar62);
                  lVar49 = lVar49 + 4;
                } while (uVar7 - uVar34 != (int)lVar49);
              }
            }
            goto LAB_005b73c2;
          }
          if (lStack_80 == 1) {
            uVar7 = *(uint *)(param_7 + 0x28f8);
            if (0 < (int)uVar7) {
              fVar62 = (float)(long)local_88;
              uVar57 = (ulong)(uVar7 - 1);
              uVar44 = 0;
              pfVar47 = local_68;
              if ((6 < uVar7 - 1) &&
                 ((local_68 + uVar57 + 1 <= pfVar38 || (pfVar38 + uVar57 + 1 <= local_68)))) {
                uVar44 = uVar57 + 1 & 0xfffffffffffffff8;
                uVar52 = (uVar44 - 8 >> 3) + 1;
                if (uVar44 - 8 == 0) {
                  lVar49 = 0;
                }
                else {
                  uVar54 = uVar52 & 0x3ffffffffffffffe;
                  lVar49 = 0;
                  do {
                    pfVar47 = local_68 + lVar49;
                    fVar232 = pfVar47[1];
                    fVar233 = pfVar47[2];
                    fVar234 = pfVar47[3];
                    pfVar53 = local_68 + lVar49 + 4;
                    fVar235 = *pfVar53;
                    fVar264 = pfVar53[1];
                    fVar265 = pfVar53[2];
                    fVar266 = pfVar53[3];
                    pfVar53 = pfVar38 + lVar49;
                    *pfVar53 = (float)(-(uint)(*pfVar47 == fVar62) & uVar34);
                    pfVar53[1] = (float)(-(uint)(fVar232 == fVar62) & uVar43);
                    pfVar53[2] = (float)(-(uint)(fVar233 == fVar62) & uVar50);
                    pfVar53[3] = (float)(-(uint)(fVar234 == fVar62) & uVar56);
                    pfVar47 = pfVar38 + lVar49 + 4;
                    *pfVar47 = (float)(-(uint)(fVar235 == fVar62) & uVar34);
                    pfVar47[1] = (float)(-(uint)(fVar264 == fVar62) & uVar43);
                    pfVar47[2] = (float)(-(uint)(fVar265 == fVar62) & uVar50);
                    pfVar47[3] = (float)(-(uint)(fVar266 == fVar62) & uVar56);
                    pfVar47 = local_68 + lVar49 + 8;
                    fVar232 = pfVar47[1];
                    fVar233 = pfVar47[2];
                    fVar234 = pfVar47[3];
                    pfVar53 = local_68 + lVar49 + 0xc;
                    fVar235 = *pfVar53;
                    fVar264 = pfVar53[1];
                    fVar265 = pfVar53[2];
                    fVar266 = pfVar53[3];
                    pfVar53 = pfVar38 + lVar49 + 8;
                    *pfVar53 = (float)(-(uint)(*pfVar47 == fVar62) & uVar34);
                    pfVar53[1] = (float)(-(uint)(fVar232 == fVar62) & uVar43);
                    pfVar53[2] = (float)(-(uint)(fVar233 == fVar62) & uVar50);
                    pfVar53[3] = (float)(-(uint)(fVar234 == fVar62) & uVar56);
                    pfVar47 = pfVar38 + lVar49 + 0xc;
                    *pfVar47 = (float)(-(uint)(fVar235 == fVar62) & uVar34);
                    pfVar47[1] = (float)(-(uint)(fVar264 == fVar62) & uVar43);
                    pfVar47[2] = (float)(-(uint)(fVar265 == fVar62) & uVar50);
                    pfVar47[3] = (float)(-(uint)(fVar266 == fVar62) & uVar56);
                    lVar49 = lVar49 + 0x10;
                    uVar54 = uVar54 - 2;
                  } while (uVar54 != 0);
                }
                if ((uVar52 & 1) != 0) {
                  pfVar47 = local_68 + lVar49;
                  pfVar53 = local_68 + lVar49 + 4;
                  fVar232 = (float)(-(uint)(pfVar47[1] == fVar62) & _UNK_00652574);
                  fVar233 = (float)(-(uint)(pfVar47[2] == fVar62) & _UNK_00652578);
                  fVar234 = (float)(-(uint)(pfVar47[3] == fVar62) & _UNK_0065257c);
                  fVar235 = (float)(-(uint)(*pfVar53 == fVar62) & _DAT_00652570);
                  fVar264 = (float)(-(uint)(pfVar53[1] == fVar62) & _UNK_00652574);
                  fVar265 = (float)(-(uint)(pfVar53[2] == fVar62) & _UNK_00652578);
                  fVar266 = (float)(-(uint)(pfVar53[3] == fVar62) & _UNK_0065257c);
                  pfVar53 = pfVar38 + lVar49;
                  *pfVar53 = (float)(-(uint)(*pfVar47 == fVar62) & _DAT_00652570);
                  pfVar53[1] = fVar232;
                  pfVar53[2] = fVar233;
                  pfVar53[3] = fVar234;
                  pfVar47 = pfVar38 + lVar49 + 4;
                  *pfVar47 = fVar235;
                  pfVar47[1] = fVar264;
                  pfVar47[2] = fVar265;
                  pfVar47[3] = fVar266;
                }
                if (uVar57 + 1 == uVar44) goto LAB_005b73c2;
                pfVar38 = pfVar38 + uVar44;
                pfVar47 = local_68 + uVar44;
              }
              fVar232 = DAT_005d9038;
              uVar34 = (uint)uVar44;
              uVar43 = ~uVar34;
              if ((uVar7 & 3) != 0) {
                iVar40 = 0;
                do {
                  *pfVar38 = (float)(-(uint)(*pfVar47 == fVar62) & (uint)fVar232);
                  pfVar38 = pfVar38 + 1;
                  pfVar47 = pfVar47 + 1;
                  iVar40 = iVar40 + -1;
                } while (-(uVar7 & 3) != iVar40);
                uVar34 = uVar34 - iVar40;
              }
              fVar232 = DAT_005d9038;
              if (2 < uVar43 + uVar7) {
                lVar49 = 0;
                do {
                  pfVar38[lVar49] = (float)(-(uint)(pfVar47[lVar49] == fVar62) & (uint)fVar232);
                  pfVar38[lVar49 + 1] =
                       (float)(-(uint)(pfVar47[lVar49 + 1] == fVar62) & (uint)fVar232);
                  pfVar38[lVar49 + 2] =
                       (float)(-(uint)(pfVar47[lVar49 + 2] == fVar62) & (uint)fVar232);
                  pfVar38[lVar49 + 3] =
                       (float)(-(uint)(pfVar47[lVar49 + 3] == fVar62) & (uint)fVar232);
                  lVar49 = lVar49 + 4;
                } while (uVar7 - uVar34 != (int)lVar49);
              }
            }
            goto LAB_005b73c2;
          }
LAB_005b7359:
          pcVar55 = "expr: ex_eval(%d): bad right type %ld\n";
          puVar36 = (ulong *)0x0;
          lVar49 = lStack_80;
        }
        else {
          if (lStack_60 == 2) {
            if (lStack_80 - 0xeU < 2) {
              if (*(long *)(param_9 + 2) == 0xf) {
                pfVar38 = *(float **)param_9;
              }
              else {
                if (*(long *)(param_9 + 2) == 0xe) goto LAB_005c5996;
                param_9[2] = 2.10195e-44;
                param_9[3] = 0.0;
                pfVar38 = malloc((long)*(int *)(param_7 + 0x28f8) << 2);
                *(float **)param_9 = pfVar38;
              }
              uVar7 = _UNK_0065257c;
              uVar56 = _UNK_00652578;
              uVar50 = _UNK_00652574;
              uVar43 = _DAT_00652570;
              uVar34 = *(uint *)(param_7 + 0x28f8);
              if (0 < (int)uVar34) {
                uVar57 = (ulong)(uVar34 - 1);
                uVar44 = 0;
                pfVar47 = local_88;
                if ((6 < uVar34 - 1) &&
                   ((local_88 + uVar57 + 1 <= pfVar38 || (pfVar38 + uVar57 + 1 <= local_88)))) {
                  uVar44 = uVar57 + 1 & 0xfffffffffffffff8;
                  uVar52 = (uVar44 - 8 >> 3) + 1;
                  if (uVar44 - 8 == 0) {
                    lVar49 = 0;
                  }
                  else {
                    uVar54 = uVar52 & 0x3ffffffffffffffe;
                    lVar49 = 0;
                    do {
                      pfVar47 = local_88 + lVar49;
                      fVar62 = pfVar47[1];
                      fVar232 = pfVar47[2];
                      fVar233 = pfVar47[3];
                      pfVar53 = local_88 + lVar49 + 4;
                      fVar234 = *pfVar53;
                      fVar235 = pfVar53[1];
                      fVar264 = pfVar53[2];
                      fVar265 = pfVar53[3];
                      pfVar53 = pfVar38 + lVar49;
                      *pfVar53 = (float)(-(uint)(*pfVar47 == local_68._0_4_) & uVar43);
                      pfVar53[1] = (float)(-(uint)(fVar62 == local_68._0_4_) & uVar50);
                      pfVar53[2] = (float)(-(uint)(fVar232 == local_68._0_4_) & uVar56);
                      pfVar53[3] = (float)(-(uint)(fVar233 == local_68._0_4_) & uVar7);
                      pfVar47 = pfVar38 + lVar49 + 4;
                      *pfVar47 = (float)(-(uint)(fVar234 == local_68._0_4_) & uVar43);
                      pfVar47[1] = (float)(-(uint)(fVar235 == local_68._0_4_) & uVar50);
                      pfVar47[2] = (float)(-(uint)(fVar264 == local_68._0_4_) & uVar56);
                      pfVar47[3] = (float)(-(uint)(fVar265 == local_68._0_4_) & uVar7);
                      pfVar47 = local_88 + lVar49 + 8;
                      fVar62 = pfVar47[1];
                      fVar232 = pfVar47[2];
                      fVar233 = pfVar47[3];
                      pfVar53 = local_88 + lVar49 + 0xc;
                      fVar234 = *pfVar53;
                      fVar235 = pfVar53[1];
                      fVar264 = pfVar53[2];
                      fVar265 = pfVar53[3];
                      pfVar53 = pfVar38 + lVar49 + 8;
                      *pfVar53 = (float)(-(uint)(*pfVar47 == local_68._0_4_) & uVar43);
                      pfVar53[1] = (float)(-(uint)(fVar62 == local_68._0_4_) & uVar50);
                      pfVar53[2] = (float)(-(uint)(fVar232 == local_68._0_4_) & uVar56);
                      pfVar53[3] = (float)(-(uint)(fVar233 == local_68._0_4_) & uVar7);
                      pfVar47 = pfVar38 + lVar49 + 0xc;
                      *pfVar47 = (float)(-(uint)(fVar234 == local_68._0_4_) & uVar43);
                      pfVar47[1] = (float)(-(uint)(fVar235 == local_68._0_4_) & uVar50);
                      pfVar47[2] = (float)(-(uint)(fVar264 == local_68._0_4_) & uVar56);
                      pfVar47[3] = (float)(-(uint)(fVar265 == local_68._0_4_) & uVar7);
                      lVar49 = lVar49 + 0x10;
                      uVar54 = uVar54 - 2;
                    } while (uVar54 != 0);
                  }
                  if ((uVar52 & 1) != 0) {
                    pfVar47 = local_88 + lVar49;
                    pfVar53 = local_88 + lVar49 + 4;
                    fVar62 = (float)(-(uint)(pfVar47[1] == local_68._0_4_) & _UNK_00652574);
                    fVar232 = (float)(-(uint)(pfVar47[2] == local_68._0_4_) & _UNK_00652578);
                    fVar233 = (float)(-(uint)(pfVar47[3] == local_68._0_4_) & _UNK_0065257c);
                    fVar234 = (float)(-(uint)(*pfVar53 == local_68._0_4_) & _DAT_00652570);
                    fVar235 = (float)(-(uint)(pfVar53[1] == local_68._0_4_) & _UNK_00652574);
                    fVar264 = (float)(-(uint)(pfVar53[2] == local_68._0_4_) & _UNK_00652578);
                    fVar265 = (float)(-(uint)(pfVar53[3] == local_68._0_4_) & _UNK_0065257c);
                    pfVar53 = pfVar38 + lVar49;
                    *pfVar53 = (float)(-(uint)(*pfVar47 == local_68._0_4_) & _DAT_00652570);
                    pfVar53[1] = fVar62;
                    pfVar53[2] = fVar232;
                    pfVar53[3] = fVar233;
                    pfVar47 = pfVar38 + lVar49 + 4;
                    *pfVar47 = fVar234;
                    pfVar47[1] = fVar235;
                    pfVar47[2] = fVar264;
                    pfVar47[3] = fVar265;
                  }
                  if (uVar57 + 1 == uVar44) goto LAB_005b73c2;
                  pfVar38 = pfVar38 + uVar44;
                  pfVar47 = local_88 + uVar44;
                }
                fVar62 = DAT_005d9038;
                uVar43 = (uint)uVar44;
                uVar50 = ~uVar43;
                if ((uVar34 & 3) != 0) {
                  iVar40 = 0;
                  do {
                    *pfVar38 = (float)(-(uint)(*pfVar47 == local_68._0_4_) & (uint)fVar62);
                    pfVar38 = pfVar38 + 1;
                    pfVar47 = pfVar47 + 1;
                    iVar40 = iVar40 + -1;
                  } while (-(uVar34 & 3) != iVar40);
                  uVar43 = uVar43 - iVar40;
                }
                fVar62 = DAT_005d9038;
                if (2 < uVar50 + uVar34) {
                  lVar49 = 0;
                  do {
                    pfVar38[lVar49] =
                         (float)(-(uint)(pfVar47[lVar49] == local_68._0_4_) & (uint)fVar62);
                    pfVar38[lVar49 + 1] =
                         (float)(-(uint)(pfVar47[lVar49 + 1] == local_68._0_4_) & (uint)fVar62);
                    pfVar38[lVar49 + 2] =
                         (float)(-(uint)(pfVar47[lVar49 + 2] == local_68._0_4_) & (uint)fVar62);
                    pfVar38[lVar49 + 3] =
                         (float)(-(uint)(pfVar47[lVar49 + 3] == local_68._0_4_) & (uint)fVar62);
                    lVar49 = lVar49 + 4;
                  } while (uVar34 - uVar43 != (int)lVar49);
                }
              }
              goto LAB_005b73c2;
            }
            if (lStack_80 == 2) {
              if (*(long *)(param_9 + 2) == 0xf) {
                iVar40 = *(int *)(param_7 + 0x28f8);
                if (0 < iVar40) {
                  uVar34 = (uint)DAT_005d9038 & -(uint)(local_88._0_4_ == local_68._0_4_);
                  lVar49 = *(long *)param_9;
                  uVar44 = 0;
                  if (6 < iVar40 - 1U) {
                    uVar52 = (ulong)(iVar40 - 1U) + 1;
                    uVar44 = uVar52 & 0xfffffffffffffff8;
                    uVar54 = (uVar44 - 8 >> 3) + 1;
                    uVar57 = (ulong)((uint)uVar54 & 7);
                    if (uVar44 - 8 < 0x38) {
                      lVar45 = 0;
                    }
                    else {
                      uVar54 = uVar54 & 0xfffffffffffffff8;
                      lVar45 = 0;
                      do {
                        puVar4 = (uint *)(lVar49 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar49 + 0x10 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar49 + 0x20 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar49 + 0x30 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar49 + 0x40 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar49 + 0x50 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar49 + 0x60 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar49 + 0x70 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar49 + 0x80 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar49 + 0x90 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar49 + 0xa0 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar49 + 0xb0 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar49 + 0xc0 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar49 + 0xd0 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar49 + 0xe0 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar49 + 0xf0 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        lVar45 = lVar45 + 0x40;
                        uVar54 = uVar54 - 8;
                      } while (uVar54 != 0);
                    }
                    if (uVar57 != 0) {
                      lVar45 = lVar49 + lVar45 * 4;
                      lVar48 = 0;
                      do {
                        puVar4 = (uint *)(lVar45 + lVar48);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar45 + 0x10 + lVar48);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        lVar48 = lVar48 + 0x20;
                      } while (uVar57 * 0x20 != lVar48);
                    }
                    if (uVar52 == uVar44) goto LAB_005b73c2;
                    lVar49 = lVar49 + uVar44 * 4;
                  }
                  lVar45 = 0;
                  do {
                    *(uint *)(lVar49 + lVar45 * 4) = uVar34;
                    lVar45 = lVar45 + 1;
                  } while (iVar40 - (int)uVar44 != (int)lVar45);
                }
                goto LAB_005b73c2;
              }
              param_9[2] = 2.8026e-45;
              param_9[3] = 0.0;
              fVar62 = local_88._0_4_;
            }
            else {
              if (lStack_80 != 1) goto LAB_005b7359;
              if (*(long *)(param_9 + 2) == 0xf) {
                iVar40 = *(int *)(param_7 + 0x28f8);
                if (0 < iVar40) {
                  uVar34 = (uint)DAT_005d9038 & -(uint)((float)(long)local_88 == local_68._0_4_);
                  lVar49 = *(long *)param_9;
                  uVar44 = 0;
                  if (6 < iVar40 - 1U) {
                    uVar52 = (ulong)(iVar40 - 1U) + 1;
                    uVar44 = uVar52 & 0xfffffffffffffff8;
                    uVar54 = (uVar44 - 8 >> 3) + 1;
                    uVar57 = (ulong)((uint)uVar54 & 7);
                    if (uVar44 - 8 < 0x38) {
                      lVar45 = 0;
                    }
                    else {
                      uVar54 = uVar54 & 0xfffffffffffffff8;
                      lVar45 = 0;
                      do {
                        puVar4 = (uint *)(lVar49 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar49 + 0x10 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar49 + 0x20 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar49 + 0x30 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar49 + 0x40 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar49 + 0x50 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar49 + 0x60 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar49 + 0x70 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar49 + 0x80 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar49 + 0x90 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar49 + 0xa0 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar49 + 0xb0 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar49 + 0xc0 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar49 + 0xd0 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar49 + 0xe0 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar49 + 0xf0 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        lVar45 = lVar45 + 0x40;
                        uVar54 = uVar54 - 8;
                      } while (uVar54 != 0);
                    }
                    if (uVar57 != 0) {
                      lVar45 = lVar49 + lVar45 * 4;
                      lVar48 = 0;
                      do {
                        puVar4 = (uint *)(lVar45 + lVar48);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar45 + 0x10 + lVar48);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        lVar48 = lVar48 + 0x20;
                      } while (uVar57 * 0x20 != lVar48);
                    }
                    if (uVar52 == uVar44) goto LAB_005b73c2;
                    lVar49 = lVar49 + uVar44 * 4;
                  }
                  lVar45 = 0;
                  do {
                    *(uint *)(lVar49 + lVar45 * 4) = uVar34;
                    lVar45 = lVar45 + 1;
                  } while (iVar40 - (int)uVar44 != (int)lVar45);
                }
                goto LAB_005b73c2;
              }
              param_9[2] = 2.8026e-45;
              param_9[3] = 0.0;
              fVar62 = (float)(long)local_88;
            }
LAB_005b844f:
            uVar34 = -(uint)(fVar62 == local_68._0_4_);
            goto LAB_005b8456;
          }
          if (lStack_60 == 1) {
            if (lStack_80 - 0xeU < 2) {
              if (*(long *)(param_9 + 2) == 0xf) {
                pfVar38 = *(float **)param_9;
              }
              else {
                if (*(long *)(param_9 + 2) == 0xe) goto LAB_005c5996;
                param_9[2] = 2.10195e-44;
                param_9[3] = 0.0;
                pfVar38 = malloc((long)*(int *)(param_7 + 0x28f8) << 2);
                *(float **)param_9 = pfVar38;
              }
              uVar7 = _UNK_0065257c;
              uVar56 = _UNK_00652578;
              uVar50 = _UNK_00652574;
              uVar43 = _DAT_00652570;
              uVar34 = *(uint *)(param_7 + 0x28f8);
              if (0 < (int)uVar34) {
                fVar62 = (float)(long)local_68;
                uVar57 = (ulong)(uVar34 - 1);
                uVar44 = 0;
                pfVar47 = local_88;
                if ((6 < uVar34 - 1) &&
                   ((local_88 + uVar57 + 1 <= pfVar38 || (pfVar38 + uVar57 + 1 <= local_88)))) {
                  uVar44 = uVar57 + 1 & 0xfffffffffffffff8;
                  uVar52 = (uVar44 - 8 >> 3) + 1;
                  if (uVar44 - 8 == 0) {
                    lVar49 = 0;
                  }
                  else {
                    uVar54 = uVar52 & 0x3ffffffffffffffe;
                    lVar49 = 0;
                    do {
                      pfVar47 = local_88 + lVar49;
                      fVar232 = pfVar47[1];
                      fVar233 = pfVar47[2];
                      fVar234 = pfVar47[3];
                      pfVar53 = local_88 + lVar49 + 4;
                      fVar235 = *pfVar53;
                      fVar264 = pfVar53[1];
                      fVar265 = pfVar53[2];
                      fVar266 = pfVar53[3];
                      pfVar53 = pfVar38 + lVar49;
                      *pfVar53 = (float)(-(uint)(*pfVar47 == fVar62) & uVar43);
                      pfVar53[1] = (float)(-(uint)(fVar232 == fVar62) & uVar50);
                      pfVar53[2] = (float)(-(uint)(fVar233 == fVar62) & uVar56);
                      pfVar53[3] = (float)(-(uint)(fVar234 == fVar62) & uVar7);
                      pfVar47 = pfVar38 + lVar49 + 4;
                      *pfVar47 = (float)(-(uint)(fVar235 == fVar62) & uVar43);
                      pfVar47[1] = (float)(-(uint)(fVar264 == fVar62) & uVar50);
                      pfVar47[2] = (float)(-(uint)(fVar265 == fVar62) & uVar56);
                      pfVar47[3] = (float)(-(uint)(fVar266 == fVar62) & uVar7);
                      pfVar47 = local_88 + lVar49 + 8;
                      fVar232 = pfVar47[1];
                      fVar233 = pfVar47[2];
                      fVar234 = pfVar47[3];
                      pfVar53 = local_88 + lVar49 + 0xc;
                      fVar235 = *pfVar53;
                      fVar264 = pfVar53[1];
                      fVar265 = pfVar53[2];
                      fVar266 = pfVar53[3];
                      pfVar53 = pfVar38 + lVar49 + 8;
                      *pfVar53 = (float)(-(uint)(*pfVar47 == fVar62) & uVar43);
                      pfVar53[1] = (float)(-(uint)(fVar232 == fVar62) & uVar50);
                      pfVar53[2] = (float)(-(uint)(fVar233 == fVar62) & uVar56);
                      pfVar53[3] = (float)(-(uint)(fVar234 == fVar62) & uVar7);
                      pfVar47 = pfVar38 + lVar49 + 0xc;
                      *pfVar47 = (float)(-(uint)(fVar235 == fVar62) & uVar43);
                      pfVar47[1] = (float)(-(uint)(fVar264 == fVar62) & uVar50);
                      pfVar47[2] = (float)(-(uint)(fVar265 == fVar62) & uVar56);
                      pfVar47[3] = (float)(-(uint)(fVar266 == fVar62) & uVar7);
                      lVar49 = lVar49 + 0x10;
                      uVar54 = uVar54 - 2;
                    } while (uVar54 != 0);
                  }
                  if ((uVar52 & 1) != 0) {
                    pfVar47 = local_88 + lVar49;
                    pfVar53 = local_88 + lVar49 + 4;
                    fVar232 = (float)(-(uint)(pfVar47[1] == fVar62) & _UNK_00652574);
                    fVar233 = (float)(-(uint)(pfVar47[2] == fVar62) & _UNK_00652578);
                    fVar234 = (float)(-(uint)(pfVar47[3] == fVar62) & _UNK_0065257c);
                    fVar235 = (float)(-(uint)(*pfVar53 == fVar62) & _DAT_00652570);
                    fVar264 = (float)(-(uint)(pfVar53[1] == fVar62) & _UNK_00652574);
                    fVar265 = (float)(-(uint)(pfVar53[2] == fVar62) & _UNK_00652578);
                    fVar266 = (float)(-(uint)(pfVar53[3] == fVar62) & _UNK_0065257c);
                    pfVar53 = pfVar38 + lVar49;
                    *pfVar53 = (float)(-(uint)(*pfVar47 == fVar62) & _DAT_00652570);
                    pfVar53[1] = fVar232;
                    pfVar53[2] = fVar233;
                    pfVar53[3] = fVar234;
                    pfVar47 = pfVar38 + lVar49 + 4;
                    *pfVar47 = fVar235;
                    pfVar47[1] = fVar264;
                    pfVar47[2] = fVar265;
                    pfVar47[3] = fVar266;
                  }
                  if (uVar57 + 1 == uVar44) goto LAB_005b73c2;
                  pfVar38 = pfVar38 + uVar44;
                  pfVar47 = local_88 + uVar44;
                }
                fVar232 = DAT_005d9038;
                uVar43 = (uint)uVar44;
                uVar50 = ~uVar43;
                if ((uVar34 & 3) != 0) {
                  iVar40 = 0;
                  do {
                    *pfVar38 = (float)(-(uint)(*pfVar47 == fVar62) & (uint)fVar232);
                    pfVar38 = pfVar38 + 1;
                    pfVar47 = pfVar47 + 1;
                    iVar40 = iVar40 + -1;
                  } while (-(uVar34 & 3) != iVar40);
                  uVar43 = uVar43 - iVar40;
                }
                fVar232 = DAT_005d9038;
                if (2 < uVar50 + uVar34) {
                  lVar49 = 0;
                  do {
                    pfVar38[lVar49] = (float)(-(uint)(pfVar47[lVar49] == fVar62) & (uint)fVar232);
                    pfVar38[lVar49 + 1] =
                         (float)(-(uint)(pfVar47[lVar49 + 1] == fVar62) & (uint)fVar232);
                    pfVar38[lVar49 + 2] =
                         (float)(-(uint)(pfVar47[lVar49 + 2] == fVar62) & (uint)fVar232);
                    pfVar38[lVar49 + 3] =
                         (float)(-(uint)(pfVar47[lVar49 + 3] == fVar62) & (uint)fVar232);
                    lVar49 = lVar49 + 4;
                  } while (uVar34 - uVar43 != (int)lVar49);
                }
              }
              goto LAB_005b73c2;
            }
            if (lStack_80 == 2) {
              if (*(long *)(param_9 + 2) == 0xf) {
                iVar40 = *(int *)(param_7 + 0x28f8);
                if (0 < iVar40) {
                  uVar34 = (uint)DAT_005d9038 & -(uint)((float)(long)local_68 == local_88._0_4_);
                  lVar49 = *(long *)param_9;
                  uVar44 = 0;
                  if (6 < iVar40 - 1U) {
                    uVar52 = (ulong)(iVar40 - 1U) + 1;
                    uVar44 = uVar52 & 0xfffffffffffffff8;
                    uVar54 = (uVar44 - 8 >> 3) + 1;
                    uVar57 = (ulong)((uint)uVar54 & 7);
                    if (uVar44 - 8 < 0x38) {
                      lVar45 = 0;
                    }
                    else {
                      uVar54 = uVar54 & 0xfffffffffffffff8;
                      lVar45 = 0;
                      do {
                        puVar4 = (uint *)(lVar49 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar49 + 0x10 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar49 + 0x20 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar49 + 0x30 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar49 + 0x40 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar49 + 0x50 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar49 + 0x60 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar49 + 0x70 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar49 + 0x80 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar49 + 0x90 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar49 + 0xa0 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar49 + 0xb0 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar49 + 0xc0 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar49 + 0xd0 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar49 + 0xe0 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar49 + 0xf0 + lVar45 * 4);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        lVar45 = lVar45 + 0x40;
                        uVar54 = uVar54 - 8;
                      } while (uVar54 != 0);
                    }
                    if (uVar57 != 0) {
                      lVar45 = lVar49 + lVar45 * 4;
                      lVar48 = 0;
                      do {
                        puVar4 = (uint *)(lVar45 + lVar48);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        puVar4 = (uint *)(lVar45 + 0x10 + lVar48);
                        *puVar4 = uVar34;
                        puVar4[1] = uVar34;
                        puVar4[2] = uVar34;
                        puVar4[3] = uVar34;
                        lVar48 = lVar48 + 0x20;
                      } while (uVar57 * 0x20 != lVar48);
                    }
                    if (uVar52 == uVar44) goto LAB_005b73c2;
                    lVar49 = lVar49 + uVar44 * 4;
                  }
                  lVar45 = 0;
                  do {
                    *(uint *)(lVar49 + lVar45 * 4) = uVar34;
                    lVar45 = lVar45 + 1;
                  } while (iVar40 - (int)uVar44 != (int)lVar45);
                }
                goto LAB_005b73c2;
              }
              param_9[2] = 2.8026e-45;
              param_9[3] = 0.0;
              uVar34 = -(uint)((float)(long)local_68 == local_88._0_4_);
              goto LAB_005b8456;
            }
            if (lStack_80 == 1) {
              if (*(long *)(param_9 + 2) == 0xf) {
                if (local_68 == local_88) {
                  fVar62 = DAT_005d9038;
                }
                else {
                  fVar62 = 0.0;
                }
                iVar40 = *(int *)(param_7 + 0x28f8);
                if (0 < iVar40) {
                  lVar49 = *(long *)param_9;
                  uVar44 = 0;
                  if (6 < iVar40 - 1U) {
                    uVar52 = (ulong)(iVar40 - 1U) + 1;
                    uVar44 = uVar52 & 0xfffffffffffffff8;
                    uVar54 = (uVar44 - 8 >> 3) + 1;
                    uVar57 = (ulong)((uint)uVar54 & 7);
                    if (uVar44 - 8 < 0x38) {
                      lVar45 = 0;
                    }
                    else {
                      uVar54 = uVar54 & 0xfffffffffffffff8;
                      lVar45 = 0;
                      do {
                        pfVar38 = (float *)(lVar49 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar45 = lVar45 + 0x40;
                        uVar54 = uVar54 - 8;
                      } while (uVar54 != 0);
                    }
                    if (uVar57 != 0) {
                      lVar45 = lVar49 + lVar45 * 4;
                      lVar48 = 0;
                      do {
                        pfVar38 = (float *)(lVar45 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar48 = lVar48 + 0x20;
                      } while (uVar57 * 0x20 != lVar48);
                    }
                    if (uVar52 == uVar44) goto LAB_005b73c2;
                    lVar49 = lVar49 + uVar44 * 4;
                  }
                  lVar45 = 0;
                  do {
                    *(float *)(lVar49 + lVar45 * 4) = fVar62;
                    lVar45 = lVar45 + 1;
                  } while (iVar40 - (int)uVar44 != (int)lVar45);
                }
              }
              else {
                param_9[2] = 1.4013e-45;
                param_9[3] = 0.0;
                *(ulong *)param_9 = (ulong)(local_68 == local_88);
              }
              goto LAB_005b73c2;
            }
            goto LAB_005b7359;
          }
          pcVar55 = "expr: ex_eval(%d): bad left type %ld\n";
          lVar49 = lStack_60;
        }
        uVar46 = 0x539;
        goto LAB_005b73bb;
      }
      puVar36 = ex_eval(0,param_2,param_3,param_4,param_5,param_6,param_7,puVar36,(float *)&local_68
                        ,(undefined *)((ulong)param_10 & 0xffffffff),param_11,param_12);
      puVar36 = ex_eval(extraout_XMM0_Qa_19,param_2,param_3,param_4,param_5,param_6,param_7,puVar36,
                        (float *)&local_88,(undefined *)((ulong)param_10 & 0xffffffff),param_11,
                        param_12);
      uVar236 = in_XMM3._0_8_;
      uVar63 = in_XMM2._0_8_;
      uVar44 = extraout_XMM0_Qa_20;
      if (lStack_60 - 0xeU < 2) {
        if (*(long *)(param_9 + 2) == 0xf) {
          pfVar38 = *(float **)param_9;
        }
        else {
          if (*(long *)(param_9 + 2) == 0xe) {
LAB_005c5996:
            post(uVar44,param_2,uVar63,uVar236,param_3,param_4,param_5,param_6,
                 "expr~: Int. error %d");
                    /* WARNING: Subroutine does not return */
            abort();
          }
          param_9[2] = 2.10195e-44;
          param_9[3] = 0.0;
          pfVar38 = malloc((long)*(int *)(param_7 + 0x28f8) << 2);
          uVar63 = in_XMM2._0_8_;
          uVar236 = in_XMM3._0_8_;
          *(float **)param_9 = pfVar38;
          uVar44 = extraout_XMM0_Qa_27;
        }
        uVar56 = _UNK_0065257c;
        uVar50 = _UNK_00652578;
        uVar43 = _UNK_00652574;
        uVar34 = _DAT_00652570;
        if (lStack_80 - 0xeU < 2) {
          uVar7 = *(uint *)(param_7 + 0x28f8);
          if (0 < (int)uVar7) {
            uVar57 = (ulong)(uVar7 - 1);
            uVar44 = 0;
            pfVar53 = local_68;
            pfVar47 = local_88;
            if (6 < uVar7 - 1) {
              if ((local_68 + uVar57 + 1 <= pfVar38 || pfVar38 + uVar57 + 1 <= local_68) &&
                 (local_88 + uVar57 + 1 <= pfVar38 || pfVar38 + uVar57 + 1 <= local_88)) {
                uVar44 = uVar57 + 1 & 0xfffffffffffffff8;
                uVar52 = (uVar44 - 8 >> 3) + 1;
                if (uVar44 - 8 == 0) {
                  lVar49 = 0;
                }
                else {
                  uVar54 = uVar52 & 0x3ffffffffffffffe;
                  lVar49 = 0;
                  do {
                    pfVar47 = local_68 + lVar49;
                    fVar62 = pfVar47[1];
                    fVar232 = pfVar47[2];
                    fVar233 = pfVar47[3];
                    pfVar53 = local_68 + lVar49 + 4;
                    fVar234 = *pfVar53;
                    fVar235 = pfVar53[1];
                    fVar264 = pfVar53[2];
                    fVar265 = pfVar53[3];
                    pfVar53 = local_88 + lVar49;
                    fVar266 = pfVar53[1];
                    fVar28 = pfVar53[2];
                    fVar29 = pfVar53[3];
                    pfVar2 = local_88 + lVar49 + 4;
                    fVar30 = *pfVar2;
                    fVar31 = pfVar2[1];
                    fVar32 = pfVar2[2];
                    fVar33 = pfVar2[3];
                    pfVar2 = pfVar38 + lVar49;
                    *pfVar2 = (float)(-(uint)(*pfVar53 != *pfVar47) & uVar34);
                    pfVar2[1] = (float)(-(uint)(fVar266 != fVar62) & uVar43);
                    pfVar2[2] = (float)(-(uint)(fVar28 != fVar232) & uVar50);
                    pfVar2[3] = (float)(-(uint)(fVar29 != fVar233) & uVar56);
                    pfVar47 = pfVar38 + lVar49 + 4;
                    *pfVar47 = (float)(-(uint)(fVar30 != fVar234) & uVar34);
                    pfVar47[1] = (float)(-(uint)(fVar31 != fVar235) & uVar43);
                    pfVar47[2] = (float)(-(uint)(fVar32 != fVar264) & uVar50);
                    pfVar47[3] = (float)(-(uint)(fVar33 != fVar265) & uVar56);
                    pfVar47 = local_68 + lVar49 + 8;
                    fVar62 = pfVar47[1];
                    fVar232 = pfVar47[2];
                    fVar233 = pfVar47[3];
                    pfVar53 = local_68 + lVar49 + 0xc;
                    fVar234 = *pfVar53;
                    fVar235 = pfVar53[1];
                    fVar264 = pfVar53[2];
                    fVar265 = pfVar53[3];
                    pfVar53 = local_88 + lVar49 + 8;
                    fVar266 = pfVar53[1];
                    fVar28 = pfVar53[2];
                    fVar29 = pfVar53[3];
                    pfVar2 = local_88 + lVar49 + 0xc;
                    fVar30 = *pfVar2;
                    fVar31 = pfVar2[1];
                    fVar32 = pfVar2[2];
                    fVar33 = pfVar2[3];
                    pfVar2 = pfVar38 + lVar49 + 8;
                    *pfVar2 = (float)(-(uint)(*pfVar53 != *pfVar47) & uVar34);
                    pfVar2[1] = (float)(-(uint)(fVar266 != fVar62) & uVar43);
                    pfVar2[2] = (float)(-(uint)(fVar28 != fVar232) & uVar50);
                    pfVar2[3] = (float)(-(uint)(fVar29 != fVar233) & uVar56);
                    pfVar47 = pfVar38 + lVar49 + 0xc;
                    *pfVar47 = (float)(-(uint)(fVar30 != fVar234) & uVar34);
                    pfVar47[1] = (float)(-(uint)(fVar31 != fVar235) & uVar43);
                    pfVar47[2] = (float)(-(uint)(fVar32 != fVar264) & uVar50);
                    pfVar47[3] = (float)(-(uint)(fVar33 != fVar265) & uVar56);
                    lVar49 = lVar49 + 0x10;
                    uVar54 = uVar54 - 2;
                  } while (uVar54 != 0);
                }
                if ((uVar52 & 1) != 0) {
                  pfVar47 = local_68 + lVar49;
                  pfVar2 = local_68 + lVar49 + 4;
                  pfVar53 = local_88 + lVar49;
                  pfVar3 = local_88 + lVar49 + 4;
                  fVar235 = (float)(-(uint)(pfVar53[1] != pfVar47[1]) & _UNK_00652574);
                  fVar264 = (float)(-(uint)(pfVar53[2] != pfVar47[2]) & _UNK_00652578);
                  fVar265 = (float)(-(uint)(pfVar53[3] != pfVar47[3]) & _UNK_0065257c);
                  fVar62 = (float)(-(uint)(*pfVar3 != *pfVar2) & _DAT_00652570);
                  fVar232 = (float)(-(uint)(pfVar3[1] != pfVar2[1]) & _UNK_00652574);
                  fVar233 = (float)(-(uint)(pfVar3[2] != pfVar2[2]) & _UNK_00652578);
                  fVar234 = (float)(-(uint)(pfVar3[3] != pfVar2[3]) & _UNK_0065257c);
                  pfVar2 = pfVar38 + lVar49;
                  *pfVar2 = (float)(-(uint)(*pfVar53 != *pfVar47) & _DAT_00652570);
                  pfVar2[1] = fVar235;
                  pfVar2[2] = fVar264;
                  pfVar2[3] = fVar265;
                  pfVar47 = pfVar38 + lVar49 + 4;
                  *pfVar47 = fVar62;
                  pfVar47[1] = fVar232;
                  pfVar47[2] = fVar233;
                  pfVar47[3] = fVar234;
                }
                if (uVar57 + 1 == uVar44) goto LAB_005b73c2;
                pfVar38 = pfVar38 + uVar44;
                pfVar47 = local_88 + uVar44;
                pfVar53 = local_68 + uVar44;
              }
            }
            fVar62 = DAT_005d9038;
            uVar43 = (uint)uVar44;
            uVar34 = ~uVar43;
            if ((uVar7 & 3) != 0) {
              iVar40 = 0;
              do {
                *pfVar38 = (float)(-(uint)(*pfVar47 != *pfVar53) & (uint)fVar62);
                pfVar38 = pfVar38 + 1;
                pfVar47 = pfVar47 + 1;
                pfVar53 = pfVar53 + 1;
                iVar40 = iVar40 + -1;
              } while (-(uVar7 & 3) != iVar40);
              uVar43 = uVar43 - iVar40;
            }
            fVar62 = DAT_005d9038;
            if (2 < uVar34 + uVar7) {
              lVar49 = 0;
              do {
                pfVar38[lVar49] =
                     (float)(-(uint)(pfVar47[lVar49] != pfVar53[lVar49]) & (uint)fVar62);
                pfVar38[lVar49 + 1] =
                     (float)(-(uint)(pfVar47[lVar49 + 1] != pfVar53[lVar49 + 1]) & (uint)fVar62);
                pfVar38[lVar49 + 2] =
                     (float)(-(uint)(pfVar47[lVar49 + 2] != pfVar53[lVar49 + 2]) & (uint)fVar62);
                pfVar38[lVar49 + 3] =
                     (float)(-(uint)(pfVar47[lVar49 + 3] != pfVar53[lVar49 + 3]) & (uint)fVar62);
                lVar49 = lVar49 + 4;
              } while (uVar7 - uVar43 != (int)lVar49);
            }
          }
          goto LAB_005b73c2;
        }
        if (lStack_80 == 2) {
          uVar7 = *(uint *)(param_7 + 0x28f8);
          if (0 < (int)uVar7) {
            uVar57 = (ulong)(uVar7 - 1);
            uVar44 = 0;
            pfVar47 = local_68;
            if ((6 < uVar7 - 1) &&
               ((local_68 + uVar57 + 1 <= pfVar38 || (pfVar38 + uVar57 + 1 <= local_68)))) {
              uVar44 = uVar57 + 1 & 0xfffffffffffffff8;
              uVar52 = (uVar44 - 8 >> 3) + 1;
              if (uVar44 - 8 == 0) {
                lVar49 = 0;
              }
              else {
                uVar54 = uVar52 & 0x3ffffffffffffffe;
                lVar49 = 0;
                do {
                  pfVar47 = local_68 + lVar49;
                  fVar62 = pfVar47[1];
                  fVar232 = pfVar47[2];
                  fVar233 = pfVar47[3];
                  pfVar53 = local_68 + lVar49 + 4;
                  fVar234 = *pfVar53;
                  fVar235 = pfVar53[1];
                  fVar264 = pfVar53[2];
                  fVar265 = pfVar53[3];
                  pfVar53 = pfVar38 + lVar49;
                  *pfVar53 = (float)(-(uint)(*pfVar47 != local_88._0_4_) & uVar34);
                  pfVar53[1] = (float)(-(uint)(fVar62 != local_88._0_4_) & uVar43);
                  pfVar53[2] = (float)(-(uint)(fVar232 != local_88._0_4_) & uVar50);
                  pfVar53[3] = (float)(-(uint)(fVar233 != local_88._0_4_) & uVar56);
                  pfVar47 = pfVar38 + lVar49 + 4;
                  *pfVar47 = (float)(-(uint)(fVar234 != local_88._0_4_) & uVar34);
                  pfVar47[1] = (float)(-(uint)(fVar235 != local_88._0_4_) & uVar43);
                  pfVar47[2] = (float)(-(uint)(fVar264 != local_88._0_4_) & uVar50);
                  pfVar47[3] = (float)(-(uint)(fVar265 != local_88._0_4_) & uVar56);
                  pfVar47 = local_68 + lVar49 + 8;
                  fVar62 = pfVar47[1];
                  fVar232 = pfVar47[2];
                  fVar233 = pfVar47[3];
                  pfVar53 = local_68 + lVar49 + 0xc;
                  fVar234 = *pfVar53;
                  fVar235 = pfVar53[1];
                  fVar264 = pfVar53[2];
                  fVar265 = pfVar53[3];
                  pfVar53 = pfVar38 + lVar49 + 8;
                  *pfVar53 = (float)(-(uint)(*pfVar47 != local_88._0_4_) & uVar34);
                  pfVar53[1] = (float)(-(uint)(fVar62 != local_88._0_4_) & uVar43);
                  pfVar53[2] = (float)(-(uint)(fVar232 != local_88._0_4_) & uVar50);
                  pfVar53[3] = (float)(-(uint)(fVar233 != local_88._0_4_) & uVar56);
                  pfVar47 = pfVar38 + lVar49 + 0xc;
                  *pfVar47 = (float)(-(uint)(fVar234 != local_88._0_4_) & uVar34);
                  pfVar47[1] = (float)(-(uint)(fVar235 != local_88._0_4_) & uVar43);
                  pfVar47[2] = (float)(-(uint)(fVar264 != local_88._0_4_) & uVar50);
                  pfVar47[3] = (float)(-(uint)(fVar265 != local_88._0_4_) & uVar56);
                  lVar49 = lVar49 + 0x10;
                  uVar54 = uVar54 - 2;
                } while (uVar54 != 0);
              }
              if ((uVar52 & 1) != 0) {
                pfVar47 = local_68 + lVar49;
                pfVar53 = local_68 + lVar49 + 4;
                fVar62 = (float)(-(uint)(pfVar47[1] != local_88._0_4_) & _UNK_00652574);
                fVar232 = (float)(-(uint)(pfVar47[2] != local_88._0_4_) & _UNK_00652578);
                fVar233 = (float)(-(uint)(pfVar47[3] != local_88._0_4_) & _UNK_0065257c);
                fVar234 = (float)(-(uint)(*pfVar53 != local_88._0_4_) & _DAT_00652570);
                fVar235 = (float)(-(uint)(pfVar53[1] != local_88._0_4_) & _UNK_00652574);
                fVar264 = (float)(-(uint)(pfVar53[2] != local_88._0_4_) & _UNK_00652578);
                fVar265 = (float)(-(uint)(pfVar53[3] != local_88._0_4_) & _UNK_0065257c);
                pfVar53 = pfVar38 + lVar49;
                *pfVar53 = (float)(-(uint)(*pfVar47 != local_88._0_4_) & _DAT_00652570);
                pfVar53[1] = fVar62;
                pfVar53[2] = fVar232;
                pfVar53[3] = fVar233;
                pfVar47 = pfVar38 + lVar49 + 4;
                *pfVar47 = fVar234;
                pfVar47[1] = fVar235;
                pfVar47[2] = fVar264;
                pfVar47[3] = fVar265;
              }
              if (uVar57 + 1 == uVar44) goto LAB_005b73c2;
              pfVar38 = pfVar38 + uVar44;
              pfVar47 = local_68 + uVar44;
            }
            fVar62 = DAT_005d9038;
            uVar34 = (uint)uVar44;
            uVar43 = ~uVar34;
            if ((uVar7 & 3) != 0) {
              iVar40 = 0;
              do {
                *pfVar38 = (float)(-(uint)(*pfVar47 != local_88._0_4_) & (uint)fVar62);
                pfVar38 = pfVar38 + 1;
                pfVar47 = pfVar47 + 1;
                iVar40 = iVar40 + -1;
              } while (-(uVar7 & 3) != iVar40);
              uVar34 = uVar34 - iVar40;
            }
            fVar62 = DAT_005d9038;
            if (2 < uVar43 + uVar7) {
              lVar49 = 0;
              do {
                pfVar38[lVar49] = (float)(-(uint)(pfVar47[lVar49] != local_88._0_4_) & (uint)fVar62)
                ;
                pfVar38[lVar49 + 1] =
                     (float)(-(uint)(pfVar47[lVar49 + 1] != local_88._0_4_) & (uint)fVar62);
                pfVar38[lVar49 + 2] =
                     (float)(-(uint)(pfVar47[lVar49 + 2] != local_88._0_4_) & (uint)fVar62);
                pfVar38[lVar49 + 3] =
                     (float)(-(uint)(pfVar47[lVar49 + 3] != local_88._0_4_) & (uint)fVar62);
                lVar49 = lVar49 + 4;
              } while (uVar7 - uVar34 != (int)lVar49);
            }
          }
          goto LAB_005b73c2;
        }
        if (lStack_80 == 1) {
          uVar7 = *(uint *)(param_7 + 0x28f8);
          if (0 < (int)uVar7) {
            fVar62 = (float)(long)local_88;
            uVar57 = (ulong)(uVar7 - 1);
            uVar44 = 0;
            pfVar47 = local_68;
            if ((6 < uVar7 - 1) &&
               ((local_68 + uVar57 + 1 <= pfVar38 || (pfVar38 + uVar57 + 1 <= local_68)))) {
              uVar44 = uVar57 + 1 & 0xfffffffffffffff8;
              uVar52 = (uVar44 - 8 >> 3) + 1;
              if (uVar44 - 8 == 0) {
                lVar49 = 0;
              }
              else {
                uVar54 = uVar52 & 0x3ffffffffffffffe;
                lVar49 = 0;
                do {
                  pfVar47 = local_68 + lVar49;
                  fVar232 = pfVar47[1];
                  fVar233 = pfVar47[2];
                  fVar234 = pfVar47[3];
                  pfVar53 = local_68 + lVar49 + 4;
                  fVar235 = *pfVar53;
                  fVar264 = pfVar53[1];
                  fVar265 = pfVar53[2];
                  fVar266 = pfVar53[3];
                  pfVar53 = pfVar38 + lVar49;
                  *pfVar53 = (float)(-(uint)(*pfVar47 != fVar62) & uVar34);
                  pfVar53[1] = (float)(-(uint)(fVar232 != fVar62) & uVar43);
                  pfVar53[2] = (float)(-(uint)(fVar233 != fVar62) & uVar50);
                  pfVar53[3] = (float)(-(uint)(fVar234 != fVar62) & uVar56);
                  pfVar47 = pfVar38 + lVar49 + 4;
                  *pfVar47 = (float)(-(uint)(fVar235 != fVar62) & uVar34);
                  pfVar47[1] = (float)(-(uint)(fVar264 != fVar62) & uVar43);
                  pfVar47[2] = (float)(-(uint)(fVar265 != fVar62) & uVar50);
                  pfVar47[3] = (float)(-(uint)(fVar266 != fVar62) & uVar56);
                  pfVar47 = local_68 + lVar49 + 8;
                  fVar232 = pfVar47[1];
                  fVar233 = pfVar47[2];
                  fVar234 = pfVar47[3];
                  pfVar53 = local_68 + lVar49 + 0xc;
                  fVar235 = *pfVar53;
                  fVar264 = pfVar53[1];
                  fVar265 = pfVar53[2];
                  fVar266 = pfVar53[3];
                  pfVar53 = pfVar38 + lVar49 + 8;
                  *pfVar53 = (float)(-(uint)(*pfVar47 != fVar62) & uVar34);
                  pfVar53[1] = (float)(-(uint)(fVar232 != fVar62) & uVar43);
                  pfVar53[2] = (float)(-(uint)(fVar233 != fVar62) & uVar50);
                  pfVar53[3] = (float)(-(uint)(fVar234 != fVar62) & uVar56);
                  pfVar47 = pfVar38 + lVar49 + 0xc;
                  *pfVar47 = (float)(-(uint)(fVar235 != fVar62) & uVar34);
                  pfVar47[1] = (float)(-(uint)(fVar264 != fVar62) & uVar43);
                  pfVar47[2] = (float)(-(uint)(fVar265 != fVar62) & uVar50);
                  pfVar47[3] = (float)(-(uint)(fVar266 != fVar62) & uVar56);
                  lVar49 = lVar49 + 0x10;
                  uVar54 = uVar54 - 2;
                } while (uVar54 != 0);
              }
              if ((uVar52 & 1) != 0) {
                pfVar47 = local_68 + lVar49;
                pfVar53 = local_68 + lVar49 + 4;
                fVar232 = (float)(-(uint)(pfVar47[1] != fVar62) & _UNK_00652574);
                fVar233 = (float)(-(uint)(pfVar47[2] != fVar62) & _UNK_00652578);
                fVar234 = (float)(-(uint)(pfVar47[3] != fVar62) & _UNK_0065257c);
                fVar235 = (float)(-(uint)(*pfVar53 != fVar62) & _DAT_00652570);
                fVar264 = (float)(-(uint)(pfVar53[1] != fVar62) & _UNK_00652574);
                fVar265 = (float)(-(uint)(pfVar53[2] != fVar62) & _UNK_00652578);
                fVar266 = (float)(-(uint)(pfVar53[3] != fVar62) & _UNK_0065257c);
                pfVar53 = pfVar38 + lVar49;
                *pfVar53 = (float)(-(uint)(*pfVar47 != fVar62) & _DAT_00652570);
                pfVar53[1] = fVar232;
                pfVar53[2] = fVar233;
                pfVar53[3] = fVar234;
                pfVar47 = pfVar38 + lVar49 + 4;
                *pfVar47 = fVar235;
                pfVar47[1] = fVar264;
                pfVar47[2] = fVar265;
                pfVar47[3] = fVar266;
              }
              if (uVar57 + 1 == uVar44) goto LAB_005b73c2;
              pfVar38 = pfVar38 + uVar44;
              pfVar47 = local_68 + uVar44;
            }
            fVar232 = DAT_005d9038;
            uVar34 = (uint)uVar44;
            uVar43 = ~uVar34;
            if ((uVar7 & 3) != 0) {
              iVar40 = 0;
              do {
                *pfVar38 = (float)(-(uint)(*pfVar47 != fVar62) & (uint)fVar232);
                pfVar38 = pfVar38 + 1;
                pfVar47 = pfVar47 + 1;
                iVar40 = iVar40 + -1;
              } while (-(uVar7 & 3) != iVar40);
              uVar34 = uVar34 - iVar40;
            }
            fVar232 = DAT_005d9038;
            if (2 < uVar43 + uVar7) {
              lVar49 = 0;
              do {
                pfVar38[lVar49] = (float)(-(uint)(pfVar47[lVar49] != fVar62) & (uint)fVar232);
                pfVar38[lVar49 + 1] =
                     (float)(-(uint)(pfVar47[lVar49 + 1] != fVar62) & (uint)fVar232);
                pfVar38[lVar49 + 2] =
                     (float)(-(uint)(pfVar47[lVar49 + 2] != fVar62) & (uint)fVar232);
                pfVar38[lVar49 + 3] =
                     (float)(-(uint)(pfVar47[lVar49 + 3] != fVar62) & (uint)fVar232);
                lVar49 = lVar49 + 4;
              } while (uVar7 - uVar34 != (int)lVar49);
            }
          }
          goto LAB_005b73c2;
        }
LAB_005b73a9:
        pcVar55 = "expr: ex_eval(%d): bad right type %ld\n";
        puVar36 = (ulong *)0x0;
        lVar49 = lStack_80;
      }
      else {
        if (lStack_60 == 2) {
          if (lStack_80 - 0xeU < 2) {
            if (*(long *)(param_9 + 2) == 0xf) {
              pfVar38 = *(float **)param_9;
            }
            else {
              if (*(long *)(param_9 + 2) == 0xe) goto LAB_005c5996;
              param_9[2] = 2.10195e-44;
              param_9[3] = 0.0;
              pfVar38 = malloc((long)*(int *)(param_7 + 0x28f8) << 2);
              *(float **)param_9 = pfVar38;
            }
            uVar7 = _UNK_0065257c;
            uVar56 = _UNK_00652578;
            uVar50 = _UNK_00652574;
            uVar43 = _DAT_00652570;
            uVar34 = *(uint *)(param_7 + 0x28f8);
            if (0 < (int)uVar34) {
              uVar57 = (ulong)(uVar34 - 1);
              uVar44 = 0;
              pfVar47 = local_88;
              if ((6 < uVar34 - 1) &&
                 ((local_88 + uVar57 + 1 <= pfVar38 || (pfVar38 + uVar57 + 1 <= local_88)))) {
                uVar44 = uVar57 + 1 & 0xfffffffffffffff8;
                uVar52 = (uVar44 - 8 >> 3) + 1;
                if (uVar44 - 8 == 0) {
                  lVar49 = 0;
                }
                else {
                  uVar54 = uVar52 & 0x3ffffffffffffffe;
                  lVar49 = 0;
                  do {
                    pfVar47 = local_88 + lVar49;
                    fVar62 = pfVar47[1];
                    fVar232 = pfVar47[2];
                    fVar233 = pfVar47[3];
                    pfVar53 = local_88 + lVar49 + 4;
                    fVar234 = *pfVar53;
                    fVar235 = pfVar53[1];
                    fVar264 = pfVar53[2];
                    fVar265 = pfVar53[3];
                    pfVar53 = pfVar38 + lVar49;
                    *pfVar53 = (float)(-(uint)(*pfVar47 != local_68._0_4_) & uVar43);
                    pfVar53[1] = (float)(-(uint)(fVar62 != local_68._0_4_) & uVar50);
                    pfVar53[2] = (float)(-(uint)(fVar232 != local_68._0_4_) & uVar56);
                    pfVar53[3] = (float)(-(uint)(fVar233 != local_68._0_4_) & uVar7);
                    pfVar47 = pfVar38 + lVar49 + 4;
                    *pfVar47 = (float)(-(uint)(fVar234 != local_68._0_4_) & uVar43);
                    pfVar47[1] = (float)(-(uint)(fVar235 != local_68._0_4_) & uVar50);
                    pfVar47[2] = (float)(-(uint)(fVar264 != local_68._0_4_) & uVar56);
                    pfVar47[3] = (float)(-(uint)(fVar265 != local_68._0_4_) & uVar7);
                    pfVar47 = local_88 + lVar49 + 8;
                    fVar62 = pfVar47[1];
                    fVar232 = pfVar47[2];
                    fVar233 = pfVar47[3];
                    pfVar53 = local_88 + lVar49 + 0xc;
                    fVar234 = *pfVar53;
                    fVar235 = pfVar53[1];
                    fVar264 = pfVar53[2];
                    fVar265 = pfVar53[3];
                    pfVar53 = pfVar38 + lVar49 + 8;
                    *pfVar53 = (float)(-(uint)(*pfVar47 != local_68._0_4_) & uVar43);
                    pfVar53[1] = (float)(-(uint)(fVar62 != local_68._0_4_) & uVar50);
                    pfVar53[2] = (float)(-(uint)(fVar232 != local_68._0_4_) & uVar56);
                    pfVar53[3] = (float)(-(uint)(fVar233 != local_68._0_4_) & uVar7);
                    pfVar47 = pfVar38 + lVar49 + 0xc;
                    *pfVar47 = (float)(-(uint)(fVar234 != local_68._0_4_) & uVar43);
                    pfVar47[1] = (float)(-(uint)(fVar235 != local_68._0_4_) & uVar50);
                    pfVar47[2] = (float)(-(uint)(fVar264 != local_68._0_4_) & uVar56);
                    pfVar47[3] = (float)(-(uint)(fVar265 != local_68._0_4_) & uVar7);
                    lVar49 = lVar49 + 0x10;
                    uVar54 = uVar54 - 2;
                  } while (uVar54 != 0);
                }
                if ((uVar52 & 1) != 0) {
                  pfVar47 = local_88 + lVar49;
                  pfVar53 = local_88 + lVar49 + 4;
                  fVar62 = (float)(-(uint)(pfVar47[1] != local_68._0_4_) & _UNK_00652574);
                  fVar232 = (float)(-(uint)(pfVar47[2] != local_68._0_4_) & _UNK_00652578);
                  fVar233 = (float)(-(uint)(pfVar47[3] != local_68._0_4_) & _UNK_0065257c);
                  fVar234 = (float)(-(uint)(*pfVar53 != local_68._0_4_) & _DAT_00652570);
                  fVar235 = (float)(-(uint)(pfVar53[1] != local_68._0_4_) & _UNK_00652574);
                  fVar264 = (float)(-(uint)(pfVar53[2] != local_68._0_4_) & _UNK_00652578);
                  fVar265 = (float)(-(uint)(pfVar53[3] != local_68._0_4_) & _UNK_0065257c);
                  pfVar53 = pfVar38 + lVar49;
                  *pfVar53 = (float)(-(uint)(*pfVar47 != local_68._0_4_) & _DAT_00652570);
                  pfVar53[1] = fVar62;
                  pfVar53[2] = fVar232;
                  pfVar53[3] = fVar233;
                  pfVar47 = pfVar38 + lVar49 + 4;
                  *pfVar47 = fVar234;
                  pfVar47[1] = fVar235;
                  pfVar47[2] = fVar264;
                  pfVar47[3] = fVar265;
                }
                if (uVar57 + 1 == uVar44) goto LAB_005b73c2;
                pfVar38 = pfVar38 + uVar44;
                pfVar47 = local_88 + uVar44;
              }
              fVar62 = DAT_005d9038;
              uVar43 = (uint)uVar44;
              uVar50 = ~uVar43;
              if ((uVar34 & 3) != 0) {
                iVar40 = 0;
                do {
                  *pfVar38 = (float)(-(uint)(*pfVar47 != local_68._0_4_) & (uint)fVar62);
                  pfVar38 = pfVar38 + 1;
                  pfVar47 = pfVar47 + 1;
                  iVar40 = iVar40 + -1;
                } while (-(uVar34 & 3) != iVar40);
                uVar43 = uVar43 - iVar40;
              }
              fVar62 = DAT_005d9038;
              if (2 < uVar50 + uVar34) {
                lVar49 = 0;
                do {
                  pfVar38[lVar49] =
                       (float)(-(uint)(pfVar47[lVar49] != local_68._0_4_) & (uint)fVar62);
                  pfVar38[lVar49 + 1] =
                       (float)(-(uint)(pfVar47[lVar49 + 1] != local_68._0_4_) & (uint)fVar62);
                  pfVar38[lVar49 + 2] =
                       (float)(-(uint)(pfVar47[lVar49 + 2] != local_68._0_4_) & (uint)fVar62);
                  pfVar38[lVar49 + 3] =
                       (float)(-(uint)(pfVar47[lVar49 + 3] != local_68._0_4_) & (uint)fVar62);
                  lVar49 = lVar49 + 4;
                } while (uVar34 - uVar43 != (int)lVar49);
              }
            }
            goto LAB_005b73c2;
          }
          if (lStack_80 == 2) {
            if (*(long *)(param_9 + 2) == 0xf) {
              iVar40 = *(int *)(param_7 + 0x28f8);
              if (0 < iVar40) {
                uVar34 = (uint)DAT_005d9038 & -(uint)(local_88._0_4_ != local_68._0_4_);
                lVar49 = *(long *)param_9;
                uVar44 = 0;
                if (6 < iVar40 - 1U) {
                  uVar52 = (ulong)(iVar40 - 1U) + 1;
                  uVar44 = uVar52 & 0xfffffffffffffff8;
                  uVar54 = (uVar44 - 8 >> 3) + 1;
                  uVar57 = (ulong)((uint)uVar54 & 7);
                  if (uVar44 - 8 < 0x38) {
                    lVar45 = 0;
                  }
                  else {
                    uVar54 = uVar54 & 0xfffffffffffffff8;
                    lVar45 = 0;
                    do {
                      puVar4 = (uint *)(lVar49 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar49 + 0x10 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar49 + 0x20 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar49 + 0x30 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar49 + 0x40 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar49 + 0x50 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar49 + 0x60 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar49 + 0x70 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar49 + 0x80 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar49 + 0x90 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar49 + 0xa0 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar49 + 0xb0 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar49 + 0xc0 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar49 + 0xd0 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar49 + 0xe0 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar49 + 0xf0 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      lVar45 = lVar45 + 0x40;
                      uVar54 = uVar54 - 8;
                    } while (uVar54 != 0);
                  }
                  if (uVar57 != 0) {
                    lVar45 = lVar49 + lVar45 * 4;
                    lVar48 = 0;
                    do {
                      puVar4 = (uint *)(lVar45 + lVar48);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar45 + 0x10 + lVar48);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      lVar48 = lVar48 + 0x20;
                    } while (uVar57 * 0x20 != lVar48);
                  }
                  if (uVar52 == uVar44) goto LAB_005b73c2;
                  lVar49 = lVar49 + uVar44 * 4;
                }
                lVar45 = 0;
                do {
                  *(uint *)(lVar49 + lVar45 * 4) = uVar34;
                  lVar45 = lVar45 + 1;
                } while (iVar40 - (int)uVar44 != (int)lVar45);
              }
              goto LAB_005b73c2;
            }
            param_9[2] = 2.8026e-45;
            param_9[3] = 0.0;
            uVar34 = -(uint)(local_88._0_4_ != local_68._0_4_);
          }
          else {
            if (lStack_80 != 1) goto LAB_005b73a9;
            if (*(long *)(param_9 + 2) == 0xf) {
              iVar40 = *(int *)(param_7 + 0x28f8);
              if (0 < iVar40) {
                uVar34 = (uint)DAT_005d9038 & -(uint)((float)(long)local_88 != local_68._0_4_);
                lVar49 = *(long *)param_9;
                uVar44 = 0;
                if (6 < iVar40 - 1U) {
                  uVar52 = (ulong)(iVar40 - 1U) + 1;
                  uVar44 = uVar52 & 0xfffffffffffffff8;
                  uVar54 = (uVar44 - 8 >> 3) + 1;
                  uVar57 = (ulong)((uint)uVar54 & 7);
                  if (uVar44 - 8 < 0x38) {
                    lVar45 = 0;
                  }
                  else {
                    uVar54 = uVar54 & 0xfffffffffffffff8;
                    lVar45 = 0;
                    do {
                      puVar4 = (uint *)(lVar49 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar49 + 0x10 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar49 + 0x20 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar49 + 0x30 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar49 + 0x40 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar49 + 0x50 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar49 + 0x60 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar49 + 0x70 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar49 + 0x80 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar49 + 0x90 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar49 + 0xa0 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar49 + 0xb0 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar49 + 0xc0 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar49 + 0xd0 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar49 + 0xe0 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar49 + 0xf0 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      lVar45 = lVar45 + 0x40;
                      uVar54 = uVar54 - 8;
                    } while (uVar54 != 0);
                  }
                  if (uVar57 != 0) {
                    lVar45 = lVar49 + lVar45 * 4;
                    lVar48 = 0;
                    do {
                      puVar4 = (uint *)(lVar45 + lVar48);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar45 + 0x10 + lVar48);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      lVar48 = lVar48 + 0x20;
                    } while (uVar57 * 0x20 != lVar48);
                  }
                  if (uVar52 == uVar44) goto LAB_005b73c2;
                  lVar49 = lVar49 + uVar44 * 4;
                }
                lVar45 = 0;
                do {
                  *(uint *)(lVar49 + lVar45 * 4) = uVar34;
                  lVar45 = lVar45 + 1;
                } while (iVar40 - (int)uVar44 != (int)lVar45);
              }
              goto LAB_005b73c2;
            }
            param_9[2] = 2.8026e-45;
            param_9[3] = 0.0;
            uVar34 = -(uint)((float)(long)local_88 != local_68._0_4_);
          }
LAB_005b8456:
          *param_9 = (float)((uint)DAT_005d9038 & uVar34);
          goto LAB_005b73c2;
        }
        if (lStack_60 == 1) {
          if (lStack_80 - 0xeU < 2) {
            if (*(long *)(param_9 + 2) == 0xf) {
              pfVar38 = *(float **)param_9;
            }
            else {
              if (*(long *)(param_9 + 2) == 0xe) goto LAB_005c5996;
              param_9[2] = 2.10195e-44;
              param_9[3] = 0.0;
              pfVar38 = malloc((long)*(int *)(param_7 + 0x28f8) << 2);
              *(float **)param_9 = pfVar38;
            }
            uVar7 = _UNK_0065257c;
            uVar56 = _UNK_00652578;
            uVar50 = _UNK_00652574;
            uVar43 = _DAT_00652570;
            uVar34 = *(uint *)(param_7 + 0x28f8);
            if (0 < (int)uVar34) {
              fVar62 = (float)(long)local_68;
              uVar57 = (ulong)(uVar34 - 1);
              uVar44 = 0;
              pfVar47 = local_88;
              if ((6 < uVar34 - 1) &&
                 ((local_88 + uVar57 + 1 <= pfVar38 || (pfVar38 + uVar57 + 1 <= local_88)))) {
                uVar44 = uVar57 + 1 & 0xfffffffffffffff8;
                uVar52 = (uVar44 - 8 >> 3) + 1;
                if (uVar44 - 8 == 0) {
                  lVar49 = 0;
                }
                else {
                  uVar54 = uVar52 & 0x3ffffffffffffffe;
                  lVar49 = 0;
                  do {
                    pfVar47 = local_88 + lVar49;
                    fVar232 = pfVar47[1];
                    fVar233 = pfVar47[2];
                    fVar234 = pfVar47[3];
                    pfVar53 = local_88 + lVar49 + 4;
                    fVar235 = *pfVar53;
                    fVar264 = pfVar53[1];
                    fVar265 = pfVar53[2];
                    fVar266 = pfVar53[3];
                    pfVar53 = pfVar38 + lVar49;
                    *pfVar53 = (float)(-(uint)(*pfVar47 != fVar62) & uVar43);
                    pfVar53[1] = (float)(-(uint)(fVar232 != fVar62) & uVar50);
                    pfVar53[2] = (float)(-(uint)(fVar233 != fVar62) & uVar56);
                    pfVar53[3] = (float)(-(uint)(fVar234 != fVar62) & uVar7);
                    pfVar47 = pfVar38 + lVar49 + 4;
                    *pfVar47 = (float)(-(uint)(fVar235 != fVar62) & uVar43);
                    pfVar47[1] = (float)(-(uint)(fVar264 != fVar62) & uVar50);
                    pfVar47[2] = (float)(-(uint)(fVar265 != fVar62) & uVar56);
                    pfVar47[3] = (float)(-(uint)(fVar266 != fVar62) & uVar7);
                    pfVar47 = local_88 + lVar49 + 8;
                    fVar232 = pfVar47[1];
                    fVar233 = pfVar47[2];
                    fVar234 = pfVar47[3];
                    pfVar53 = local_88 + lVar49 + 0xc;
                    fVar235 = *pfVar53;
                    fVar264 = pfVar53[1];
                    fVar265 = pfVar53[2];
                    fVar266 = pfVar53[3];
                    pfVar53 = pfVar38 + lVar49 + 8;
                    *pfVar53 = (float)(-(uint)(*pfVar47 != fVar62) & uVar43);
                    pfVar53[1] = (float)(-(uint)(fVar232 != fVar62) & uVar50);
                    pfVar53[2] = (float)(-(uint)(fVar233 != fVar62) & uVar56);
                    pfVar53[3] = (float)(-(uint)(fVar234 != fVar62) & uVar7);
                    pfVar47 = pfVar38 + lVar49 + 0xc;
                    *pfVar47 = (float)(-(uint)(fVar235 != fVar62) & uVar43);
                    pfVar47[1] = (float)(-(uint)(fVar264 != fVar62) & uVar50);
                    pfVar47[2] = (float)(-(uint)(fVar265 != fVar62) & uVar56);
                    pfVar47[3] = (float)(-(uint)(fVar266 != fVar62) & uVar7);
                    lVar49 = lVar49 + 0x10;
                    uVar54 = uVar54 - 2;
                  } while (uVar54 != 0);
                }
                if ((uVar52 & 1) != 0) {
                  pfVar47 = local_88 + lVar49;
                  pfVar53 = local_88 + lVar49 + 4;
                  fVar232 = (float)(-(uint)(pfVar47[1] != fVar62) & _UNK_00652574);
                  fVar233 = (float)(-(uint)(pfVar47[2] != fVar62) & _UNK_00652578);
                  fVar234 = (float)(-(uint)(pfVar47[3] != fVar62) & _UNK_0065257c);
                  fVar235 = (float)(-(uint)(*pfVar53 != fVar62) & _DAT_00652570);
                  fVar264 = (float)(-(uint)(pfVar53[1] != fVar62) & _UNK_00652574);
                  fVar265 = (float)(-(uint)(pfVar53[2] != fVar62) & _UNK_00652578);
                  fVar266 = (float)(-(uint)(pfVar53[3] != fVar62) & _UNK_0065257c);
                  pfVar53 = pfVar38 + lVar49;
                  *pfVar53 = (float)(-(uint)(*pfVar47 != fVar62) & _DAT_00652570);
                  pfVar53[1] = fVar232;
                  pfVar53[2] = fVar233;
                  pfVar53[3] = fVar234;
                  pfVar47 = pfVar38 + lVar49 + 4;
                  *pfVar47 = fVar235;
                  pfVar47[1] = fVar264;
                  pfVar47[2] = fVar265;
                  pfVar47[3] = fVar266;
                }
                if (uVar57 + 1 == uVar44) goto LAB_005b73c2;
                pfVar38 = pfVar38 + uVar44;
                pfVar47 = local_88 + uVar44;
              }
              fVar232 = DAT_005d9038;
              uVar43 = (uint)uVar44;
              uVar50 = ~uVar43;
              if ((uVar34 & 3) != 0) {
                iVar40 = 0;
                do {
                  *pfVar38 = (float)(-(uint)(*pfVar47 != fVar62) & (uint)fVar232);
                  pfVar38 = pfVar38 + 1;
                  pfVar47 = pfVar47 + 1;
                  iVar40 = iVar40 + -1;
                } while (-(uVar34 & 3) != iVar40);
                uVar43 = uVar43 - iVar40;
              }
              fVar232 = DAT_005d9038;
              if (2 < uVar50 + uVar34) {
                lVar49 = 0;
                do {
                  pfVar38[lVar49] = (float)(-(uint)(pfVar47[lVar49] != fVar62) & (uint)fVar232);
                  pfVar38[lVar49 + 1] =
                       (float)(-(uint)(pfVar47[lVar49 + 1] != fVar62) & (uint)fVar232);
                  pfVar38[lVar49 + 2] =
                       (float)(-(uint)(pfVar47[lVar49 + 2] != fVar62) & (uint)fVar232);
                  pfVar38[lVar49 + 3] =
                       (float)(-(uint)(pfVar47[lVar49 + 3] != fVar62) & (uint)fVar232);
                  lVar49 = lVar49 + 4;
                } while (uVar34 - uVar43 != (int)lVar49);
              }
            }
            goto LAB_005b73c2;
          }
          if (lStack_80 == 2) {
            if (*(long *)(param_9 + 2) == 0xf) {
              iVar40 = *(int *)(param_7 + 0x28f8);
              if (0 < iVar40) {
                uVar34 = (uint)DAT_005d9038 & -(uint)((float)(long)local_68 != local_88._0_4_);
                lVar49 = *(long *)param_9;
                uVar44 = 0;
                if (6 < iVar40 - 1U) {
                  uVar52 = (ulong)(iVar40 - 1U) + 1;
                  uVar44 = uVar52 & 0xfffffffffffffff8;
                  uVar54 = (uVar44 - 8 >> 3) + 1;
                  uVar57 = (ulong)((uint)uVar54 & 7);
                  if (uVar44 - 8 < 0x38) {
                    lVar45 = 0;
                  }
                  else {
                    uVar54 = uVar54 & 0xfffffffffffffff8;
                    lVar45 = 0;
                    do {
                      puVar4 = (uint *)(lVar49 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar49 + 0x10 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar49 + 0x20 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar49 + 0x30 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar49 + 0x40 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar49 + 0x50 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar49 + 0x60 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar49 + 0x70 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar49 + 0x80 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar49 + 0x90 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar49 + 0xa0 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar49 + 0xb0 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar49 + 0xc0 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar49 + 0xd0 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar49 + 0xe0 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar49 + 0xf0 + lVar45 * 4);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      lVar45 = lVar45 + 0x40;
                      uVar54 = uVar54 - 8;
                    } while (uVar54 != 0);
                  }
                  if (uVar57 != 0) {
                    lVar45 = lVar49 + lVar45 * 4;
                    lVar48 = 0;
                    do {
                      puVar4 = (uint *)(lVar45 + lVar48);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      puVar4 = (uint *)(lVar45 + 0x10 + lVar48);
                      *puVar4 = uVar34;
                      puVar4[1] = uVar34;
                      puVar4[2] = uVar34;
                      puVar4[3] = uVar34;
                      lVar48 = lVar48 + 0x20;
                    } while (uVar57 * 0x20 != lVar48);
                  }
                  if (uVar52 == uVar44) goto LAB_005b73c2;
                  lVar49 = lVar49 + uVar44 * 4;
                }
                lVar45 = 0;
                do {
                  *(uint *)(lVar49 + lVar45 * 4) = uVar34;
                  lVar45 = lVar45 + 1;
                } while (iVar40 - (int)uVar44 != (int)lVar45);
              }
              goto LAB_005b73c2;
            }
            param_9[2] = 2.8026e-45;
            param_9[3] = 0.0;
            uVar34 = -(uint)((float)(long)local_68 != local_88._0_4_);
            goto LAB_005b8456;
          }
          if (lStack_80 == 1) {
            if (*(long *)(param_9 + 2) == 0xf) {
              if (local_68 == local_88) {
                fVar62 = 0.0;
              }
              else {
                fVar62 = DAT_005d9038;
              }
              iVar40 = *(int *)(param_7 + 0x28f8);
              if (0 < iVar40) {
                lVar49 = *(long *)param_9;
                uVar44 = 0;
                if (6 < iVar40 - 1U) {
                  uVar52 = (ulong)(iVar40 - 1U) + 1;
                  uVar44 = uVar52 & 0xfffffffffffffff8;
                  uVar54 = (uVar44 - 8 >> 3) + 1;
                  uVar57 = (ulong)((uint)uVar54 & 7);
                  if (uVar44 - 8 < 0x38) {
                    lVar45 = 0;
                  }
                  else {
                    uVar54 = uVar54 & 0xfffffffffffffff8;
                    lVar45 = 0;
                    do {
                      pfVar38 = (float *)(lVar49 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      lVar45 = lVar45 + 0x40;
                      uVar54 = uVar54 - 8;
                    } while (uVar54 != 0);
                  }
                  if (uVar57 != 0) {
                    lVar45 = lVar49 + lVar45 * 4;
                    lVar48 = 0;
                    do {
                      pfVar38 = (float *)(lVar45 + lVar48);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      lVar48 = lVar48 + 0x20;
                    } while (uVar57 * 0x20 != lVar48);
                  }
                  if (uVar52 == uVar44) goto LAB_005b73c2;
                  lVar49 = lVar49 + uVar44 * 4;
                }
                lVar45 = 0;
                do {
                  *(float *)(lVar49 + lVar45 * 4) = fVar62;
                  lVar45 = lVar45 + 1;
                } while (iVar40 - (int)uVar44 != (int)lVar45);
              }
              goto LAB_005b73c2;
            }
            param_9[2] = 1.4013e-45;
            param_9[3] = 0.0;
            bVar60 = local_68 == local_88;
LAB_005bcba7:
            *(ulong *)param_9 = (ulong)!bVar60;
            goto LAB_005b73c2;
          }
          goto LAB_005b73a9;
        }
        pcVar55 = "expr: ex_eval(%d): bad left type %ld\n";
        lVar49 = lStack_60;
      }
      uVar46 = 0x53b;
      goto LAB_005b73bb;
    }
    if (0x60004 < (long)uVar57) {
      if (uVar57 != 0x60005) {
        if (uVar57 != 0x70006) {
          if (uVar57 != 0x80007) goto code_r0x005b4c3c;
          puVar36 = ex_eval(0,param_2,param_3,param_4,param_5,param_6,param_7,puVar36,
                            (float *)&local_68,(undefined *)((ulong)param_10 & 0xffffffff),param_11,
                            param_12);
          puVar36 = ex_eval(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,
                            puVar36,(float *)&local_88,(undefined *)((ulong)param_10 & 0xffffffff),
                            param_11,param_12);
          uVar236 = in_XMM3._0_8_;
          uVar63 = in_XMM2._0_8_;
          uVar44 = extraout_XMM0_00._0_8_;
          if (lStack_60 - 0xeU < 2) {
            if (*(long *)(param_9 + 2) == 0xf) {
              pfVar38 = *(float **)param_9;
            }
            else {
              if (*(long *)(param_9 + 2) == 0xe) goto LAB_005c5996;
              param_9[2] = 2.10195e-44;
              param_9[3] = 0.0;
              pfVar38 = malloc((long)*(int *)(param_7 + 0x28f8) << 2);
              uVar44 = extraout_XMM0_09._0_8_;
              uVar236 = in_XMM3._0_8_;
              uVar63 = in_XMM2._0_8_;
              *(float **)param_9 = pfVar38;
            }
            if (lStack_80 - 0xeU < 2) {
              uVar34 = *(uint *)(param_7 + 0x28f8);
              if ((int)uVar34 < 1) goto LAB_005b73c2;
              uVar57 = (ulong)(uVar34 - 1);
              uVar44 = 0;
              if (uVar34 - 1 < 7) {
LAB_005ba5b4:
                pfVar47 = local_68;
                pfVar53 = local_88;
              }
              else {
                if ((pfVar38 < local_68 + uVar57 + 1 && local_68 < pfVar38 + uVar57 + 1) ||
                   (pfVar38 < local_88 + uVar57 + 1 && local_88 < pfVar38 + uVar57 + 1))
                goto LAB_005ba5b4;
                uVar44 = uVar57 + 1 & 0xfffffffffffffff8;
                uVar52 = 0;
                do {
                  pfVar47 = local_68 + uVar52;
                  fVar62 = pfVar47[1];
                  fVar232 = pfVar47[2];
                  fVar233 = pfVar47[3];
                  pfVar53 = local_68 + uVar52 + 4;
                  fVar234 = *pfVar53;
                  fVar235 = pfVar53[1];
                  fVar264 = pfVar53[2];
                  fVar265 = pfVar53[3];
                  pfVar53 = local_88 + uVar52;
                  fVar266 = pfVar53[1];
                  fVar28 = pfVar53[2];
                  fVar29 = pfVar53[3];
                  pfVar2 = local_88 + uVar52 + 4;
                  fVar30 = *pfVar2;
                  fVar31 = pfVar2[1];
                  fVar32 = pfVar2[2];
                  fVar33 = pfVar2[3];
                  pfVar2 = pfVar38 + uVar52;
                  *pfVar2 = (float)((int)*pfVar53 & (int)*pfVar47);
                  pfVar2[1] = (float)((int)fVar266 & (int)fVar62);
                  pfVar2[2] = (float)((int)fVar28 & (int)fVar232);
                  pfVar2[3] = (float)((int)fVar29 & (int)fVar233);
                  pfVar47 = pfVar38 + uVar52 + 4;
                  *pfVar47 = (float)((int)fVar30 & (int)fVar234);
                  pfVar47[1] = (float)((int)fVar31 & (int)fVar235);
                  pfVar47[2] = (float)((int)fVar32 & (int)fVar264);
                  pfVar47[3] = (float)((int)fVar33 & (int)fVar265);
                  uVar52 = uVar52 + 8;
                } while (uVar44 != uVar52);
                pfVar47 = local_68 + uVar44;
                pfVar38 = pfVar38 + uVar44;
                pfVar53 = local_88 + uVar44;
                if (uVar57 + 1 == uVar44) goto LAB_005b73c2;
              }
              uVar50 = (uint)uVar44 + 1;
              uVar43 = (uint)uVar44;
              if ((uVar34 & 1) != 0) {
                *pfVar38 = (float)((int)*pfVar53 & (int)*pfVar47);
                pfVar38 = pfVar38 + 1;
                pfVar53 = pfVar53 + 1;
                pfVar47 = pfVar47 + 1;
                uVar43 = uVar50;
              }
              if (uVar34 != uVar50) {
                lVar49 = 0;
                do {
                  pfVar38[lVar49] = (float)((int)pfVar53[lVar49] & (int)pfVar47[lVar49]);
                  pfVar38[lVar49 + 1] = (float)((int)pfVar53[lVar49 + 1] & (int)pfVar47[lVar49 + 1])
                  ;
                  lVar49 = lVar49 + 2;
                } while (uVar34 - uVar43 != (int)lVar49);
              }
              goto LAB_005b73c2;
            }
            if (lStack_80 == 2) {
              uVar34 = *(uint *)(param_7 + 0x28f8);
              if (0 < (int)uVar34) {
                uVar43 = (uint)local_88._0_4_;
                uVar44 = (ulong)(uVar34 - 1);
                uVar57 = 0;
                pfVar47 = local_68;
                if ((6 < uVar34 - 1) &&
                   ((local_68 + uVar44 + 1 <= pfVar38 || (pfVar38 + uVar44 + 1 <= local_68)))) {
                  uVar57 = uVar44 + 1 & 0xfffffffffffffff8;
                  auVar82._4_4_ = uVar43;
                  auVar82._0_4_ = uVar43;
                  auVar82._8_4_ = uVar43;
                  auVar82._12_4_ = uVar43;
                  uVar52 = (uVar57 - 8 >> 3) + 1;
                  if (uVar57 - 8 == 0) {
                    lVar49 = 0;
                  }
                  else {
                    uVar54 = uVar52 & 0x3ffffffffffffffe;
                    lVar49 = 0;
                    do {
                      pfVar47 = local_68 + lVar49;
                      pfVar53 = local_68 + lVar49 + 4;
                      auVar127._0_4_ = (int)*pfVar47;
                      auVar127._4_4_ = (int)pfVar47[1];
                      auVar127._8_4_ = (int)pfVar47[2];
                      auVar127._12_4_ = (int)pfVar47[3];
                      auVar194._0_4_ = (int)*pfVar53;
                      auVar194._4_4_ = (int)pfVar53[1];
                      auVar194._8_4_ = (int)pfVar53[2];
                      auVar194._12_4_ = (int)pfVar53[3];
                      auVar127 = auVar127 & auVar82;
                      auVar194 = auVar194 & auVar82;
                      pfVar47 = pfVar38 + lVar49;
                      *pfVar47 = (float)auVar127._0_4_;
                      pfVar47[1] = (float)auVar127._4_4_;
                      pfVar47[2] = (float)auVar127._8_4_;
                      pfVar47[3] = (float)auVar127._12_4_;
                      pfVar47 = pfVar38 + lVar49 + 4;
                      *pfVar47 = (float)auVar194._0_4_;
                      pfVar47[1] = (float)auVar194._4_4_;
                      pfVar47[2] = (float)auVar194._8_4_;
                      pfVar47[3] = (float)auVar194._12_4_;
                      pfVar47 = local_68 + lVar49 + 8;
                      pfVar53 = local_68 + lVar49 + 0xc;
                      auVar128._0_4_ = (int)*pfVar47;
                      auVar128._4_4_ = (int)pfVar47[1];
                      auVar128._8_4_ = (int)pfVar47[2];
                      auVar128._12_4_ = (int)pfVar47[3];
                      auVar195._0_4_ = (int)*pfVar53;
                      auVar195._4_4_ = (int)pfVar53[1];
                      auVar195._8_4_ = (int)pfVar53[2];
                      auVar195._12_4_ = (int)pfVar53[3];
                      auVar128 = auVar128 & auVar82;
                      auVar195 = auVar195 & auVar82;
                      pfVar47 = pfVar38 + lVar49 + 8;
                      *pfVar47 = (float)auVar128._0_4_;
                      pfVar47[1] = (float)auVar128._4_4_;
                      pfVar47[2] = (float)auVar128._8_4_;
                      pfVar47[3] = (float)auVar128._12_4_;
                      pfVar47 = pfVar38 + lVar49 + 0xc;
                      *pfVar47 = (float)auVar195._0_4_;
                      pfVar47[1] = (float)auVar195._4_4_;
                      pfVar47[2] = (float)auVar195._8_4_;
                      pfVar47[3] = (float)auVar195._12_4_;
                      lVar49 = lVar49 + 0x10;
                      uVar54 = uVar54 - 2;
                    } while (uVar54 != 0);
                  }
                  if ((uVar52 & 1) != 0) {
                    pfVar47 = local_68 + lVar49;
                    pfVar53 = local_68 + lVar49 + 4;
                    auVar168._0_4_ = (int)*pfVar47;
                    auVar168._4_4_ = (int)pfVar47[1];
                    auVar168._8_4_ = (int)pfVar47[2];
                    auVar168._12_4_ = (int)pfVar47[3];
                    auVar228._0_4_ = (int)*pfVar53;
                    auVar228._4_4_ = (int)pfVar53[1];
                    auVar228._8_4_ = (int)pfVar53[2];
                    auVar228._12_4_ = (int)pfVar53[3];
                    auVar168 = auVar168 & auVar82;
                    auVar228 = auVar228 & auVar82;
                    auVar98._0_4_ = (float)auVar168._0_4_;
                    auVar98._4_4_ = (float)auVar168._4_4_;
                    auVar98._8_4_ = (float)auVar168._8_4_;
                    auVar98._12_4_ = (float)auVar168._12_4_;
                    *(undefined1 (*) [16])(pfVar38 + lVar49) = auVar98;
                    pfVar47 = pfVar38 + lVar49 + 4;
                    *pfVar47 = (float)auVar228._0_4_;
                    pfVar47[1] = (float)auVar228._4_4_;
                    pfVar47[2] = (float)auVar228._8_4_;
                    pfVar47[3] = (float)auVar228._12_4_;
                  }
                  if (uVar44 + 1 == uVar57) goto LAB_005b73c2;
                  pfVar38 = pfVar38 + uVar57;
                  pfVar47 = local_68 + uVar57;
                }
                uVar56 = (uint)uVar57;
                uVar50 = ~uVar56;
                if ((uVar34 & 3) != 0) {
                  iVar40 = 0;
                  do {
                    *pfVar38 = (float)(int)((int)*pfVar47 & uVar43);
                    pfVar38 = pfVar38 + 1;
                    pfVar47 = pfVar47 + 1;
                    iVar40 = iVar40 + -1;
                  } while (-(uVar34 & 3) != iVar40);
                  uVar56 = uVar56 - iVar40;
                }
                if (2 < uVar50 + uVar34) {
                  lVar49 = 0;
                  do {
                    pfVar38[lVar49] = (float)(int)((int)pfVar47[lVar49] & uVar43);
                    pfVar38[lVar49 + 1] = (float)(int)((int)pfVar47[lVar49 + 1] & uVar43);
                    pfVar38[lVar49 + 2] = (float)(int)((int)pfVar47[lVar49 + 2] & uVar43);
                    pfVar38[lVar49 + 3] = (float)(int)((int)pfVar47[lVar49 + 3] & uVar43);
                    lVar49 = lVar49 + 4;
                  } while (uVar34 - uVar56 != (int)lVar49);
                }
              }
              goto LAB_005b73c2;
            }
            if (lStack_80 == 1) {
              uVar34 = *(uint *)(param_7 + 0x28f8);
              if (0 < (int)uVar34) {
                uVar43 = (uint)(float)(long)local_88;
                uVar44 = (ulong)(uVar34 - 1);
                uVar57 = 0;
                pfVar47 = local_68;
                if ((6 < uVar34 - 1) &&
                   ((local_68 + uVar44 + 1 <= pfVar38 || (pfVar38 + uVar44 + 1 <= local_68)))) {
                  uVar57 = uVar44 + 1 & 0xfffffffffffffff8;
                  auVar66._4_4_ = uVar43;
                  auVar66._0_4_ = uVar43;
                  auVar66._8_4_ = uVar43;
                  auVar66._12_4_ = uVar43;
                  uVar52 = (uVar57 - 8 >> 3) + 1;
                  if (uVar57 - 8 == 0) {
                    lVar49 = 0;
                  }
                  else {
                    uVar54 = uVar52 & 0x3ffffffffffffffe;
                    lVar49 = 0;
                    do {
                      pfVar47 = local_68 + lVar49;
                      pfVar53 = local_68 + lVar49 + 4;
                      auVar104._0_4_ = (int)*pfVar47;
                      auVar104._4_4_ = (int)pfVar47[1];
                      auVar104._8_4_ = (int)pfVar47[2];
                      auVar104._12_4_ = (int)pfVar47[3];
                      auVar173._0_4_ = (int)*pfVar53;
                      auVar173._4_4_ = (int)pfVar53[1];
                      auVar173._8_4_ = (int)pfVar53[2];
                      auVar173._12_4_ = (int)pfVar53[3];
                      auVar104 = auVar104 & auVar66;
                      auVar173 = auVar173 & auVar66;
                      pfVar47 = pfVar38 + lVar49;
                      *pfVar47 = (float)auVar104._0_4_;
                      pfVar47[1] = (float)auVar104._4_4_;
                      pfVar47[2] = (float)auVar104._8_4_;
                      pfVar47[3] = (float)auVar104._12_4_;
                      pfVar47 = pfVar38 + lVar49 + 4;
                      *pfVar47 = (float)auVar173._0_4_;
                      pfVar47[1] = (float)auVar173._4_4_;
                      pfVar47[2] = (float)auVar173._8_4_;
                      pfVar47[3] = (float)auVar173._12_4_;
                      pfVar47 = local_68 + lVar49 + 8;
                      pfVar53 = local_68 + lVar49 + 0xc;
                      auVar105._0_4_ = (int)*pfVar47;
                      auVar105._4_4_ = (int)pfVar47[1];
                      auVar105._8_4_ = (int)pfVar47[2];
                      auVar105._12_4_ = (int)pfVar47[3];
                      auVar174._0_4_ = (int)*pfVar53;
                      auVar174._4_4_ = (int)pfVar53[1];
                      auVar174._8_4_ = (int)pfVar53[2];
                      auVar174._12_4_ = (int)pfVar53[3];
                      auVar105 = auVar105 & auVar66;
                      auVar174 = auVar174 & auVar66;
                      pfVar47 = pfVar38 + lVar49 + 8;
                      *pfVar47 = (float)auVar105._0_4_;
                      pfVar47[1] = (float)auVar105._4_4_;
                      pfVar47[2] = (float)auVar105._8_4_;
                      pfVar47[3] = (float)auVar105._12_4_;
                      pfVar47 = pfVar38 + lVar49 + 0xc;
                      *pfVar47 = (float)auVar174._0_4_;
                      pfVar47[1] = (float)auVar174._4_4_;
                      pfVar47[2] = (float)auVar174._8_4_;
                      pfVar47[3] = (float)auVar174._12_4_;
                      lVar49 = lVar49 + 0x10;
                      uVar54 = uVar54 - 2;
                    } while (uVar54 != 0);
                  }
                  if ((uVar52 & 1) != 0) {
                    pfVar47 = local_68 + lVar49;
                    pfVar53 = local_68 + lVar49 + 4;
                    auVar157._0_4_ = (int)*pfVar47;
                    auVar157._4_4_ = (int)pfVar47[1];
                    auVar157._8_4_ = (int)pfVar47[2];
                    auVar157._12_4_ = (int)pfVar47[3];
                    auVar217._0_4_ = (int)*pfVar53;
                    auVar217._4_4_ = (int)pfVar53[1];
                    auVar217._8_4_ = (int)pfVar53[2];
                    auVar217._12_4_ = (int)pfVar53[3];
                    auVar157 = auVar157 & auVar66;
                    auVar217 = auVar217 & auVar66;
                    auVar87._0_4_ = (float)auVar157._0_4_;
                    auVar87._4_4_ = (float)auVar157._4_4_;
                    auVar87._8_4_ = (float)auVar157._8_4_;
                    auVar87._12_4_ = (float)auVar157._12_4_;
                    *(undefined1 (*) [16])(pfVar38 + lVar49) = auVar87;
                    pfVar47 = pfVar38 + lVar49 + 4;
                    *pfVar47 = (float)auVar217._0_4_;
                    pfVar47[1] = (float)auVar217._4_4_;
                    pfVar47[2] = (float)auVar217._8_4_;
                    pfVar47[3] = (float)auVar217._12_4_;
                  }
                  if (uVar44 + 1 == uVar57) goto LAB_005b73c2;
                  pfVar38 = pfVar38 + uVar57;
                  pfVar47 = local_68 + uVar57;
                }
                uVar56 = (uint)uVar57;
                uVar50 = ~uVar56;
                if ((uVar34 & 3) != 0) {
                  iVar40 = 0;
                  do {
                    *pfVar38 = (float)(int)((int)*pfVar47 & uVar43);
                    pfVar38 = pfVar38 + 1;
                    pfVar47 = pfVar47 + 1;
                    iVar40 = iVar40 + -1;
                  } while (-(uVar34 & 3) != iVar40);
                  uVar56 = uVar56 - iVar40;
                }
                if (2 < uVar50 + uVar34) {
                  lVar49 = 0;
                  do {
                    pfVar38[lVar49] = (float)(int)((int)pfVar47[lVar49] & uVar43);
                    pfVar38[lVar49 + 1] = (float)(int)((int)pfVar47[lVar49 + 1] & uVar43);
                    pfVar38[lVar49 + 2] = (float)(int)((int)pfVar47[lVar49 + 2] & uVar43);
                    pfVar38[lVar49 + 3] = (float)(int)((int)pfVar47[lVar49 + 3] & uVar43);
                    lVar49 = lVar49 + 4;
                  } while (uVar34 - uVar56 != (int)lVar49);
                }
              }
              goto LAB_005b73c2;
            }
          }
          else if (lStack_60 == 2) {
            if (lStack_80 - 0xeU < 2) {
              if (*(long *)(param_9 + 2) != 0xf) {
                if (*(long *)(param_9 + 2) == 0xe) goto LAB_005c5996;
                param_9[2] = 2.10195e-44;
                param_9[3] = 0.0;
                pvVar37 = malloc((long)*(int *)(param_7 + 0x28f8) << 2);
                *(void **)param_9 = pvVar37;
              }
              uVar34 = *(uint *)(param_7 + 0x28f8);
              if (0 < (int)uVar34) {
                pfVar38 = *(float **)param_9;
                uVar43 = (uint)local_68._0_4_;
                uVar44 = (ulong)(uVar34 - 1);
                uVar57 = 0;
                pfVar47 = local_88;
                if ((6 < uVar34 - 1) &&
                   ((local_88 + uVar44 + 1 <= pfVar38 || (pfVar38 + uVar44 + 1 <= local_88)))) {
                  uVar57 = uVar44 + 1 & 0xfffffffffffffff8;
                  auVar76._4_4_ = uVar43;
                  auVar76._0_4_ = uVar43;
                  auVar76._8_4_ = uVar43;
                  auVar76._12_4_ = uVar43;
                  uVar52 = (uVar57 - 8 >> 3) + 1;
                  if (uVar57 - 8 == 0) {
                    lVar49 = 0;
                  }
                  else {
                    uVar54 = uVar52 & 0x3ffffffffffffffe;
                    lVar49 = 0;
                    do {
                      pfVar47 = local_88 + lVar49;
                      pfVar53 = local_88 + lVar49 + 4;
                      auVar121._0_4_ = (int)*pfVar47;
                      auVar121._4_4_ = (int)pfVar47[1];
                      auVar121._8_4_ = (int)pfVar47[2];
                      auVar121._12_4_ = (int)pfVar47[3];
                      auVar188._0_4_ = (int)*pfVar53;
                      auVar188._4_4_ = (int)pfVar53[1];
                      auVar188._8_4_ = (int)pfVar53[2];
                      auVar188._12_4_ = (int)pfVar53[3];
                      auVar121 = auVar121 & auVar76;
                      auVar188 = auVar188 & auVar76;
                      pfVar47 = pfVar38 + lVar49;
                      *pfVar47 = (float)auVar121._0_4_;
                      pfVar47[1] = (float)auVar121._4_4_;
                      pfVar47[2] = (float)auVar121._8_4_;
                      pfVar47[3] = (float)auVar121._12_4_;
                      pfVar47 = pfVar38 + lVar49 + 4;
                      *pfVar47 = (float)auVar188._0_4_;
                      pfVar47[1] = (float)auVar188._4_4_;
                      pfVar47[2] = (float)auVar188._8_4_;
                      pfVar47[3] = (float)auVar188._12_4_;
                      pfVar47 = local_88 + lVar49 + 8;
                      pfVar53 = local_88 + lVar49 + 0xc;
                      auVar122._0_4_ = (int)*pfVar47;
                      auVar122._4_4_ = (int)pfVar47[1];
                      auVar122._8_4_ = (int)pfVar47[2];
                      auVar122._12_4_ = (int)pfVar47[3];
                      auVar189._0_4_ = (int)*pfVar53;
                      auVar189._4_4_ = (int)pfVar53[1];
                      auVar189._8_4_ = (int)pfVar53[2];
                      auVar189._12_4_ = (int)pfVar53[3];
                      auVar122 = auVar122 & auVar76;
                      auVar189 = auVar189 & auVar76;
                      pfVar47 = pfVar38 + lVar49 + 8;
                      *pfVar47 = (float)auVar122._0_4_;
                      pfVar47[1] = (float)auVar122._4_4_;
                      pfVar47[2] = (float)auVar122._8_4_;
                      pfVar47[3] = (float)auVar122._12_4_;
                      pfVar47 = pfVar38 + lVar49 + 0xc;
                      *pfVar47 = (float)auVar189._0_4_;
                      pfVar47[1] = (float)auVar189._4_4_;
                      pfVar47[2] = (float)auVar189._8_4_;
                      pfVar47[3] = (float)auVar189._12_4_;
                      lVar49 = lVar49 + 0x10;
                      uVar54 = uVar54 - 2;
                    } while (uVar54 != 0);
                  }
                  if ((uVar52 & 1) != 0) {
                    pfVar47 = local_88 + lVar49;
                    pfVar53 = local_88 + lVar49 + 4;
                    auVar164._0_4_ = (int)*pfVar47;
                    auVar164._4_4_ = (int)pfVar47[1];
                    auVar164._8_4_ = (int)pfVar47[2];
                    auVar164._12_4_ = (int)pfVar47[3];
                    auVar224._0_4_ = (int)*pfVar53;
                    auVar224._4_4_ = (int)pfVar53[1];
                    auVar224._8_4_ = (int)pfVar53[2];
                    auVar224._12_4_ = (int)pfVar53[3];
                    auVar164 = auVar164 & auVar76;
                    auVar224 = auVar224 & auVar76;
                    auVar95._0_4_ = (float)auVar164._0_4_;
                    auVar95._4_4_ = (float)auVar164._4_4_;
                    auVar95._8_4_ = (float)auVar164._8_4_;
                    auVar95._12_4_ = (float)auVar164._12_4_;
                    *(undefined1 (*) [16])(pfVar38 + lVar49) = auVar95;
                    pfVar47 = pfVar38 + lVar49 + 4;
                    *pfVar47 = (float)auVar224._0_4_;
                    pfVar47[1] = (float)auVar224._4_4_;
                    pfVar47[2] = (float)auVar224._8_4_;
                    pfVar47[3] = (float)auVar224._12_4_;
                  }
                  if (uVar44 + 1 == uVar57) goto LAB_005b73c2;
                  pfVar38 = pfVar38 + uVar57;
                  pfVar47 = local_88 + uVar57;
                }
                uVar56 = (uint)uVar57;
                uVar50 = ~uVar56;
                if ((uVar34 & 3) != 0) {
                  iVar40 = 0;
                  do {
                    *pfVar38 = (float)(int)((int)*pfVar47 & uVar43);
                    pfVar38 = pfVar38 + 1;
                    pfVar47 = pfVar47 + 1;
                    iVar40 = iVar40 + -1;
                  } while (-(uVar34 & 3) != iVar40);
                  uVar56 = uVar56 - iVar40;
                }
                if (2 < uVar50 + uVar34) {
                  lVar49 = 0;
                  do {
                    pfVar38[lVar49] = (float)(int)((int)pfVar47[lVar49] & uVar43);
                    pfVar38[lVar49 + 1] = (float)(int)((int)pfVar47[lVar49 + 1] & uVar43);
                    pfVar38[lVar49 + 2] = (float)(int)((int)pfVar47[lVar49 + 2] & uVar43);
                    pfVar38[lVar49 + 3] = (float)(int)((int)pfVar47[lVar49 + 3] & uVar43);
                    lVar49 = lVar49 + 4;
                  } while (uVar34 - uVar56 != (int)lVar49);
                }
              }
              goto LAB_005b73c2;
            }
            if (lStack_80 == 2) {
              if (*(long *)(param_9 + 2) == 0xf) {
                iVar40 = *(int *)(param_7 + 0x28f8);
                if (0 < iVar40) {
                  fVar62 = (float)((int)local_88._0_4_ & (int)local_68._0_4_);
                  lVar49 = *(long *)param_9;
                  uVar44 = 0;
                  if (6 < iVar40 - 1U) {
                    uVar52 = (ulong)(iVar40 - 1U) + 1;
                    uVar44 = uVar52 & 0xfffffffffffffff8;
                    uVar54 = (uVar44 - 8 >> 3) + 1;
                    uVar57 = (ulong)((uint)uVar54 & 7);
                    if (uVar44 - 8 < 0x38) {
                      lVar45 = 0;
                    }
                    else {
                      uVar54 = uVar54 & 0xfffffffffffffff8;
                      lVar45 = 0;
                      do {
                        pfVar38 = (float *)(lVar49 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar45 = lVar45 + 0x40;
                        uVar54 = uVar54 - 8;
                      } while (uVar54 != 0);
                    }
                    if (uVar57 != 0) {
                      lVar45 = lVar49 + lVar45 * 4;
                      lVar48 = 0;
                      do {
                        pfVar38 = (float *)(lVar45 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar48 = lVar48 + 0x20;
                      } while (uVar57 * 0x20 != lVar48);
                    }
                    if (uVar52 == uVar44) goto LAB_005b73c2;
                    lVar49 = lVar49 + uVar44 * 4;
                  }
                  lVar45 = 0;
                  do {
                    *(float *)(lVar49 + lVar45 * 4) = fVar62;
                    lVar45 = lVar45 + 1;
                  } while (iVar40 - (int)uVar44 != (int)lVar45);
                }
                goto LAB_005b73c2;
              }
              param_9[2] = 2.8026e-45;
              param_9[3] = 0.0;
              fVar62 = local_68._0_4_;
LAB_005bcff6:
              uVar34 = (int)local_88._0_4_ & (int)fVar62;
              goto LAB_005bd139;
            }
            if (lStack_80 == 1) {
              if (*(long *)(param_9 + 2) == 0xf) {
                iVar40 = *(int *)(param_7 + 0x28f8);
                if (0 < iVar40) {
                  fVar62 = (float)(int)((int)local_68._0_4_ & (uint)local_88._0_4_);
                  lVar49 = *(long *)param_9;
                  uVar44 = 0;
                  if (6 < iVar40 - 1U) {
                    uVar52 = (ulong)(iVar40 - 1U) + 1;
                    uVar44 = uVar52 & 0xfffffffffffffff8;
                    uVar54 = (uVar44 - 8 >> 3) + 1;
                    uVar57 = (ulong)((uint)uVar54 & 7);
                    if (uVar44 - 8 < 0x38) {
                      lVar45 = 0;
                    }
                    else {
                      uVar54 = uVar54 & 0xfffffffffffffff8;
                      lVar45 = 0;
                      do {
                        pfVar38 = (float *)(lVar49 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar45 = lVar45 + 0x40;
                        uVar54 = uVar54 - 8;
                      } while (uVar54 != 0);
                    }
                    if (uVar57 != 0) {
                      lVar45 = lVar49 + lVar45 * 4;
                      lVar48 = 0;
                      do {
                        pfVar38 = (float *)(lVar45 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar48 = lVar48 + 0x20;
                      } while (uVar57 * 0x20 != lVar48);
                    }
                    if (uVar52 == uVar44) goto LAB_005b73c2;
                    lVar49 = lVar49 + uVar44 * 4;
                  }
                  lVar45 = 0;
                  do {
                    *(float *)(lVar49 + lVar45 * 4) = fVar62;
                    lVar45 = lVar45 + 1;
                  } while (iVar40 - (int)uVar44 != (int)lVar45);
                }
                goto LAB_005b73c2;
              }
              param_9[2] = 2.8026e-45;
              param_9[3] = 0.0;
              uVar34 = (int)local_68._0_4_ & (uint)local_88._0_4_;
              goto LAB_005bd0bf;
            }
          }
          else {
            if (lStack_60 != 1) {
              pcVar55 = "expr: ex_eval(%d): bad left type %ld\n";
              uVar46 = 0x546;
              lVar49 = lStack_60;
              goto LAB_005b73bb;
            }
            if (lStack_80 - 0xeU < 2) {
              if (*(long *)(param_9 + 2) != 0xf) {
                if (*(long *)(param_9 + 2) == 0xe) goto LAB_005c5996;
                param_9[2] = 2.10195e-44;
                param_9[3] = 0.0;
                pvVar37 = malloc((long)*(int *)(param_7 + 0x28f8) << 2);
                *(void **)param_9 = pvVar37;
              }
              uVar34 = *(uint *)(param_7 + 0x28f8);
              if (0 < (int)uVar34) {
                pfVar38 = *(float **)param_9;
                uVar43 = (uint)(float)(long)local_68;
                uVar44 = (ulong)(uVar34 - 1);
                uVar57 = 0;
                pfVar47 = local_88;
                if ((6 < uVar34 - 1) &&
                   ((local_88 + uVar44 + 1 <= pfVar38 || (pfVar38 + uVar44 + 1 <= local_88)))) {
                  uVar57 = uVar44 + 1 & 0xfffffffffffffff8;
                  auVar71._4_4_ = uVar43;
                  auVar71._0_4_ = uVar43;
                  auVar71._8_4_ = uVar43;
                  auVar71._12_4_ = uVar43;
                  uVar52 = (uVar57 - 8 >> 3) + 1;
                  if (uVar57 - 8 == 0) {
                    lVar49 = 0;
                  }
                  else {
                    uVar54 = uVar52 & 0x3ffffffffffffffe;
                    lVar49 = 0;
                    do {
                      pfVar47 = local_88 + lVar49;
                      pfVar53 = local_88 + lVar49 + 4;
                      auVar115._0_4_ = (int)*pfVar47;
                      auVar115._4_4_ = (int)pfVar47[1];
                      auVar115._8_4_ = (int)pfVar47[2];
                      auVar115._12_4_ = (int)pfVar47[3];
                      auVar182._0_4_ = (int)*pfVar53;
                      auVar182._4_4_ = (int)pfVar53[1];
                      auVar182._8_4_ = (int)pfVar53[2];
                      auVar182._12_4_ = (int)pfVar53[3];
                      auVar115 = auVar115 & auVar71;
                      auVar182 = auVar182 & auVar71;
                      pfVar47 = pfVar38 + lVar49;
                      *pfVar47 = (float)auVar115._0_4_;
                      pfVar47[1] = (float)auVar115._4_4_;
                      pfVar47[2] = (float)auVar115._8_4_;
                      pfVar47[3] = (float)auVar115._12_4_;
                      pfVar47 = pfVar38 + lVar49 + 4;
                      *pfVar47 = (float)auVar182._0_4_;
                      pfVar47[1] = (float)auVar182._4_4_;
                      pfVar47[2] = (float)auVar182._8_4_;
                      pfVar47[3] = (float)auVar182._12_4_;
                      pfVar47 = local_88 + lVar49 + 8;
                      pfVar53 = local_88 + lVar49 + 0xc;
                      auVar116._0_4_ = (int)*pfVar47;
                      auVar116._4_4_ = (int)pfVar47[1];
                      auVar116._8_4_ = (int)pfVar47[2];
                      auVar116._12_4_ = (int)pfVar47[3];
                      auVar183._0_4_ = (int)*pfVar53;
                      auVar183._4_4_ = (int)pfVar53[1];
                      auVar183._8_4_ = (int)pfVar53[2];
                      auVar183._12_4_ = (int)pfVar53[3];
                      auVar116 = auVar116 & auVar71;
                      auVar183 = auVar183 & auVar71;
                      pfVar47 = pfVar38 + lVar49 + 8;
                      *pfVar47 = (float)auVar116._0_4_;
                      pfVar47[1] = (float)auVar116._4_4_;
                      pfVar47[2] = (float)auVar116._8_4_;
                      pfVar47[3] = (float)auVar116._12_4_;
                      pfVar47 = pfVar38 + lVar49 + 0xc;
                      *pfVar47 = (float)auVar183._0_4_;
                      pfVar47[1] = (float)auVar183._4_4_;
                      pfVar47[2] = (float)auVar183._8_4_;
                      pfVar47[3] = (float)auVar183._12_4_;
                      lVar49 = lVar49 + 0x10;
                      uVar54 = uVar54 - 2;
                    } while (uVar54 != 0);
                  }
                  if ((uVar52 & 1) != 0) {
                    pfVar47 = local_88 + lVar49;
                    pfVar53 = local_88 + lVar49 + 4;
                    auVar161._0_4_ = (int)*pfVar47;
                    auVar161._4_4_ = (int)pfVar47[1];
                    auVar161._8_4_ = (int)pfVar47[2];
                    auVar161._12_4_ = (int)pfVar47[3];
                    auVar221._0_4_ = (int)*pfVar53;
                    auVar221._4_4_ = (int)pfVar53[1];
                    auVar221._8_4_ = (int)pfVar53[2];
                    auVar221._12_4_ = (int)pfVar53[3];
                    auVar161 = auVar161 & auVar71;
                    auVar221 = auVar221 & auVar71;
                    auVar92._0_4_ = (float)auVar161._0_4_;
                    auVar92._4_4_ = (float)auVar161._4_4_;
                    auVar92._8_4_ = (float)auVar161._8_4_;
                    auVar92._12_4_ = (float)auVar161._12_4_;
                    *(undefined1 (*) [16])(pfVar38 + lVar49) = auVar92;
                    pfVar47 = pfVar38 + lVar49 + 4;
                    *pfVar47 = (float)auVar221._0_4_;
                    pfVar47[1] = (float)auVar221._4_4_;
                    pfVar47[2] = (float)auVar221._8_4_;
                    pfVar47[3] = (float)auVar221._12_4_;
                  }
                  if (uVar44 + 1 == uVar57) goto LAB_005b73c2;
                  pfVar38 = pfVar38 + uVar57;
                  pfVar47 = local_88 + uVar57;
                }
                uVar56 = (uint)uVar57;
                uVar50 = ~uVar56;
                if ((uVar34 & 3) != 0) {
                  iVar40 = 0;
                  do {
                    *pfVar38 = (float)(int)((int)*pfVar47 & uVar43);
                    pfVar38 = pfVar38 + 1;
                    pfVar47 = pfVar47 + 1;
                    iVar40 = iVar40 + -1;
                  } while (-(uVar34 & 3) != iVar40);
                  uVar56 = uVar56 - iVar40;
                }
                if (2 < uVar50 + uVar34) {
                  lVar49 = 0;
                  do {
                    pfVar38[lVar49] = (float)(int)((int)pfVar47[lVar49] & uVar43);
                    pfVar38[lVar49 + 1] = (float)(int)((int)pfVar47[lVar49 + 1] & uVar43);
                    pfVar38[lVar49 + 2] = (float)(int)((int)pfVar47[lVar49 + 2] & uVar43);
                    pfVar38[lVar49 + 3] = (float)(int)((int)pfVar47[lVar49 + 3] & uVar43);
                    lVar49 = lVar49 + 4;
                  } while (uVar34 - uVar56 != (int)lVar49);
                }
              }
              goto LAB_005b73c2;
            }
            if (lStack_80 == 2) {
              if (*(long *)(param_9 + 2) == 0xf) {
                iVar40 = *(int *)(param_7 + 0x28f8);
                if (0 < iVar40) {
                  fVar62 = (float)((int)local_88._0_4_ & (int)(float)(long)local_68);
                  lVar49 = *(long *)param_9;
                  uVar44 = 0;
                  if (6 < iVar40 - 1U) {
                    uVar52 = (ulong)(iVar40 - 1U) + 1;
                    uVar44 = uVar52 & 0xfffffffffffffff8;
                    uVar54 = (uVar44 - 8 >> 3) + 1;
                    uVar57 = (ulong)((uint)uVar54 & 7);
                    if (uVar44 - 8 < 0x38) {
                      lVar45 = 0;
                    }
                    else {
                      uVar54 = uVar54 & 0xfffffffffffffff8;
                      lVar45 = 0;
                      do {
                        pfVar38 = (float *)(lVar49 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar45 = lVar45 + 0x40;
                        uVar54 = uVar54 - 8;
                      } while (uVar54 != 0);
                    }
                    if (uVar57 != 0) {
                      lVar45 = lVar49 + lVar45 * 4;
                      lVar48 = 0;
                      do {
                        pfVar38 = (float *)(lVar45 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar48 = lVar48 + 0x20;
                      } while (uVar57 * 0x20 != lVar48);
                    }
                    if (uVar52 == uVar44) goto LAB_005b73c2;
                    lVar49 = lVar49 + uVar44 * 4;
                  }
                  lVar45 = 0;
                  do {
                    *(float *)(lVar49 + lVar45 * 4) = fVar62;
                    lVar45 = lVar45 + 1;
                  } while (iVar40 - (int)uVar44 != (int)lVar45);
                }
                goto LAB_005b73c2;
              }
              param_9[2] = 2.8026e-45;
              param_9[3] = 0.0;
              fVar62 = (float)(long)local_68;
              goto LAB_005bcff6;
            }
            if (lStack_80 == 1) {
              if (*(long *)(param_9 + 2) == 0xf) {
                iVar40 = *(int *)(param_7 + 0x28f8);
                if (0 < iVar40) {
                  fVar62 = (float)(int)((uint)local_88._0_4_ & (uint)local_68._0_4_);
                  lVar49 = *(long *)param_9;
                  uVar44 = 0;
                  if (6 < iVar40 - 1U) {
                    uVar52 = (ulong)(iVar40 - 1U) + 1;
                    uVar44 = uVar52 & 0xfffffffffffffff8;
                    uVar54 = (uVar44 - 8 >> 3) + 1;
                    uVar57 = (ulong)((uint)uVar54 & 7);
                    if (uVar44 - 8 < 0x38) {
                      lVar45 = 0;
                    }
                    else {
                      uVar54 = uVar54 & 0xfffffffffffffff8;
                      lVar45 = 0;
                      do {
                        pfVar38 = (float *)(lVar49 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar45 = lVar45 + 0x40;
                        uVar54 = uVar54 - 8;
                      } while (uVar54 != 0);
                    }
                    if (uVar57 != 0) {
                      lVar45 = lVar49 + lVar45 * 4;
                      lVar48 = 0;
                      do {
                        pfVar38 = (float *)(lVar45 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar48 = lVar48 + 0x20;
                      } while (uVar57 * 0x20 != lVar48);
                    }
                    if (uVar52 == uVar44) goto LAB_005b73c2;
                    lVar49 = lVar49 + uVar44 * 4;
                  }
                  lVar45 = 0;
                  do {
                    *(float *)(lVar49 + lVar45 * 4) = fVar62;
                    lVar45 = lVar45 + 1;
                  } while (iVar40 - (int)uVar44 != (int)lVar45);
                }
                goto LAB_005b73c2;
              }
              param_9[2] = 1.4013e-45;
              param_9[3] = 0.0;
              uVar34 = (uint)local_88._0_4_ & (uint)local_68._0_4_;
              goto LAB_005bcb8a;
            }
          }
          uVar46 = 0x546;
          goto LAB_005b7339;
        }
        puVar36 = ex_eval(0,param_2,param_3,param_4,param_5,param_6,param_7,puVar36,
                          (float *)&local_68,(undefined *)((ulong)param_10 & 0xffffffff),param_11,
                          param_12);
        puVar36 = ex_eval(extraout_XMM0_Qa_15,param_2,param_3,param_4,param_5,param_6,param_7,
                          puVar36,(float *)&local_88,(undefined *)((ulong)param_10 & 0xffffffff),
                          param_11,param_12);
        uVar236 = in_XMM3._0_8_;
        uVar63 = in_XMM2._0_8_;
        uVar44 = extraout_XMM0_04._0_8_;
        if (lStack_60 - 0xeU < 2) {
          if (*(long *)(param_9 + 2) == 0xf) {
            pfVar38 = *(float **)param_9;
          }
          else {
            if (*(long *)(param_9 + 2) == 0xe) goto LAB_005c5996;
            param_9[2] = 2.10195e-44;
            param_9[3] = 0.0;
            pfVar38 = malloc((long)*(int *)(param_7 + 0x28f8) << 2);
            uVar44 = extraout_XMM0_11._0_8_;
            uVar236 = in_XMM3._0_8_;
            uVar63 = in_XMM2._0_8_;
            *(float **)param_9 = pfVar38;
          }
          if (lStack_80 - 0xeU < 2) {
            uVar34 = *(uint *)(param_7 + 0x28f8);
            if ((int)uVar34 < 1) goto LAB_005b73c2;
            uVar57 = (ulong)(uVar34 - 1);
            uVar44 = 0;
            if (uVar34 - 1 < 7) {
LAB_005ba641:
              pfVar47 = local_68;
              pfVar53 = local_88;
            }
            else {
              if ((pfVar38 < local_68 + uVar57 + 1 && local_68 < pfVar38 + uVar57 + 1) ||
                 (pfVar38 < local_88 + uVar57 + 1 && local_88 < pfVar38 + uVar57 + 1))
              goto LAB_005ba641;
              uVar44 = uVar57 + 1 & 0xfffffffffffffff8;
              uVar52 = 0;
              do {
                pfVar47 = local_68 + uVar52;
                fVar62 = pfVar47[1];
                fVar232 = pfVar47[2];
                fVar233 = pfVar47[3];
                pfVar53 = local_68 + uVar52 + 4;
                fVar234 = *pfVar53;
                fVar235 = pfVar53[1];
                fVar264 = pfVar53[2];
                fVar265 = pfVar53[3];
                pfVar53 = local_88 + uVar52;
                fVar266 = pfVar53[1];
                fVar28 = pfVar53[2];
                fVar29 = pfVar53[3];
                pfVar2 = local_88 + uVar52 + 4;
                fVar30 = *pfVar2;
                fVar31 = pfVar2[1];
                fVar32 = pfVar2[2];
                fVar33 = pfVar2[3];
                pfVar2 = pfVar38 + uVar52;
                *pfVar2 = (float)((int)*pfVar53 ^ (int)*pfVar47);
                pfVar2[1] = (float)((int)fVar266 ^ (int)fVar62);
                pfVar2[2] = (float)((int)fVar28 ^ (int)fVar232);
                pfVar2[3] = (float)((int)fVar29 ^ (int)fVar233);
                pfVar47 = pfVar38 + uVar52 + 4;
                *pfVar47 = (float)((int)fVar30 ^ (int)fVar234);
                pfVar47[1] = (float)((int)fVar31 ^ (int)fVar235);
                pfVar47[2] = (float)((int)fVar32 ^ (int)fVar264);
                pfVar47[3] = (float)((int)fVar33 ^ (int)fVar265);
                uVar52 = uVar52 + 8;
              } while (uVar44 != uVar52);
              pfVar47 = local_68 + uVar44;
              pfVar38 = pfVar38 + uVar44;
              pfVar53 = local_88 + uVar44;
              if (uVar57 + 1 == uVar44) goto LAB_005b73c2;
            }
            uVar50 = (uint)uVar44 + 1;
            uVar43 = (uint)uVar44;
            if ((uVar34 & 1) != 0) {
              *pfVar38 = (float)((int)*pfVar53 ^ (int)*pfVar47);
              pfVar38 = pfVar38 + 1;
              pfVar53 = pfVar53 + 1;
              pfVar47 = pfVar47 + 1;
              uVar43 = uVar50;
            }
            if (uVar34 != uVar50) {
              lVar49 = 0;
              do {
                pfVar38[lVar49] = (float)((int)pfVar53[lVar49] ^ (int)pfVar47[lVar49]);
                pfVar38[lVar49 + 1] = (float)((int)pfVar53[lVar49 + 1] ^ (int)pfVar47[lVar49 + 1]);
                lVar49 = lVar49 + 2;
              } while (uVar34 - uVar43 != (int)lVar49);
            }
            goto LAB_005b73c2;
          }
          if (lStack_80 == 2) {
            uVar34 = *(uint *)(param_7 + 0x28f8);
            if (0 < (int)uVar34) {
              uVar43 = (uint)local_88._0_4_;
              uVar44 = (ulong)(uVar34 - 1);
              uVar57 = 0;
              pfVar47 = local_68;
              if ((6 < uVar34 - 1) &&
                 ((local_68 + uVar44 + 1 <= pfVar38 || (pfVar38 + uVar44 + 1 <= local_68)))) {
                uVar57 = uVar44 + 1 & 0xfffffffffffffff8;
                auVar84._4_4_ = uVar43;
                auVar84._0_4_ = uVar43;
                auVar84._8_4_ = uVar43;
                auVar84._12_4_ = uVar43;
                uVar52 = (uVar57 - 8 >> 3) + 1;
                if (uVar57 - 8 == 0) {
                  lVar49 = 0;
                }
                else {
                  uVar54 = uVar52 & 0x3ffffffffffffffe;
                  lVar49 = 0;
                  do {
                    pfVar47 = local_68 + lVar49;
                    pfVar53 = local_68 + lVar49 + 4;
                    auVar129._0_4_ = (int)*pfVar47;
                    auVar129._4_4_ = (int)pfVar47[1];
                    auVar129._8_4_ = (int)pfVar47[2];
                    auVar129._12_4_ = (int)pfVar47[3];
                    auVar196._0_4_ = (int)*pfVar53;
                    auVar196._4_4_ = (int)pfVar53[1];
                    auVar196._8_4_ = (int)pfVar53[2];
                    auVar196._12_4_ = (int)pfVar53[3];
                    auVar129 = auVar129 ^ auVar84;
                    auVar196 = auVar196 ^ auVar84;
                    pfVar47 = pfVar38 + lVar49;
                    *pfVar47 = (float)auVar129._0_4_;
                    pfVar47[1] = (float)auVar129._4_4_;
                    pfVar47[2] = (float)auVar129._8_4_;
                    pfVar47[3] = (float)auVar129._12_4_;
                    pfVar47 = pfVar38 + lVar49 + 4;
                    *pfVar47 = (float)auVar196._0_4_;
                    pfVar47[1] = (float)auVar196._4_4_;
                    pfVar47[2] = (float)auVar196._8_4_;
                    pfVar47[3] = (float)auVar196._12_4_;
                    pfVar47 = local_68 + lVar49 + 8;
                    pfVar53 = local_68 + lVar49 + 0xc;
                    auVar130._0_4_ = (int)*pfVar47;
                    auVar130._4_4_ = (int)pfVar47[1];
                    auVar130._8_4_ = (int)pfVar47[2];
                    auVar130._12_4_ = (int)pfVar47[3];
                    auVar197._0_4_ = (int)*pfVar53;
                    auVar197._4_4_ = (int)pfVar53[1];
                    auVar197._8_4_ = (int)pfVar53[2];
                    auVar197._12_4_ = (int)pfVar53[3];
                    auVar130 = auVar130 ^ auVar84;
                    auVar197 = auVar197 ^ auVar84;
                    pfVar47 = pfVar38 + lVar49 + 8;
                    *pfVar47 = (float)auVar130._0_4_;
                    pfVar47[1] = (float)auVar130._4_4_;
                    pfVar47[2] = (float)auVar130._8_4_;
                    pfVar47[3] = (float)auVar130._12_4_;
                    pfVar47 = pfVar38 + lVar49 + 0xc;
                    *pfVar47 = (float)auVar197._0_4_;
                    pfVar47[1] = (float)auVar197._4_4_;
                    pfVar47[2] = (float)auVar197._8_4_;
                    pfVar47[3] = (float)auVar197._12_4_;
                    lVar49 = lVar49 + 0x10;
                    uVar54 = uVar54 - 2;
                  } while (uVar54 != 0);
                }
                if ((uVar52 & 1) != 0) {
                  pfVar47 = local_68 + lVar49;
                  pfVar53 = local_68 + lVar49 + 4;
                  auVar170._0_4_ = (int)*pfVar47;
                  auVar170._4_4_ = (int)pfVar47[1];
                  auVar170._8_4_ = (int)pfVar47[2];
                  auVar170._12_4_ = (int)pfVar47[3];
                  auVar230._0_4_ = (int)*pfVar53;
                  auVar230._4_4_ = (int)pfVar53[1];
                  auVar230._8_4_ = (int)pfVar53[2];
                  auVar230._12_4_ = (int)pfVar53[3];
                  auVar170 = auVar170 ^ auVar84;
                  auVar230 = auVar230 ^ auVar84;
                  auVar100._0_4_ = (float)auVar170._0_4_;
                  auVar100._4_4_ = (float)auVar170._4_4_;
                  auVar100._8_4_ = (float)auVar170._8_4_;
                  auVar100._12_4_ = (float)auVar170._12_4_;
                  *(undefined1 (*) [16])(pfVar38 + lVar49) = auVar100;
                  pfVar47 = pfVar38 + lVar49 + 4;
                  *pfVar47 = (float)auVar230._0_4_;
                  pfVar47[1] = (float)auVar230._4_4_;
                  pfVar47[2] = (float)auVar230._8_4_;
                  pfVar47[3] = (float)auVar230._12_4_;
                }
                if (uVar44 + 1 == uVar57) goto LAB_005b73c2;
                pfVar38 = pfVar38 + uVar57;
                pfVar47 = local_68 + uVar57;
              }
              uVar56 = (uint)uVar57;
              uVar50 = ~uVar56;
              if ((uVar34 & 3) != 0) {
                iVar40 = 0;
                do {
                  *pfVar38 = (float)(int)((int)*pfVar47 ^ uVar43);
                  pfVar38 = pfVar38 + 1;
                  pfVar47 = pfVar47 + 1;
                  iVar40 = iVar40 + -1;
                } while (-(uVar34 & 3) != iVar40);
                uVar56 = uVar56 - iVar40;
              }
              if (2 < uVar50 + uVar34) {
                lVar49 = 0;
                do {
                  pfVar38[lVar49] = (float)(int)((int)pfVar47[lVar49] ^ uVar43);
                  pfVar38[lVar49 + 1] = (float)(int)((int)pfVar47[lVar49 + 1] ^ uVar43);
                  pfVar38[lVar49 + 2] = (float)(int)((int)pfVar47[lVar49 + 2] ^ uVar43);
                  pfVar38[lVar49 + 3] = (float)(int)((int)pfVar47[lVar49 + 3] ^ uVar43);
                  lVar49 = lVar49 + 4;
                } while (uVar34 - uVar56 != (int)lVar49);
              }
            }
            goto LAB_005b73c2;
          }
          if (lStack_80 == 1) {
            uVar34 = *(uint *)(param_7 + 0x28f8);
            if (0 < (int)uVar34) {
              uVar43 = (uint)(float)(long)local_88;
              uVar44 = (ulong)(uVar34 - 1);
              uVar57 = 0;
              pfVar47 = local_68;
              if ((6 < uVar34 - 1) &&
                 ((local_68 + uVar44 + 1 <= pfVar38 || (pfVar38 + uVar44 + 1 <= local_68)))) {
                uVar57 = uVar44 + 1 & 0xfffffffffffffff8;
                auVar68._4_4_ = uVar43;
                auVar68._0_4_ = uVar43;
                auVar68._8_4_ = uVar43;
                auVar68._12_4_ = uVar43;
                uVar52 = (uVar57 - 8 >> 3) + 1;
                if (uVar57 - 8 == 0) {
                  lVar49 = 0;
                }
                else {
                  uVar54 = uVar52 & 0x3ffffffffffffffe;
                  lVar49 = 0;
                  do {
                    pfVar47 = local_68 + lVar49;
                    pfVar53 = local_68 + lVar49 + 4;
                    auVar106._0_4_ = (int)*pfVar47;
                    auVar106._4_4_ = (int)pfVar47[1];
                    auVar106._8_4_ = (int)pfVar47[2];
                    auVar106._12_4_ = (int)pfVar47[3];
                    auVar175._0_4_ = (int)*pfVar53;
                    auVar175._4_4_ = (int)pfVar53[1];
                    auVar175._8_4_ = (int)pfVar53[2];
                    auVar175._12_4_ = (int)pfVar53[3];
                    auVar106 = auVar106 ^ auVar68;
                    auVar175 = auVar175 ^ auVar68;
                    pfVar47 = pfVar38 + lVar49;
                    *pfVar47 = (float)auVar106._0_4_;
                    pfVar47[1] = (float)auVar106._4_4_;
                    pfVar47[2] = (float)auVar106._8_4_;
                    pfVar47[3] = (float)auVar106._12_4_;
                    pfVar47 = pfVar38 + lVar49 + 4;
                    *pfVar47 = (float)auVar175._0_4_;
                    pfVar47[1] = (float)auVar175._4_4_;
                    pfVar47[2] = (float)auVar175._8_4_;
                    pfVar47[3] = (float)auVar175._12_4_;
                    pfVar47 = local_68 + lVar49 + 8;
                    pfVar53 = local_68 + lVar49 + 0xc;
                    auVar107._0_4_ = (int)*pfVar47;
                    auVar107._4_4_ = (int)pfVar47[1];
                    auVar107._8_4_ = (int)pfVar47[2];
                    auVar107._12_4_ = (int)pfVar47[3];
                    auVar176._0_4_ = (int)*pfVar53;
                    auVar176._4_4_ = (int)pfVar53[1];
                    auVar176._8_4_ = (int)pfVar53[2];
                    auVar176._12_4_ = (int)pfVar53[3];
                    auVar107 = auVar107 ^ auVar68;
                    auVar176 = auVar176 ^ auVar68;
                    pfVar47 = pfVar38 + lVar49 + 8;
                    *pfVar47 = (float)auVar107._0_4_;
                    pfVar47[1] = (float)auVar107._4_4_;
                    pfVar47[2] = (float)auVar107._8_4_;
                    pfVar47[3] = (float)auVar107._12_4_;
                    pfVar47 = pfVar38 + lVar49 + 0xc;
                    *pfVar47 = (float)auVar176._0_4_;
                    pfVar47[1] = (float)auVar176._4_4_;
                    pfVar47[2] = (float)auVar176._8_4_;
                    pfVar47[3] = (float)auVar176._12_4_;
                    lVar49 = lVar49 + 0x10;
                    uVar54 = uVar54 - 2;
                  } while (uVar54 != 0);
                }
                if ((uVar52 & 1) != 0) {
                  pfVar47 = local_68 + lVar49;
                  pfVar53 = local_68 + lVar49 + 4;
                  auVar159._0_4_ = (int)*pfVar47;
                  auVar159._4_4_ = (int)pfVar47[1];
                  auVar159._8_4_ = (int)pfVar47[2];
                  auVar159._12_4_ = (int)pfVar47[3];
                  auVar219._0_4_ = (int)*pfVar53;
                  auVar219._4_4_ = (int)pfVar53[1];
                  auVar219._8_4_ = (int)pfVar53[2];
                  auVar219._12_4_ = (int)pfVar53[3];
                  auVar159 = auVar159 ^ auVar68;
                  auVar219 = auVar219 ^ auVar68;
                  auVar89._0_4_ = (float)auVar159._0_4_;
                  auVar89._4_4_ = (float)auVar159._4_4_;
                  auVar89._8_4_ = (float)auVar159._8_4_;
                  auVar89._12_4_ = (float)auVar159._12_4_;
                  *(undefined1 (*) [16])(pfVar38 + lVar49) = auVar89;
                  pfVar47 = pfVar38 + lVar49 + 4;
                  *pfVar47 = (float)auVar219._0_4_;
                  pfVar47[1] = (float)auVar219._4_4_;
                  pfVar47[2] = (float)auVar219._8_4_;
                  pfVar47[3] = (float)auVar219._12_4_;
                }
                if (uVar44 + 1 == uVar57) goto LAB_005b73c2;
                pfVar38 = pfVar38 + uVar57;
                pfVar47 = local_68 + uVar57;
              }
              uVar56 = (uint)uVar57;
              uVar50 = ~uVar56;
              if ((uVar34 & 3) != 0) {
                iVar40 = 0;
                do {
                  *pfVar38 = (float)(int)((int)*pfVar47 ^ uVar43);
                  pfVar38 = pfVar38 + 1;
                  pfVar47 = pfVar47 + 1;
                  iVar40 = iVar40 + -1;
                } while (-(uVar34 & 3) != iVar40);
                uVar56 = uVar56 - iVar40;
              }
              if (2 < uVar50 + uVar34) {
                lVar49 = 0;
                do {
                  pfVar38[lVar49] = (float)(int)((int)pfVar47[lVar49] ^ uVar43);
                  pfVar38[lVar49 + 1] = (float)(int)((int)pfVar47[lVar49 + 1] ^ uVar43);
                  pfVar38[lVar49 + 2] = (float)(int)((int)pfVar47[lVar49 + 2] ^ uVar43);
                  pfVar38[lVar49 + 3] = (float)(int)((int)pfVar47[lVar49 + 3] ^ uVar43);
                  lVar49 = lVar49 + 4;
                } while (uVar34 - uVar56 != (int)lVar49);
              }
            }
            goto LAB_005b73c2;
          }
        }
        else if (lStack_60 == 2) {
          if (lStack_80 - 0xeU < 2) {
            if (*(long *)(param_9 + 2) != 0xf) {
              if (*(long *)(param_9 + 2) == 0xe) goto LAB_005c5996;
              param_9[2] = 2.10195e-44;
              param_9[3] = 0.0;
              pvVar37 = malloc((long)*(int *)(param_7 + 0x28f8) << 2);
              *(void **)param_9 = pvVar37;
            }
            uVar34 = *(uint *)(param_7 + 0x28f8);
            if (0 < (int)uVar34) {
              pfVar38 = *(float **)param_9;
              uVar43 = (uint)local_68._0_4_;
              uVar44 = (ulong)(uVar34 - 1);
              uVar57 = 0;
              pfVar47 = local_88;
              if ((6 < uVar34 - 1) &&
                 ((local_88 + uVar44 + 1 <= pfVar38 || (pfVar38 + uVar44 + 1 <= local_88)))) {
                uVar57 = uVar44 + 1 & 0xfffffffffffffff8;
                auVar78._4_4_ = uVar43;
                auVar78._0_4_ = uVar43;
                auVar78._8_4_ = uVar43;
                auVar78._12_4_ = uVar43;
                uVar52 = (uVar57 - 8 >> 3) + 1;
                if (uVar57 - 8 == 0) {
                  lVar49 = 0;
                }
                else {
                  uVar54 = uVar52 & 0x3ffffffffffffffe;
                  lVar49 = 0;
                  do {
                    pfVar47 = local_88 + lVar49;
                    pfVar53 = local_88 + lVar49 + 4;
                    auVar123._0_4_ = (int)*pfVar47;
                    auVar123._4_4_ = (int)pfVar47[1];
                    auVar123._8_4_ = (int)pfVar47[2];
                    auVar123._12_4_ = (int)pfVar47[3];
                    auVar190._0_4_ = (int)*pfVar53;
                    auVar190._4_4_ = (int)pfVar53[1];
                    auVar190._8_4_ = (int)pfVar53[2];
                    auVar190._12_4_ = (int)pfVar53[3];
                    auVar123 = auVar123 ^ auVar78;
                    auVar190 = auVar190 ^ auVar78;
                    pfVar47 = pfVar38 + lVar49;
                    *pfVar47 = (float)auVar123._0_4_;
                    pfVar47[1] = (float)auVar123._4_4_;
                    pfVar47[2] = (float)auVar123._8_4_;
                    pfVar47[3] = (float)auVar123._12_4_;
                    pfVar47 = pfVar38 + lVar49 + 4;
                    *pfVar47 = (float)auVar190._0_4_;
                    pfVar47[1] = (float)auVar190._4_4_;
                    pfVar47[2] = (float)auVar190._8_4_;
                    pfVar47[3] = (float)auVar190._12_4_;
                    pfVar47 = local_88 + lVar49 + 8;
                    pfVar53 = local_88 + lVar49 + 0xc;
                    auVar124._0_4_ = (int)*pfVar47;
                    auVar124._4_4_ = (int)pfVar47[1];
                    auVar124._8_4_ = (int)pfVar47[2];
                    auVar124._12_4_ = (int)pfVar47[3];
                    auVar191._0_4_ = (int)*pfVar53;
                    auVar191._4_4_ = (int)pfVar53[1];
                    auVar191._8_4_ = (int)pfVar53[2];
                    auVar191._12_4_ = (int)pfVar53[3];
                    auVar124 = auVar124 ^ auVar78;
                    auVar191 = auVar191 ^ auVar78;
                    pfVar47 = pfVar38 + lVar49 + 8;
                    *pfVar47 = (float)auVar124._0_4_;
                    pfVar47[1] = (float)auVar124._4_4_;
                    pfVar47[2] = (float)auVar124._8_4_;
                    pfVar47[3] = (float)auVar124._12_4_;
                    pfVar47 = pfVar38 + lVar49 + 0xc;
                    *pfVar47 = (float)auVar191._0_4_;
                    pfVar47[1] = (float)auVar191._4_4_;
                    pfVar47[2] = (float)auVar191._8_4_;
                    pfVar47[3] = (float)auVar191._12_4_;
                    lVar49 = lVar49 + 0x10;
                    uVar54 = uVar54 - 2;
                  } while (uVar54 != 0);
                }
                if ((uVar52 & 1) != 0) {
                  pfVar47 = local_88 + lVar49;
                  pfVar53 = local_88 + lVar49 + 4;
                  auVar165._0_4_ = (int)*pfVar47;
                  auVar165._4_4_ = (int)pfVar47[1];
                  auVar165._8_4_ = (int)pfVar47[2];
                  auVar165._12_4_ = (int)pfVar47[3];
                  auVar225._0_4_ = (int)*pfVar53;
                  auVar225._4_4_ = (int)pfVar53[1];
                  auVar225._8_4_ = (int)pfVar53[2];
                  auVar225._12_4_ = (int)pfVar53[3];
                  auVar165 = auVar165 ^ auVar78;
                  auVar225 = auVar225 ^ auVar78;
                  auVar96._0_4_ = (float)auVar165._0_4_;
                  auVar96._4_4_ = (float)auVar165._4_4_;
                  auVar96._8_4_ = (float)auVar165._8_4_;
                  auVar96._12_4_ = (float)auVar165._12_4_;
                  *(undefined1 (*) [16])(pfVar38 + lVar49) = auVar96;
                  pfVar47 = pfVar38 + lVar49 + 4;
                  *pfVar47 = (float)auVar225._0_4_;
                  pfVar47[1] = (float)auVar225._4_4_;
                  pfVar47[2] = (float)auVar225._8_4_;
                  pfVar47[3] = (float)auVar225._12_4_;
                }
                if (uVar44 + 1 == uVar57) goto LAB_005b73c2;
                pfVar38 = pfVar38 + uVar57;
                pfVar47 = local_88 + uVar57;
              }
              uVar56 = (uint)uVar57;
              uVar50 = ~uVar56;
              if ((uVar34 & 3) != 0) {
                iVar40 = 0;
                do {
                  *pfVar38 = (float)(int)((int)*pfVar47 ^ uVar43);
                  pfVar38 = pfVar38 + 1;
                  pfVar47 = pfVar47 + 1;
                  iVar40 = iVar40 + -1;
                } while (-(uVar34 & 3) != iVar40);
                uVar56 = uVar56 - iVar40;
              }
              if (2 < uVar50 + uVar34) {
                lVar49 = 0;
                do {
                  pfVar38[lVar49] = (float)(int)((int)pfVar47[lVar49] ^ uVar43);
                  pfVar38[lVar49 + 1] = (float)(int)((int)pfVar47[lVar49 + 1] ^ uVar43);
                  pfVar38[lVar49 + 2] = (float)(int)((int)pfVar47[lVar49 + 2] ^ uVar43);
                  pfVar38[lVar49 + 3] = (float)(int)((int)pfVar47[lVar49 + 3] ^ uVar43);
                  lVar49 = lVar49 + 4;
                } while (uVar34 - uVar56 != (int)lVar49);
              }
            }
            goto LAB_005b73c2;
          }
          if (lStack_80 == 2) {
            if (*(long *)(param_9 + 2) == 0xf) {
              iVar40 = *(int *)(param_7 + 0x28f8);
              if (0 < iVar40) {
                fVar62 = (float)((int)local_88._0_4_ ^ (int)local_68._0_4_);
                lVar49 = *(long *)param_9;
                uVar44 = 0;
                if (6 < iVar40 - 1U) {
                  uVar52 = (ulong)(iVar40 - 1U) + 1;
                  uVar44 = uVar52 & 0xfffffffffffffff8;
                  uVar54 = (uVar44 - 8 >> 3) + 1;
                  uVar57 = (ulong)((uint)uVar54 & 7);
                  if (uVar44 - 8 < 0x38) {
                    lVar45 = 0;
                  }
                  else {
                    uVar54 = uVar54 & 0xfffffffffffffff8;
                    lVar45 = 0;
                    do {
                      pfVar38 = (float *)(lVar49 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      lVar45 = lVar45 + 0x40;
                      uVar54 = uVar54 - 8;
                    } while (uVar54 != 0);
                  }
                  if (uVar57 != 0) {
                    lVar45 = lVar49 + lVar45 * 4;
                    lVar48 = 0;
                    do {
                      pfVar38 = (float *)(lVar45 + lVar48);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      lVar48 = lVar48 + 0x20;
                    } while (uVar57 * 0x20 != lVar48);
                  }
                  if (uVar52 == uVar44) goto LAB_005b73c2;
                  lVar49 = lVar49 + uVar44 * 4;
                }
                lVar45 = 0;
                do {
                  *(float *)(lVar49 + lVar45 * 4) = fVar62;
                  lVar45 = lVar45 + 1;
                } while (iVar40 - (int)uVar44 != (int)lVar45);
              }
              goto LAB_005b73c2;
            }
            param_9[2] = 2.8026e-45;
            param_9[3] = 0.0;
            fVar62 = local_68._0_4_;
LAB_005bd09e:
            uVar34 = (int)local_88._0_4_ ^ (int)fVar62;
            goto LAB_005bd139;
          }
          if (lStack_80 == 1) {
            if (*(long *)(param_9 + 2) == 0xf) {
              iVar40 = *(int *)(param_7 + 0x28f8);
              if (0 < iVar40) {
                fVar62 = (float)(int)((int)local_68._0_4_ ^ (uint)local_88._0_4_);
                lVar49 = *(long *)param_9;
                uVar44 = 0;
                if (6 < iVar40 - 1U) {
                  uVar52 = (ulong)(iVar40 - 1U) + 1;
                  uVar44 = uVar52 & 0xfffffffffffffff8;
                  uVar54 = (uVar44 - 8 >> 3) + 1;
                  uVar57 = (ulong)((uint)uVar54 & 7);
                  if (uVar44 - 8 < 0x38) {
                    lVar45 = 0;
                  }
                  else {
                    uVar54 = uVar54 & 0xfffffffffffffff8;
                    lVar45 = 0;
                    do {
                      pfVar38 = (float *)(lVar49 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      lVar45 = lVar45 + 0x40;
                      uVar54 = uVar54 - 8;
                    } while (uVar54 != 0);
                  }
                  if (uVar57 != 0) {
                    lVar45 = lVar49 + lVar45 * 4;
                    lVar48 = 0;
                    do {
                      pfVar38 = (float *)(lVar45 + lVar48);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      lVar48 = lVar48 + 0x20;
                    } while (uVar57 * 0x20 != lVar48);
                  }
                  if (uVar52 == uVar44) goto LAB_005b73c2;
                  lVar49 = lVar49 + uVar44 * 4;
                }
                lVar45 = 0;
                do {
                  *(float *)(lVar49 + lVar45 * 4) = fVar62;
                  lVar45 = lVar45 + 1;
                } while (iVar40 - (int)uVar44 != (int)lVar45);
              }
              goto LAB_005b73c2;
            }
            param_9[2] = 2.8026e-45;
            param_9[3] = 0.0;
            uVar34 = (int)local_68._0_4_ ^ (uint)local_88._0_4_;
            goto LAB_005bd0bf;
          }
        }
        else {
          if (lStack_60 != 1) {
            pcVar55 = "expr: ex_eval(%d): bad left type %ld\n";
            uVar46 = 0x548;
            lVar49 = lStack_60;
            goto LAB_005b73bb;
          }
          if (lStack_80 - 0xeU < 2) {
            if (*(long *)(param_9 + 2) != 0xf) {
              if (*(long *)(param_9 + 2) == 0xe) goto LAB_005c5996;
              param_9[2] = 2.10195e-44;
              param_9[3] = 0.0;
              pvVar37 = malloc((long)*(int *)(param_7 + 0x28f8) << 2);
              *(void **)param_9 = pvVar37;
            }
            uVar34 = *(uint *)(param_7 + 0x28f8);
            if (0 < (int)uVar34) {
              pfVar38 = *(float **)param_9;
              uVar43 = (uint)(float)(long)local_68;
              uVar44 = (ulong)(uVar34 - 1);
              uVar57 = 0;
              pfVar47 = local_88;
              if ((6 < uVar34 - 1) &&
                 ((local_88 + uVar44 + 1 <= pfVar38 || (pfVar38 + uVar44 + 1 <= local_88)))) {
                uVar57 = uVar44 + 1 & 0xfffffffffffffff8;
                auVar73._4_4_ = uVar43;
                auVar73._0_4_ = uVar43;
                auVar73._8_4_ = uVar43;
                auVar73._12_4_ = uVar43;
                uVar52 = (uVar57 - 8 >> 3) + 1;
                if (uVar57 - 8 == 0) {
                  lVar49 = 0;
                }
                else {
                  uVar54 = uVar52 & 0x3ffffffffffffffe;
                  lVar49 = 0;
                  do {
                    pfVar47 = local_88 + lVar49;
                    pfVar53 = local_88 + lVar49 + 4;
                    auVar117._0_4_ = (int)*pfVar47;
                    auVar117._4_4_ = (int)pfVar47[1];
                    auVar117._8_4_ = (int)pfVar47[2];
                    auVar117._12_4_ = (int)pfVar47[3];
                    auVar184._0_4_ = (int)*pfVar53;
                    auVar184._4_4_ = (int)pfVar53[1];
                    auVar184._8_4_ = (int)pfVar53[2];
                    auVar184._12_4_ = (int)pfVar53[3];
                    auVar117 = auVar117 ^ auVar73;
                    auVar184 = auVar184 ^ auVar73;
                    pfVar47 = pfVar38 + lVar49;
                    *pfVar47 = (float)auVar117._0_4_;
                    pfVar47[1] = (float)auVar117._4_4_;
                    pfVar47[2] = (float)auVar117._8_4_;
                    pfVar47[3] = (float)auVar117._12_4_;
                    pfVar47 = pfVar38 + lVar49 + 4;
                    *pfVar47 = (float)auVar184._0_4_;
                    pfVar47[1] = (float)auVar184._4_4_;
                    pfVar47[2] = (float)auVar184._8_4_;
                    pfVar47[3] = (float)auVar184._12_4_;
                    pfVar47 = local_88 + lVar49 + 8;
                    pfVar53 = local_88 + lVar49 + 0xc;
                    auVar118._0_4_ = (int)*pfVar47;
                    auVar118._4_4_ = (int)pfVar47[1];
                    auVar118._8_4_ = (int)pfVar47[2];
                    auVar118._12_4_ = (int)pfVar47[3];
                    auVar185._0_4_ = (int)*pfVar53;
                    auVar185._4_4_ = (int)pfVar53[1];
                    auVar185._8_4_ = (int)pfVar53[2];
                    auVar185._12_4_ = (int)pfVar53[3];
                    auVar118 = auVar118 ^ auVar73;
                    auVar185 = auVar185 ^ auVar73;
                    pfVar47 = pfVar38 + lVar49 + 8;
                    *pfVar47 = (float)auVar118._0_4_;
                    pfVar47[1] = (float)auVar118._4_4_;
                    pfVar47[2] = (float)auVar118._8_4_;
                    pfVar47[3] = (float)auVar118._12_4_;
                    pfVar47 = pfVar38 + lVar49 + 0xc;
                    *pfVar47 = (float)auVar185._0_4_;
                    pfVar47[1] = (float)auVar185._4_4_;
                    pfVar47[2] = (float)auVar185._8_4_;
                    pfVar47[3] = (float)auVar185._12_4_;
                    lVar49 = lVar49 + 0x10;
                    uVar54 = uVar54 - 2;
                  } while (uVar54 != 0);
                }
                if ((uVar52 & 1) != 0) {
                  pfVar47 = local_88 + lVar49;
                  pfVar53 = local_88 + lVar49 + 4;
                  auVar162._0_4_ = (int)*pfVar47;
                  auVar162._4_4_ = (int)pfVar47[1];
                  auVar162._8_4_ = (int)pfVar47[2];
                  auVar162._12_4_ = (int)pfVar47[3];
                  auVar222._0_4_ = (int)*pfVar53;
                  auVar222._4_4_ = (int)pfVar53[1];
                  auVar222._8_4_ = (int)pfVar53[2];
                  auVar222._12_4_ = (int)pfVar53[3];
                  auVar162 = auVar162 ^ auVar73;
                  auVar222 = auVar222 ^ auVar73;
                  auVar93._0_4_ = (float)auVar162._0_4_;
                  auVar93._4_4_ = (float)auVar162._4_4_;
                  auVar93._8_4_ = (float)auVar162._8_4_;
                  auVar93._12_4_ = (float)auVar162._12_4_;
                  *(undefined1 (*) [16])(pfVar38 + lVar49) = auVar93;
                  pfVar47 = pfVar38 + lVar49 + 4;
                  *pfVar47 = (float)auVar222._0_4_;
                  pfVar47[1] = (float)auVar222._4_4_;
                  pfVar47[2] = (float)auVar222._8_4_;
                  pfVar47[3] = (float)auVar222._12_4_;
                }
                if (uVar44 + 1 == uVar57) goto LAB_005b73c2;
                pfVar38 = pfVar38 + uVar57;
                pfVar47 = local_88 + uVar57;
              }
              uVar56 = (uint)uVar57;
              uVar50 = ~uVar56;
              if ((uVar34 & 3) != 0) {
                iVar40 = 0;
                do {
                  *pfVar38 = (float)(int)((int)*pfVar47 ^ uVar43);
                  pfVar38 = pfVar38 + 1;
                  pfVar47 = pfVar47 + 1;
                  iVar40 = iVar40 + -1;
                } while (-(uVar34 & 3) != iVar40);
                uVar56 = uVar56 - iVar40;
              }
              if (2 < uVar50 + uVar34) {
                lVar49 = 0;
                do {
                  pfVar38[lVar49] = (float)(int)((int)pfVar47[lVar49] ^ uVar43);
                  pfVar38[lVar49 + 1] = (float)(int)((int)pfVar47[lVar49 + 1] ^ uVar43);
                  pfVar38[lVar49 + 2] = (float)(int)((int)pfVar47[lVar49 + 2] ^ uVar43);
                  pfVar38[lVar49 + 3] = (float)(int)((int)pfVar47[lVar49 + 3] ^ uVar43);
                  lVar49 = lVar49 + 4;
                } while (uVar34 - uVar56 != (int)lVar49);
              }
            }
            goto LAB_005b73c2;
          }
          if (lStack_80 == 2) {
            if (*(long *)(param_9 + 2) == 0xf) {
              iVar40 = *(int *)(param_7 + 0x28f8);
              if (0 < iVar40) {
                fVar62 = (float)((int)local_88._0_4_ ^ (int)(float)(long)local_68);
                lVar49 = *(long *)param_9;
                uVar44 = 0;
                if (6 < iVar40 - 1U) {
                  uVar52 = (ulong)(iVar40 - 1U) + 1;
                  uVar44 = uVar52 & 0xfffffffffffffff8;
                  uVar54 = (uVar44 - 8 >> 3) + 1;
                  uVar57 = (ulong)((uint)uVar54 & 7);
                  if (uVar44 - 8 < 0x38) {
                    lVar45 = 0;
                  }
                  else {
                    uVar54 = uVar54 & 0xfffffffffffffff8;
                    lVar45 = 0;
                    do {
                      pfVar38 = (float *)(lVar49 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      lVar45 = lVar45 + 0x40;
                      uVar54 = uVar54 - 8;
                    } while (uVar54 != 0);
                  }
                  if (uVar57 != 0) {
                    lVar45 = lVar49 + lVar45 * 4;
                    lVar48 = 0;
                    do {
                      pfVar38 = (float *)(lVar45 + lVar48);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      lVar48 = lVar48 + 0x20;
                    } while (uVar57 * 0x20 != lVar48);
                  }
                  if (uVar52 == uVar44) goto LAB_005b73c2;
                  lVar49 = lVar49 + uVar44 * 4;
                }
                lVar45 = 0;
                do {
                  *(float *)(lVar49 + lVar45 * 4) = fVar62;
                  lVar45 = lVar45 + 1;
                } while (iVar40 - (int)uVar44 != (int)lVar45);
              }
              goto LAB_005b73c2;
            }
            param_9[2] = 2.8026e-45;
            param_9[3] = 0.0;
            fVar62 = (float)(long)local_68;
            goto LAB_005bd09e;
          }
          if (lStack_80 == 1) {
            if (*(long *)(param_9 + 2) == 0xf) {
              iVar40 = *(int *)(param_7 + 0x28f8);
              if (0 < iVar40) {
                fVar62 = (float)(int)((uint)local_88._0_4_ ^ (uint)local_68._0_4_);
                lVar49 = *(long *)param_9;
                uVar44 = 0;
                if (6 < iVar40 - 1U) {
                  uVar52 = (ulong)(iVar40 - 1U) + 1;
                  uVar44 = uVar52 & 0xfffffffffffffff8;
                  uVar54 = (uVar44 - 8 >> 3) + 1;
                  uVar57 = (ulong)((uint)uVar54 & 7);
                  if (uVar44 - 8 < 0x38) {
                    lVar45 = 0;
                  }
                  else {
                    uVar54 = uVar54 & 0xfffffffffffffff8;
                    lVar45 = 0;
                    do {
                      pfVar38 = (float *)(lVar49 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      lVar45 = lVar45 + 0x40;
                      uVar54 = uVar54 - 8;
                    } while (uVar54 != 0);
                  }
                  if (uVar57 != 0) {
                    lVar45 = lVar49 + lVar45 * 4;
                    lVar48 = 0;
                    do {
                      pfVar38 = (float *)(lVar45 + lVar48);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                      *pfVar38 = fVar62;
                      pfVar38[1] = fVar62;
                      pfVar38[2] = fVar62;
                      pfVar38[3] = fVar62;
                      lVar48 = lVar48 + 0x20;
                    } while (uVar57 * 0x20 != lVar48);
                  }
                  if (uVar52 == uVar44) goto LAB_005b73c2;
                  lVar49 = lVar49 + uVar44 * 4;
                }
                lVar45 = 0;
                do {
                  *(float *)(lVar49 + lVar45 * 4) = fVar62;
                  lVar45 = lVar45 + 1;
                } while (iVar40 - (int)uVar44 != (int)lVar45);
              }
              goto LAB_005b73c2;
            }
            param_9[2] = 1.4013e-45;
            param_9[3] = 0.0;
            uVar34 = (uint)local_88._0_4_ ^ (uint)local_68._0_4_;
            goto LAB_005bcb8a;
          }
        }
        uVar46 = 0x548;
        goto LAB_005b7339;
      }
      puVar36 = ex_eval(0,param_2,param_3,param_4,param_5,param_6,param_7,puVar36,(float *)&local_68
                        ,(undefined *)((ulong)param_10 & 0xffffffff),param_11,param_12);
      puVar36 = ex_eval(extraout_XMM0_Qa_18,param_2,param_3,param_4,param_5,param_6,param_7,puVar36,
                        (float *)&local_88,(undefined *)((ulong)param_10 & 0xffffffff),param_11,
                        param_12);
      uVar236 = in_XMM3._0_8_;
      uVar63 = in_XMM2._0_8_;
      uVar44 = extraout_XMM0_07._0_8_;
      if (lStack_60 - 0xeU < 2) {
        if (*(long *)(param_9 + 2) == 0xf) {
          pfVar38 = *(float **)param_9;
        }
        else {
          if (*(long *)(param_9 + 2) == 0xe) goto LAB_005c5996;
          param_9[2] = 2.10195e-44;
          param_9[3] = 0.0;
          pfVar38 = malloc((long)*(int *)(param_7 + 0x28f8) << 2);
          uVar44 = extraout_XMM0_14._0_8_;
          uVar236 = in_XMM3._0_8_;
          uVar63 = in_XMM2._0_8_;
          *(float **)param_9 = pfVar38;
        }
        if (lStack_80 - 0xeU < 2) {
          uVar34 = *(uint *)(param_7 + 0x28f8);
          if ((int)uVar34 < 1) goto LAB_005b73c2;
          uVar57 = (ulong)(uVar34 - 1);
          uVar44 = 0;
          if (uVar34 - 1 < 7) {
LAB_005ba6ce:
            pfVar47 = local_68;
            pfVar53 = local_88;
          }
          else {
            if ((pfVar38 < local_68 + uVar57 + 1 && local_68 < pfVar38 + uVar57 + 1) ||
               (pfVar38 < local_88 + uVar57 + 1 && local_88 < pfVar38 + uVar57 + 1))
            goto LAB_005ba6ce;
            uVar44 = uVar57 + 1 & 0xfffffffffffffff8;
            uVar52 = 0;
            do {
              pfVar47 = local_68 + uVar52;
              fVar62 = pfVar47[1];
              fVar232 = pfVar47[2];
              fVar233 = pfVar47[3];
              pfVar53 = local_68 + uVar52 + 4;
              fVar234 = *pfVar53;
              fVar235 = pfVar53[1];
              fVar264 = pfVar53[2];
              fVar265 = pfVar53[3];
              pfVar53 = local_88 + uVar52;
              fVar266 = pfVar53[1];
              fVar28 = pfVar53[2];
              fVar29 = pfVar53[3];
              pfVar2 = local_88 + uVar52 + 4;
              fVar30 = *pfVar2;
              fVar31 = pfVar2[1];
              fVar32 = pfVar2[2];
              fVar33 = pfVar2[3];
              pfVar2 = pfVar38 + uVar52;
              *pfVar2 = (float)((int)*pfVar53 | (int)*pfVar47);
              pfVar2[1] = (float)((int)fVar266 | (int)fVar62);
              pfVar2[2] = (float)((int)fVar28 | (int)fVar232);
              pfVar2[3] = (float)((int)fVar29 | (int)fVar233);
              pfVar47 = pfVar38 + uVar52 + 4;
              *pfVar47 = (float)((int)fVar30 | (int)fVar234);
              pfVar47[1] = (float)((int)fVar31 | (int)fVar235);
              pfVar47[2] = (float)((int)fVar32 | (int)fVar264);
              pfVar47[3] = (float)((int)fVar33 | (int)fVar265);
              uVar52 = uVar52 + 8;
            } while (uVar44 != uVar52);
            pfVar47 = local_68 + uVar44;
            pfVar38 = pfVar38 + uVar44;
            pfVar53 = local_88 + uVar44;
            if (uVar57 + 1 == uVar44) goto LAB_005b73c2;
          }
          uVar50 = (uint)uVar44 + 1;
          uVar43 = (uint)uVar44;
          if ((uVar34 & 1) != 0) {
            *pfVar38 = (float)((int)*pfVar53 | (int)*pfVar47);
            pfVar38 = pfVar38 + 1;
            pfVar53 = pfVar53 + 1;
            pfVar47 = pfVar47 + 1;
            uVar43 = uVar50;
          }
          if (uVar34 != uVar50) {
            lVar49 = 0;
            do {
              pfVar38[lVar49] = (float)((int)pfVar53[lVar49] | (int)pfVar47[lVar49]);
              pfVar38[lVar49 + 1] = (float)((int)pfVar53[lVar49 + 1] | (int)pfVar47[lVar49 + 1]);
              lVar49 = lVar49 + 2;
            } while (uVar34 - uVar43 != (int)lVar49);
          }
          goto LAB_005b73c2;
        }
        if (lStack_80 == 2) {
          uVar34 = *(uint *)(param_7 + 0x28f8);
          if (0 < (int)uVar34) {
            uVar43 = (uint)local_88._0_4_;
            uVar44 = (ulong)(uVar34 - 1);
            uVar57 = 0;
            pfVar47 = local_68;
            if ((6 < uVar34 - 1) &&
               ((local_68 + uVar44 + 1 <= pfVar38 || (pfVar38 + uVar44 + 1 <= local_68)))) {
              uVar57 = uVar44 + 1 & 0xfffffffffffffff8;
              auVar85._4_4_ = uVar43;
              auVar85._0_4_ = uVar43;
              auVar85._8_4_ = uVar43;
              auVar85._12_4_ = uVar43;
              uVar52 = (uVar57 - 8 >> 3) + 1;
              if (uVar57 - 8 == 0) {
                lVar49 = 0;
              }
              else {
                uVar54 = uVar52 & 0x3ffffffffffffffe;
                lVar49 = 0;
                do {
                  pfVar47 = local_68 + lVar49;
                  pfVar53 = local_68 + lVar49 + 4;
                  auVar131._0_4_ = (int)*pfVar47;
                  auVar131._4_4_ = (int)pfVar47[1];
                  auVar131._8_4_ = (int)pfVar47[2];
                  auVar131._12_4_ = (int)pfVar47[3];
                  auVar198._0_4_ = (int)*pfVar53;
                  auVar198._4_4_ = (int)pfVar53[1];
                  auVar198._8_4_ = (int)pfVar53[2];
                  auVar198._12_4_ = (int)pfVar53[3];
                  auVar131 = auVar131 | auVar85;
                  auVar198 = auVar198 | auVar85;
                  pfVar47 = pfVar38 + lVar49;
                  *pfVar47 = (float)auVar131._0_4_;
                  pfVar47[1] = (float)auVar131._4_4_;
                  pfVar47[2] = (float)auVar131._8_4_;
                  pfVar47[3] = (float)auVar131._12_4_;
                  pfVar47 = pfVar38 + lVar49 + 4;
                  *pfVar47 = (float)auVar198._0_4_;
                  pfVar47[1] = (float)auVar198._4_4_;
                  pfVar47[2] = (float)auVar198._8_4_;
                  pfVar47[3] = (float)auVar198._12_4_;
                  pfVar47 = local_68 + lVar49 + 8;
                  pfVar53 = local_68 + lVar49 + 0xc;
                  auVar132._0_4_ = (int)*pfVar47;
                  auVar132._4_4_ = (int)pfVar47[1];
                  auVar132._8_4_ = (int)pfVar47[2];
                  auVar132._12_4_ = (int)pfVar47[3];
                  auVar199._0_4_ = (int)*pfVar53;
                  auVar199._4_4_ = (int)pfVar53[1];
                  auVar199._8_4_ = (int)pfVar53[2];
                  auVar199._12_4_ = (int)pfVar53[3];
                  auVar132 = auVar132 | auVar85;
                  auVar199 = auVar199 | auVar85;
                  pfVar47 = pfVar38 + lVar49 + 8;
                  *pfVar47 = (float)auVar132._0_4_;
                  pfVar47[1] = (float)auVar132._4_4_;
                  pfVar47[2] = (float)auVar132._8_4_;
                  pfVar47[3] = (float)auVar132._12_4_;
                  pfVar47 = pfVar38 + lVar49 + 0xc;
                  *pfVar47 = (float)auVar199._0_4_;
                  pfVar47[1] = (float)auVar199._4_4_;
                  pfVar47[2] = (float)auVar199._8_4_;
                  pfVar47[3] = (float)auVar199._12_4_;
                  lVar49 = lVar49 + 0x10;
                  uVar54 = uVar54 - 2;
                } while (uVar54 != 0);
              }
              if ((uVar52 & 1) != 0) {
                pfVar47 = local_68 + lVar49;
                pfVar53 = local_68 + lVar49 + 4;
                auVar171._0_4_ = (int)*pfVar47;
                auVar171._4_4_ = (int)pfVar47[1];
                auVar171._8_4_ = (int)pfVar47[2];
                auVar171._12_4_ = (int)pfVar47[3];
                auVar231._0_4_ = (int)*pfVar53;
                auVar231._4_4_ = (int)pfVar53[1];
                auVar231._8_4_ = (int)pfVar53[2];
                auVar231._12_4_ = (int)pfVar53[3];
                auVar171 = auVar171 | auVar85;
                auVar231 = auVar231 | auVar85;
                auVar102._0_4_ = (float)auVar171._0_4_;
                auVar102._4_4_ = (float)auVar171._4_4_;
                auVar102._8_4_ = (float)auVar171._8_4_;
                auVar102._12_4_ = (float)auVar171._12_4_;
                *(undefined1 (*) [16])(pfVar38 + lVar49) = auVar102;
                pfVar47 = pfVar38 + lVar49 + 4;
                *pfVar47 = (float)auVar231._0_4_;
                pfVar47[1] = (float)auVar231._4_4_;
                pfVar47[2] = (float)auVar231._8_4_;
                pfVar47[3] = (float)auVar231._12_4_;
              }
              if (uVar44 + 1 == uVar57) goto LAB_005b73c2;
              pfVar38 = pfVar38 + uVar57;
              pfVar47 = local_68 + uVar57;
            }
            uVar56 = (uint)uVar57;
            uVar50 = ~uVar56;
            if ((uVar34 & 3) != 0) {
              iVar40 = 0;
              do {
                *pfVar38 = (float)(int)((int)*pfVar47 | uVar43);
                pfVar38 = pfVar38 + 1;
                pfVar47 = pfVar47 + 1;
                iVar40 = iVar40 + -1;
              } while (-(uVar34 & 3) != iVar40);
              uVar56 = uVar56 - iVar40;
            }
            if (2 < uVar50 + uVar34) {
              lVar49 = 0;
              do {
                pfVar38[lVar49] = (float)(int)((int)pfVar47[lVar49] | uVar43);
                pfVar38[lVar49 + 1] = (float)(int)((int)pfVar47[lVar49 + 1] | uVar43);
                pfVar38[lVar49 + 2] = (float)(int)((int)pfVar47[lVar49 + 2] | uVar43);
                pfVar38[lVar49 + 3] = (float)(int)((int)pfVar47[lVar49 + 3] | uVar43);
                lVar49 = lVar49 + 4;
              } while (uVar34 - uVar56 != (int)lVar49);
            }
          }
          goto LAB_005b73c2;
        }
        if (lStack_80 == 1) {
          uVar34 = *(uint *)(param_7 + 0x28f8);
          if (0 < (int)uVar34) {
            uVar43 = (uint)(float)(long)local_88;
            uVar44 = (ulong)(uVar34 - 1);
            uVar57 = 0;
            pfVar47 = local_68;
            if ((6 < uVar34 - 1) &&
               ((local_68 + uVar44 + 1 <= pfVar38 || (pfVar38 + uVar44 + 1 <= local_68)))) {
              uVar57 = uVar44 + 1 & 0xfffffffffffffff8;
              auVar69._4_4_ = uVar43;
              auVar69._0_4_ = uVar43;
              auVar69._8_4_ = uVar43;
              auVar69._12_4_ = uVar43;
              uVar52 = (uVar57 - 8 >> 3) + 1;
              if (uVar57 - 8 == 0) {
                lVar49 = 0;
              }
              else {
                uVar54 = uVar52 & 0x3ffffffffffffffe;
                lVar49 = 0;
                do {
                  pfVar47 = local_68 + lVar49;
                  pfVar53 = local_68 + lVar49 + 4;
                  auVar108._0_4_ = (int)*pfVar47;
                  auVar108._4_4_ = (int)pfVar47[1];
                  auVar108._8_4_ = (int)pfVar47[2];
                  auVar108._12_4_ = (int)pfVar47[3];
                  auVar177._0_4_ = (int)*pfVar53;
                  auVar177._4_4_ = (int)pfVar53[1];
                  auVar177._8_4_ = (int)pfVar53[2];
                  auVar177._12_4_ = (int)pfVar53[3];
                  auVar108 = auVar108 | auVar69;
                  auVar177 = auVar177 | auVar69;
                  pfVar47 = pfVar38 + lVar49;
                  *pfVar47 = (float)auVar108._0_4_;
                  pfVar47[1] = (float)auVar108._4_4_;
                  pfVar47[2] = (float)auVar108._8_4_;
                  pfVar47[3] = (float)auVar108._12_4_;
                  pfVar47 = pfVar38 + lVar49 + 4;
                  *pfVar47 = (float)auVar177._0_4_;
                  pfVar47[1] = (float)auVar177._4_4_;
                  pfVar47[2] = (float)auVar177._8_4_;
                  pfVar47[3] = (float)auVar177._12_4_;
                  pfVar47 = local_68 + lVar49 + 8;
                  pfVar53 = local_68 + lVar49 + 0xc;
                  auVar109._0_4_ = (int)*pfVar47;
                  auVar109._4_4_ = (int)pfVar47[1];
                  auVar109._8_4_ = (int)pfVar47[2];
                  auVar109._12_4_ = (int)pfVar47[3];
                  auVar178._0_4_ = (int)*pfVar53;
                  auVar178._4_4_ = (int)pfVar53[1];
                  auVar178._8_4_ = (int)pfVar53[2];
                  auVar178._12_4_ = (int)pfVar53[3];
                  auVar109 = auVar109 | auVar69;
                  auVar178 = auVar178 | auVar69;
                  pfVar47 = pfVar38 + lVar49 + 8;
                  *pfVar47 = (float)auVar109._0_4_;
                  pfVar47[1] = (float)auVar109._4_4_;
                  pfVar47[2] = (float)auVar109._8_4_;
                  pfVar47[3] = (float)auVar109._12_4_;
                  pfVar47 = pfVar38 + lVar49 + 0xc;
                  *pfVar47 = (float)auVar178._0_4_;
                  pfVar47[1] = (float)auVar178._4_4_;
                  pfVar47[2] = (float)auVar178._8_4_;
                  pfVar47[3] = (float)auVar178._12_4_;
                  lVar49 = lVar49 + 0x10;
                  uVar54 = uVar54 - 2;
                } while (uVar54 != 0);
              }
              if ((uVar52 & 1) != 0) {
                pfVar47 = local_68 + lVar49;
                pfVar53 = local_68 + lVar49 + 4;
                auVar160._0_4_ = (int)*pfVar47;
                auVar160._4_4_ = (int)pfVar47[1];
                auVar160._8_4_ = (int)pfVar47[2];
                auVar160._12_4_ = (int)pfVar47[3];
                auVar220._0_4_ = (int)*pfVar53;
                auVar220._4_4_ = (int)pfVar53[1];
                auVar220._8_4_ = (int)pfVar53[2];
                auVar220._12_4_ = (int)pfVar53[3];
                auVar160 = auVar160 | auVar69;
                auVar220 = auVar220 | auVar69;
                auVar91._0_4_ = (float)auVar160._0_4_;
                auVar91._4_4_ = (float)auVar160._4_4_;
                auVar91._8_4_ = (float)auVar160._8_4_;
                auVar91._12_4_ = (float)auVar160._12_4_;
                *(undefined1 (*) [16])(pfVar38 + lVar49) = auVar91;
                pfVar47 = pfVar38 + lVar49 + 4;
                *pfVar47 = (float)auVar220._0_4_;
                pfVar47[1] = (float)auVar220._4_4_;
                pfVar47[2] = (float)auVar220._8_4_;
                pfVar47[3] = (float)auVar220._12_4_;
              }
              if (uVar44 + 1 == uVar57) goto LAB_005b73c2;
              pfVar38 = pfVar38 + uVar57;
              pfVar47 = local_68 + uVar57;
            }
            uVar56 = (uint)uVar57;
            uVar50 = ~uVar56;
            if ((uVar34 & 3) != 0) {
              iVar40 = 0;
              do {
                *pfVar38 = (float)(int)((int)*pfVar47 | uVar43);
                pfVar38 = pfVar38 + 1;
                pfVar47 = pfVar47 + 1;
                iVar40 = iVar40 + -1;
              } while (-(uVar34 & 3) != iVar40);
              uVar56 = uVar56 - iVar40;
            }
            if (2 < uVar50 + uVar34) {
              lVar49 = 0;
              do {
                pfVar38[lVar49] = (float)(int)((int)pfVar47[lVar49] | uVar43);
                pfVar38[lVar49 + 1] = (float)(int)((int)pfVar47[lVar49 + 1] | uVar43);
                pfVar38[lVar49 + 2] = (float)(int)((int)pfVar47[lVar49 + 2] | uVar43);
                pfVar38[lVar49 + 3] = (float)(int)((int)pfVar47[lVar49 + 3] | uVar43);
                lVar49 = lVar49 + 4;
              } while (uVar34 - uVar56 != (int)lVar49);
            }
          }
          goto LAB_005b73c2;
        }
      }
      else if (lStack_60 == 2) {
        if (lStack_80 - 0xeU < 2) {
          if (*(long *)(param_9 + 2) != 0xf) {
            if (*(long *)(param_9 + 2) == 0xe) goto LAB_005c5996;
            param_9[2] = 2.10195e-44;
            param_9[3] = 0.0;
            pvVar37 = malloc((long)*(int *)(param_7 + 0x28f8) << 2);
            *(void **)param_9 = pvVar37;
          }
          uVar34 = *(uint *)(param_7 + 0x28f8);
          if (0 < (int)uVar34) {
            pfVar38 = *(float **)param_9;
            uVar43 = (uint)local_68._0_4_;
            uVar44 = (ulong)(uVar34 - 1);
            uVar57 = 0;
            pfVar47 = local_88;
            if ((6 < uVar34 - 1) &&
               ((local_88 + uVar44 + 1 <= pfVar38 || (pfVar38 + uVar44 + 1 <= local_88)))) {
              uVar57 = uVar44 + 1 & 0xfffffffffffffff8;
              auVar80._4_4_ = uVar43;
              auVar80._0_4_ = uVar43;
              auVar80._8_4_ = uVar43;
              auVar80._12_4_ = uVar43;
              uVar52 = (uVar57 - 8 >> 3) + 1;
              if (uVar57 - 8 == 0) {
                lVar49 = 0;
              }
              else {
                uVar54 = uVar52 & 0x3ffffffffffffffe;
                lVar49 = 0;
                do {
                  pfVar47 = local_88 + lVar49;
                  pfVar53 = local_88 + lVar49 + 4;
                  auVar125._0_4_ = (int)*pfVar47;
                  auVar125._4_4_ = (int)pfVar47[1];
                  auVar125._8_4_ = (int)pfVar47[2];
                  auVar125._12_4_ = (int)pfVar47[3];
                  auVar192._0_4_ = (int)*pfVar53;
                  auVar192._4_4_ = (int)pfVar53[1];
                  auVar192._8_4_ = (int)pfVar53[2];
                  auVar192._12_4_ = (int)pfVar53[3];
                  auVar125 = auVar125 | auVar80;
                  auVar192 = auVar192 | auVar80;
                  pfVar47 = pfVar38 + lVar49;
                  *pfVar47 = (float)auVar125._0_4_;
                  pfVar47[1] = (float)auVar125._4_4_;
                  pfVar47[2] = (float)auVar125._8_4_;
                  pfVar47[3] = (float)auVar125._12_4_;
                  pfVar47 = pfVar38 + lVar49 + 4;
                  *pfVar47 = (float)auVar192._0_4_;
                  pfVar47[1] = (float)auVar192._4_4_;
                  pfVar47[2] = (float)auVar192._8_4_;
                  pfVar47[3] = (float)auVar192._12_4_;
                  pfVar47 = local_88 + lVar49 + 8;
                  pfVar53 = local_88 + lVar49 + 0xc;
                  auVar126._0_4_ = (int)*pfVar47;
                  auVar126._4_4_ = (int)pfVar47[1];
                  auVar126._8_4_ = (int)pfVar47[2];
                  auVar126._12_4_ = (int)pfVar47[3];
                  auVar193._0_4_ = (int)*pfVar53;
                  auVar193._4_4_ = (int)pfVar53[1];
                  auVar193._8_4_ = (int)pfVar53[2];
                  auVar193._12_4_ = (int)pfVar53[3];
                  auVar126 = auVar126 | auVar80;
                  auVar193 = auVar193 | auVar80;
                  pfVar47 = pfVar38 + lVar49 + 8;
                  *pfVar47 = (float)auVar126._0_4_;
                  pfVar47[1] = (float)auVar126._4_4_;
                  pfVar47[2] = (float)auVar126._8_4_;
                  pfVar47[3] = (float)auVar126._12_4_;
                  pfVar47 = pfVar38 + lVar49 + 0xc;
                  *pfVar47 = (float)auVar193._0_4_;
                  pfVar47[1] = (float)auVar193._4_4_;
                  pfVar47[2] = (float)auVar193._8_4_;
                  pfVar47[3] = (float)auVar193._12_4_;
                  lVar49 = lVar49 + 0x10;
                  uVar54 = uVar54 - 2;
                } while (uVar54 != 0);
              }
              if ((uVar52 & 1) != 0) {
                pfVar47 = local_88 + lVar49;
                pfVar53 = local_88 + lVar49 + 4;
                auVar166._0_4_ = (int)*pfVar47;
                auVar166._4_4_ = (int)pfVar47[1];
                auVar166._8_4_ = (int)pfVar47[2];
                auVar166._12_4_ = (int)pfVar47[3];
                auVar226._0_4_ = (int)*pfVar53;
                auVar226._4_4_ = (int)pfVar53[1];
                auVar226._8_4_ = (int)pfVar53[2];
                auVar226._12_4_ = (int)pfVar53[3];
                auVar166 = auVar166 | auVar80;
                auVar226 = auVar226 | auVar80;
                auVar97._0_4_ = (float)auVar166._0_4_;
                auVar97._4_4_ = (float)auVar166._4_4_;
                auVar97._8_4_ = (float)auVar166._8_4_;
                auVar97._12_4_ = (float)auVar166._12_4_;
                *(undefined1 (*) [16])(pfVar38 + lVar49) = auVar97;
                pfVar47 = pfVar38 + lVar49 + 4;
                *pfVar47 = (float)auVar226._0_4_;
                pfVar47[1] = (float)auVar226._4_4_;
                pfVar47[2] = (float)auVar226._8_4_;
                pfVar47[3] = (float)auVar226._12_4_;
              }
              if (uVar44 + 1 == uVar57) goto LAB_005b73c2;
              pfVar38 = pfVar38 + uVar57;
              pfVar47 = local_88 + uVar57;
            }
            uVar56 = (uint)uVar57;
            uVar50 = ~uVar56;
            if ((uVar34 & 3) != 0) {
              iVar40 = 0;
              do {
                *pfVar38 = (float)(int)((int)*pfVar47 | uVar43);
                pfVar38 = pfVar38 + 1;
                pfVar47 = pfVar47 + 1;
                iVar40 = iVar40 + -1;
              } while (-(uVar34 & 3) != iVar40);
              uVar56 = uVar56 - iVar40;
            }
            if (2 < uVar50 + uVar34) {
              lVar49 = 0;
              do {
                pfVar38[lVar49] = (float)(int)((int)pfVar47[lVar49] | uVar43);
                pfVar38[lVar49 + 1] = (float)(int)((int)pfVar47[lVar49 + 1] | uVar43);
                pfVar38[lVar49 + 2] = (float)(int)((int)pfVar47[lVar49 + 2] | uVar43);
                pfVar38[lVar49 + 3] = (float)(int)((int)pfVar47[lVar49 + 3] | uVar43);
                lVar49 = lVar49 + 4;
              } while (uVar34 - uVar56 != (int)lVar49);
            }
          }
          goto LAB_005b73c2;
        }
        if (lStack_80 == 2) {
          if (*(long *)(param_9 + 2) == 0xf) {
            iVar40 = *(int *)(param_7 + 0x28f8);
            if (0 < iVar40) {
              fVar62 = (float)((int)local_88._0_4_ | (int)local_68._0_4_);
              lVar49 = *(long *)param_9;
              uVar44 = 0;
              if (6 < iVar40 - 1U) {
                uVar52 = (ulong)(iVar40 - 1U) + 1;
                uVar44 = uVar52 & 0xfffffffffffffff8;
                uVar54 = (uVar44 - 8 >> 3) + 1;
                uVar57 = (ulong)((uint)uVar54 & 7);
                if (uVar44 - 8 < 0x38) {
                  lVar45 = 0;
                }
                else {
                  uVar54 = uVar54 & 0xfffffffffffffff8;
                  lVar45 = 0;
                  do {
                    pfVar38 = (float *)(lVar49 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    lVar45 = lVar45 + 0x40;
                    uVar54 = uVar54 - 8;
                  } while (uVar54 != 0);
                }
                if (uVar57 != 0) {
                  lVar45 = lVar49 + lVar45 * 4;
                  lVar48 = 0;
                  do {
                    pfVar38 = (float *)(lVar45 + lVar48);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    lVar48 = lVar48 + 0x20;
                  } while (uVar57 * 0x20 != lVar48);
                }
                if (uVar52 == uVar44) goto LAB_005b73c2;
                lVar49 = lVar49 + uVar44 * 4;
              }
              lVar45 = 0;
              do {
                *(float *)(lVar49 + lVar45 * 4) = fVar62;
                lVar45 = lVar45 + 1;
              } while (iVar40 - (int)uVar44 != (int)lVar45);
            }
            goto LAB_005b73c2;
          }
          param_9[2] = 2.8026e-45;
          param_9[3] = 0.0;
          fVar62 = local_68._0_4_;
LAB_005bd132:
          uVar34 = (int)local_88._0_4_ | (int)fVar62;
LAB_005bd139:
          *param_9 = (float)(int)uVar34;
          goto LAB_005b73c2;
        }
        if (lStack_80 == 1) {
          if (*(long *)(param_9 + 2) == 0xf) {
            iVar40 = *(int *)(param_7 + 0x28f8);
            if (0 < iVar40) {
              fVar62 = (float)(int)((int)local_68._0_4_ | (uint)local_88._0_4_);
              lVar49 = *(long *)param_9;
              uVar44 = 0;
              if (6 < iVar40 - 1U) {
                uVar52 = (ulong)(iVar40 - 1U) + 1;
                uVar44 = uVar52 & 0xfffffffffffffff8;
                uVar54 = (uVar44 - 8 >> 3) + 1;
                uVar57 = (ulong)((uint)uVar54 & 7);
                if (uVar44 - 8 < 0x38) {
                  lVar45 = 0;
                }
                else {
                  uVar54 = uVar54 & 0xfffffffffffffff8;
                  lVar45 = 0;
                  do {
                    pfVar38 = (float *)(lVar49 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    lVar45 = lVar45 + 0x40;
                    uVar54 = uVar54 - 8;
                  } while (uVar54 != 0);
                }
                if (uVar57 != 0) {
                  lVar45 = lVar49 + lVar45 * 4;
                  lVar48 = 0;
                  do {
                    pfVar38 = (float *)(lVar45 + lVar48);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    lVar48 = lVar48 + 0x20;
                  } while (uVar57 * 0x20 != lVar48);
                }
                if (uVar52 == uVar44) goto LAB_005b73c2;
                lVar49 = lVar49 + uVar44 * 4;
              }
              lVar45 = 0;
              do {
                *(float *)(lVar49 + lVar45 * 4) = fVar62;
                lVar45 = lVar45 + 1;
              } while (iVar40 - (int)uVar44 != (int)lVar45);
            }
            goto LAB_005b73c2;
          }
          param_9[2] = 2.8026e-45;
          param_9[3] = 0.0;
          uVar34 = (int)local_68._0_4_ | (uint)local_88._0_4_;
          goto LAB_005bd0bf;
        }
      }
      else {
        if (lStack_60 != 1) {
          pcVar55 = "expr: ex_eval(%d): bad left type %ld\n";
          uVar46 = 0x54a;
          lVar49 = lStack_60;
          goto LAB_005b73bb;
        }
        if (lStack_80 - 0xeU < 2) {
          if (*(long *)(param_9 + 2) != 0xf) {
            if (*(long *)(param_9 + 2) == 0xe) goto LAB_005c5996;
            param_9[2] = 2.10195e-44;
            param_9[3] = 0.0;
            pvVar37 = malloc((long)*(int *)(param_7 + 0x28f8) << 2);
            *(void **)param_9 = pvVar37;
          }
          uVar34 = *(uint *)(param_7 + 0x28f8);
          if (0 < (int)uVar34) {
            pfVar38 = *(float **)param_9;
            uVar43 = (uint)(float)(long)local_68;
            uVar44 = (ulong)(uVar34 - 1);
            uVar57 = 0;
            pfVar47 = local_88;
            if ((6 < uVar34 - 1) &&
               ((local_88 + uVar44 + 1 <= pfVar38 || (pfVar38 + uVar44 + 1 <= local_88)))) {
              uVar57 = uVar44 + 1 & 0xfffffffffffffff8;
              auVar75._4_4_ = uVar43;
              auVar75._0_4_ = uVar43;
              auVar75._8_4_ = uVar43;
              auVar75._12_4_ = uVar43;
              uVar52 = (uVar57 - 8 >> 3) + 1;
              if (uVar57 - 8 == 0) {
                lVar49 = 0;
              }
              else {
                uVar54 = uVar52 & 0x3ffffffffffffffe;
                lVar49 = 0;
                do {
                  pfVar47 = local_88 + lVar49;
                  pfVar53 = local_88 + lVar49 + 4;
                  auVar119._0_4_ = (int)*pfVar47;
                  auVar119._4_4_ = (int)pfVar47[1];
                  auVar119._8_4_ = (int)pfVar47[2];
                  auVar119._12_4_ = (int)pfVar47[3];
                  auVar186._0_4_ = (int)*pfVar53;
                  auVar186._4_4_ = (int)pfVar53[1];
                  auVar186._8_4_ = (int)pfVar53[2];
                  auVar186._12_4_ = (int)pfVar53[3];
                  auVar119 = auVar119 | auVar75;
                  auVar186 = auVar186 | auVar75;
                  pfVar47 = pfVar38 + lVar49;
                  *pfVar47 = (float)auVar119._0_4_;
                  pfVar47[1] = (float)auVar119._4_4_;
                  pfVar47[2] = (float)auVar119._8_4_;
                  pfVar47[3] = (float)auVar119._12_4_;
                  pfVar47 = pfVar38 + lVar49 + 4;
                  *pfVar47 = (float)auVar186._0_4_;
                  pfVar47[1] = (float)auVar186._4_4_;
                  pfVar47[2] = (float)auVar186._8_4_;
                  pfVar47[3] = (float)auVar186._12_4_;
                  pfVar47 = local_88 + lVar49 + 8;
                  pfVar53 = local_88 + lVar49 + 0xc;
                  auVar120._0_4_ = (int)*pfVar47;
                  auVar120._4_4_ = (int)pfVar47[1];
                  auVar120._8_4_ = (int)pfVar47[2];
                  auVar120._12_4_ = (int)pfVar47[3];
                  auVar187._0_4_ = (int)*pfVar53;
                  auVar187._4_4_ = (int)pfVar53[1];
                  auVar187._8_4_ = (int)pfVar53[2];
                  auVar187._12_4_ = (int)pfVar53[3];
                  auVar120 = auVar120 | auVar75;
                  auVar187 = auVar187 | auVar75;
                  pfVar47 = pfVar38 + lVar49 + 8;
                  *pfVar47 = (float)auVar120._0_4_;
                  pfVar47[1] = (float)auVar120._4_4_;
                  pfVar47[2] = (float)auVar120._8_4_;
                  pfVar47[3] = (float)auVar120._12_4_;
                  pfVar47 = pfVar38 + lVar49 + 0xc;
                  *pfVar47 = (float)auVar187._0_4_;
                  pfVar47[1] = (float)auVar187._4_4_;
                  pfVar47[2] = (float)auVar187._8_4_;
                  pfVar47[3] = (float)auVar187._12_4_;
                  lVar49 = lVar49 + 0x10;
                  uVar54 = uVar54 - 2;
                } while (uVar54 != 0);
              }
              if ((uVar52 & 1) != 0) {
                pfVar47 = local_88 + lVar49;
                pfVar53 = local_88 + lVar49 + 4;
                auVar163._0_4_ = (int)*pfVar47;
                auVar163._4_4_ = (int)pfVar47[1];
                auVar163._8_4_ = (int)pfVar47[2];
                auVar163._12_4_ = (int)pfVar47[3];
                auVar223._0_4_ = (int)*pfVar53;
                auVar223._4_4_ = (int)pfVar53[1];
                auVar223._8_4_ = (int)pfVar53[2];
                auVar223._12_4_ = (int)pfVar53[3];
                auVar163 = auVar163 | auVar75;
                auVar223 = auVar223 | auVar75;
                auVar94._0_4_ = (float)auVar163._0_4_;
                auVar94._4_4_ = (float)auVar163._4_4_;
                auVar94._8_4_ = (float)auVar163._8_4_;
                auVar94._12_4_ = (float)auVar163._12_4_;
                *(undefined1 (*) [16])(pfVar38 + lVar49) = auVar94;
                pfVar47 = pfVar38 + lVar49 + 4;
                *pfVar47 = (float)auVar223._0_4_;
                pfVar47[1] = (float)auVar223._4_4_;
                pfVar47[2] = (float)auVar223._8_4_;
                pfVar47[3] = (float)auVar223._12_4_;
              }
              if (uVar44 + 1 == uVar57) goto LAB_005b73c2;
              pfVar38 = pfVar38 + uVar57;
              pfVar47 = local_88 + uVar57;
            }
            uVar56 = (uint)uVar57;
            uVar50 = ~uVar56;
            if ((uVar34 & 3) != 0) {
              iVar40 = 0;
              do {
                *pfVar38 = (float)(int)((int)*pfVar47 | uVar43);
                pfVar38 = pfVar38 + 1;
                pfVar47 = pfVar47 + 1;
                iVar40 = iVar40 + -1;
              } while (-(uVar34 & 3) != iVar40);
              uVar56 = uVar56 - iVar40;
            }
            if (2 < uVar50 + uVar34) {
              lVar49 = 0;
              do {
                pfVar38[lVar49] = (float)(int)((int)pfVar47[lVar49] | uVar43);
                pfVar38[lVar49 + 1] = (float)(int)((int)pfVar47[lVar49 + 1] | uVar43);
                pfVar38[lVar49 + 2] = (float)(int)((int)pfVar47[lVar49 + 2] | uVar43);
                pfVar38[lVar49 + 3] = (float)(int)((int)pfVar47[lVar49 + 3] | uVar43);
                lVar49 = lVar49 + 4;
              } while (uVar34 - uVar56 != (int)lVar49);
            }
          }
          goto LAB_005b73c2;
        }
        if (lStack_80 == 2) {
          if (*(long *)(param_9 + 2) == 0xf) {
            iVar40 = *(int *)(param_7 + 0x28f8);
            if (0 < iVar40) {
              fVar62 = (float)((int)local_88._0_4_ | (int)(float)(long)local_68);
              lVar49 = *(long *)param_9;
              uVar44 = 0;
              if (6 < iVar40 - 1U) {
                uVar52 = (ulong)(iVar40 - 1U) + 1;
                uVar44 = uVar52 & 0xfffffffffffffff8;
                uVar54 = (uVar44 - 8 >> 3) + 1;
                uVar57 = (ulong)((uint)uVar54 & 7);
                if (uVar44 - 8 < 0x38) {
                  lVar45 = 0;
                }
                else {
                  uVar54 = uVar54 & 0xfffffffffffffff8;
                  lVar45 = 0;
                  do {
                    pfVar38 = (float *)(lVar49 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    lVar45 = lVar45 + 0x40;
                    uVar54 = uVar54 - 8;
                  } while (uVar54 != 0);
                }
                if (uVar57 != 0) {
                  lVar45 = lVar49 + lVar45 * 4;
                  lVar48 = 0;
                  do {
                    pfVar38 = (float *)(lVar45 + lVar48);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    lVar48 = lVar48 + 0x20;
                  } while (uVar57 * 0x20 != lVar48);
                }
                if (uVar52 == uVar44) goto LAB_005b73c2;
                lVar49 = lVar49 + uVar44 * 4;
              }
              lVar45 = 0;
              do {
                *(float *)(lVar49 + lVar45 * 4) = fVar62;
                lVar45 = lVar45 + 1;
              } while (iVar40 - (int)uVar44 != (int)lVar45);
            }
            goto LAB_005b73c2;
          }
          param_9[2] = 2.8026e-45;
          param_9[3] = 0.0;
          fVar62 = (float)(long)local_68;
          goto LAB_005bd132;
        }
        if (lStack_80 == 1) {
          if (*(long *)(param_9 + 2) == 0xf) {
            iVar40 = *(int *)(param_7 + 0x28f8);
            if (0 < iVar40) {
              fVar62 = (float)(int)((uint)local_88._0_4_ | (uint)local_68._0_4_);
              lVar49 = *(long *)param_9;
              uVar44 = 0;
              if (6 < iVar40 - 1U) {
                uVar52 = (ulong)(iVar40 - 1U) + 1;
                uVar44 = uVar52 & 0xfffffffffffffff8;
                uVar54 = (uVar44 - 8 >> 3) + 1;
                uVar57 = (ulong)((uint)uVar54 & 7);
                if (uVar44 - 8 < 0x38) {
                  lVar45 = 0;
                }
                else {
                  uVar54 = uVar54 & 0xfffffffffffffff8;
                  lVar45 = 0;
                  do {
                    pfVar38 = (float *)(lVar49 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    lVar45 = lVar45 + 0x40;
                    uVar54 = uVar54 - 8;
                  } while (uVar54 != 0);
                }
                if (uVar57 != 0) {
                  lVar45 = lVar49 + lVar45 * 4;
                  lVar48 = 0;
                  do {
                    pfVar38 = (float *)(lVar45 + lVar48);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                    *pfVar38 = fVar62;
                    pfVar38[1] = fVar62;
                    pfVar38[2] = fVar62;
                    pfVar38[3] = fVar62;
                    lVar48 = lVar48 + 0x20;
                  } while (uVar57 * 0x20 != lVar48);
                }
                if (uVar52 == uVar44) goto LAB_005b73c2;
                lVar49 = lVar49 + uVar44 * 4;
              }
              lVar45 = 0;
              do {
                *(float *)(lVar49 + lVar45 * 4) = fVar62;
                lVar45 = lVar45 + 1;
              } while (iVar40 - (int)uVar44 != (int)lVar45);
            }
            goto LAB_005b73c2;
          }
          param_9[2] = 1.4013e-45;
          param_9[3] = 0.0;
          uVar34 = (uint)local_88._0_4_ | (uint)local_68._0_4_;
          goto LAB_005bcb8a;
        }
      }
      uVar46 = 0x54a;
      goto LAB_005b7339;
    }
    if (uVar57 == 0x3001c) {
      puVar36 = eval_store(0,param_2,uVar63,uVar236,param_3,param_4,param_5,param_6,param_7,
                           (long *)puVar36,(long *)param_9,uVar34,param_11,param_12);
      return puVar36;
    }
    if (uVar57 == 0x40003) {
      puVar36 = ex_eval(0,param_2,param_3,param_4,param_5,param_6,param_7,puVar36,(float *)&local_68
                        ,puVar51,param_11,param_12);
      puVar36 = ex_eval(extraout_XMM0_Qa_08,param_2,param_3,param_4,param_5,param_6,param_7,puVar36,
                        (float *)&local_88,(undefined *)((ulong)param_10 & 0xffffffff),param_11,
                        param_12);
      uVar236 = in_XMM3._0_8_;
      uVar63 = in_XMM2._0_8_;
      uVar44 = extraout_XMM0_Qa_09;
      if (lStack_60 - 0xeU < 2) {
        if (*(long *)(param_9 + 2) == 0xf) {
          pfVar38 = *(float **)param_9;
        }
        else {
          if (*(long *)(param_9 + 2) == 0xe) goto LAB_005c5996;
          param_9[2] = 2.10195e-44;
          param_9[3] = 0.0;
          pfVar38 = malloc((long)*(int *)(param_7 + 0x28f8) << 2);
          uVar236 = in_XMM3._0_8_;
          uVar63 = in_XMM2._0_8_;
          *(float **)param_9 = pfVar38;
          uVar44 = extraout_XMM0_Qa_23;
        }
        if (1 < lStack_80 - 0xeU) {
          if (lStack_80 == 2) {
            uVar34 = *(uint *)(param_7 + 0x28f8);
            if (0 < (int)uVar34) {
              iVar40 = (int)local_88._0_4_;
              uVar57 = (ulong)(uVar34 - 1);
              uVar44 = 0;
              pfVar47 = local_68;
              if ((6 < uVar34 - 1) &&
                 ((local_68 + uVar57 + 1 <= pfVar38 || (pfVar38 + uVar57 + 1 <= local_68)))) {
                bVar60 = iVar40 != 0;
                uVar44 = uVar57 + 1 & 0xfffffffffffffff8;
                auVar83._1_3_ = 0;
                auVar83[0] = bVar60;
                auVar83[4] = bVar60;
                auVar83._5_3_ = 0;
                auVar83[8] = bVar60;
                auVar83._9_3_ = 0;
                auVar83[0xc] = bVar60;
                auVar83._13_3_ = 0;
                uVar52 = (uVar44 - 8 >> 3) + 1;
                if (uVar44 - 8 == 0) {
                  lVar49 = 0;
                }
                else {
                  uVar54 = uVar52 & 0x3ffffffffffffffe;
                  lVar49 = 0;
                  auVar172 = _DAT_0065a040 & auVar83;
                  do {
                    pfVar47 = local_68 + lVar49;
                    pfVar53 = local_68 + lVar49 + 4;
                    auVar274._0_4_ = -(uint)((int)*pfVar47 == 0);
                    auVar274._4_4_ = -(uint)((int)pfVar47[1] == 0);
                    auVar274._8_4_ = -(uint)((int)pfVar47[2] == 0);
                    auVar274._12_4_ = -(uint)((int)pfVar47[3] == 0);
                    auVar278._0_4_ = -(uint)((int)*pfVar53 == 0);
                    auVar278._4_4_ = -(uint)((int)pfVar53[1] == 0);
                    auVar278._8_4_ = -(uint)((int)pfVar53[2] == 0);
                    auVar278._12_4_ = -(uint)((int)pfVar53[3] == 0);
                    auVar238 = auVar274 & auVar172;
                    auVar268 = auVar278 & auVar172;
                    pfVar47 = pfVar38 + lVar49;
                    *pfVar47 = (float)(auVar238._0_4_ + auVar274._0_4_ + 1);
                    pfVar47[1] = (float)(auVar238._4_4_ + auVar274._4_4_ + 1);
                    pfVar47[2] = (float)(auVar238._8_4_ + auVar274._8_4_ + 1);
                    pfVar47[3] = (float)(auVar238._12_4_ + auVar274._12_4_ + 1);
                    pfVar47 = pfVar38 + lVar49 + 4;
                    *pfVar47 = (float)(auVar268._0_4_ + auVar278._0_4_ + 1);
                    pfVar47[1] = (float)(auVar268._4_4_ + auVar278._4_4_ + 1);
                    pfVar47[2] = (float)(auVar268._8_4_ + auVar278._8_4_ + 1);
                    pfVar47[3] = (float)(auVar268._12_4_ + auVar278._12_4_ + 1);
                    pfVar47 = local_68 + lVar49 + 8;
                    pfVar53 = local_68 + lVar49 + 0xc;
                    auVar275._0_4_ = -(uint)((int)*pfVar47 == 0);
                    auVar275._4_4_ = -(uint)((int)pfVar47[1] == 0);
                    auVar275._8_4_ = -(uint)((int)pfVar47[2] == 0);
                    auVar275._12_4_ = -(uint)((int)pfVar47[3] == 0);
                    auVar279._0_4_ = -(uint)((int)*pfVar53 == 0);
                    auVar279._4_4_ = -(uint)((int)pfVar53[1] == 0);
                    auVar279._8_4_ = -(uint)((int)pfVar53[2] == 0);
                    auVar279._12_4_ = -(uint)((int)pfVar53[3] == 0);
                    auVar238 = auVar275 & auVar172;
                    auVar268 = auVar279 & auVar172;
                    pfVar47 = pfVar38 + lVar49 + 8;
                    *pfVar47 = (float)(auVar238._0_4_ + auVar275._0_4_ + 1);
                    pfVar47[1] = (float)(auVar238._4_4_ + auVar275._4_4_ + 1);
                    pfVar47[2] = (float)(auVar238._8_4_ + auVar275._8_4_ + 1);
                    pfVar47[3] = (float)(auVar238._12_4_ + auVar275._12_4_ + 1);
                    pfVar47 = pfVar38 + lVar49 + 0xc;
                    *pfVar47 = (float)(auVar268._0_4_ + auVar279._0_4_ + 1);
                    pfVar47[1] = (float)(auVar268._4_4_ + auVar279._4_4_ + 1);
                    pfVar47[2] = (float)(auVar268._8_4_ + auVar279._8_4_ + 1);
                    pfVar47[3] = (float)(auVar268._12_4_ + auVar279._12_4_ + 1);
                    lVar49 = lVar49 + 0x10;
                    uVar54 = uVar54 - 2;
                  } while (uVar54 != 0);
                }
                if ((uVar52 & 1) != 0) {
                  pfVar47 = local_68 + lVar49;
                  pfVar53 = local_68 + lVar49 + 4;
                  auVar169._0_4_ = -(uint)((int)*pfVar47 == 0);
                  auVar169._4_4_ = -(uint)((int)pfVar47[1] == 0);
                  auVar169._8_4_ = -(uint)((int)pfVar47[2] == 0);
                  auVar169._12_4_ = -(uint)((int)pfVar47[3] == 0);
                  auVar229._0_4_ = -(uint)((int)*pfVar53 == 0);
                  auVar229._4_4_ = -(uint)((int)pfVar53[1] == 0);
                  auVar229._8_4_ = -(uint)((int)pfVar53[2] == 0);
                  auVar229._12_4_ = -(uint)((int)pfVar53[3] == 0);
                  auVar238 = auVar169 & auVar83 & _DAT_0065a040;
                  auVar172 = auVar83 & auVar229 & _DAT_0065a040;
                  pfVar47 = pfVar38 + lVar49;
                  *pfVar47 = (float)(auVar238._0_4_ + auVar169._0_4_ + 1);
                  pfVar47[1] = (float)(auVar238._4_4_ + auVar169._4_4_ + 1);
                  pfVar47[2] = (float)(auVar238._8_4_ + auVar169._8_4_ + 1);
                  pfVar47[3] = (float)(auVar238._12_4_ + auVar169._12_4_ + 1);
                  pfVar47 = pfVar38 + lVar49 + 4;
                  *pfVar47 = (float)(auVar172._0_4_ + auVar229._0_4_ + 1);
                  pfVar47[1] = (float)(auVar172._4_4_ + auVar229._4_4_ + 1);
                  pfVar47[2] = (float)(auVar172._8_4_ + auVar229._8_4_ + 1);
                  pfVar47[3] = (float)(auVar172._12_4_ + auVar229._12_4_ + 1);
                }
                if (uVar57 + 1 == uVar44) goto LAB_005b73c2;
                pfVar38 = pfVar38 + uVar44;
                pfVar47 = local_68 + uVar44;
              }
              uVar50 = (uint)uVar44 + 1;
              uVar43 = (uint)uVar44;
              if ((uVar34 & 1) != 0) {
                if ((int)*pfVar47 == 0 && iVar40 == 0) {
                  fVar62 = 0.0;
                }
                else {
                  fVar62 = DAT_005d9038;
                }
                *pfVar38 = fVar62;
                pfVar38 = pfVar38 + 1;
                pfVar47 = pfVar47 + 1;
                uVar43 = uVar50;
              }
              fVar62 = DAT_005d9038;
              if (uVar34 != uVar50) {
                lVar49 = 0;
                do {
                  fVar232 = fVar62;
                  if ((int)pfVar47[lVar49] == 0 && iVar40 == 0) {
                    fVar232 = 0.0;
                  }
                  pfVar38[lVar49] = fVar232;
                  fVar232 = fVar62;
                  if ((int)pfVar47[lVar49 + 1] == 0 && iVar40 == 0) {
                    fVar232 = 0.0;
                  }
                  pfVar38[lVar49 + 1] = fVar232;
                  lVar49 = lVar49 + 2;
                } while (uVar34 - uVar43 != (int)lVar49);
              }
            }
            goto LAB_005b73c2;
          }
          if (lStack_80 == 1) {
            uVar34 = *(uint *)(param_7 + 0x28f8);
            if (0 < (int)uVar34) {
              iVar40 = (int)(float)(long)local_88;
              uVar57 = (ulong)(uVar34 - 1);
              uVar44 = 0;
              pfVar47 = local_68;
              if ((6 < uVar34 - 1) &&
                 ((local_68 + uVar57 + 1 <= pfVar38 || (pfVar38 + uVar57 + 1 <= local_68)))) {
                bVar60 = iVar40 != 0;
                uVar44 = uVar57 + 1 & 0xfffffffffffffff8;
                auVar67._1_3_ = 0;
                auVar67[0] = bVar60;
                auVar67[4] = bVar60;
                auVar67._5_3_ = 0;
                auVar67[8] = bVar60;
                auVar67._9_3_ = 0;
                auVar67[0xc] = bVar60;
                auVar67._13_3_ = 0;
                uVar52 = (uVar44 - 8 >> 3) + 1;
                if (uVar44 - 8 == 0) {
                  lVar49 = 0;
                }
                else {
                  uVar54 = uVar52 & 0x3ffffffffffffffe;
                  lVar49 = 0;
                  auVar172 = _DAT_0065a040 & auVar67;
                  do {
                    pfVar47 = local_68 + lVar49;
                    pfVar53 = local_68 + lVar49 + 4;
                    auVar270._0_4_ = -(uint)((int)*pfVar47 == 0);
                    auVar270._4_4_ = -(uint)((int)pfVar47[1] == 0);
                    auVar270._8_4_ = -(uint)((int)pfVar47[2] == 0);
                    auVar270._12_4_ = -(uint)((int)pfVar47[3] == 0);
                    auVar276._0_4_ = -(uint)((int)*pfVar53 == 0);
                    auVar276._4_4_ = -(uint)((int)pfVar53[1] == 0);
                    auVar276._8_4_ = -(uint)((int)pfVar53[2] == 0);
                    auVar276._12_4_ = -(uint)((int)pfVar53[3] == 0);
                    auVar238 = auVar270 & auVar172;
                    auVar268 = auVar276 & auVar172;
                    pfVar47 = pfVar38 + lVar49;
                    *pfVar47 = (float)(auVar238._0_4_ + auVar270._0_4_ + 1);
                    pfVar47[1] = (float)(auVar238._4_4_ + auVar270._4_4_ + 1);
                    pfVar47[2] = (float)(auVar238._8_4_ + auVar270._8_4_ + 1);
                    pfVar47[3] = (float)(auVar238._12_4_ + auVar270._12_4_ + 1);
                    pfVar47 = pfVar38 + lVar49 + 4;
                    *pfVar47 = (float)(auVar268._0_4_ + auVar276._0_4_ + 1);
                    pfVar47[1] = (float)(auVar268._4_4_ + auVar276._4_4_ + 1);
                    pfVar47[2] = (float)(auVar268._8_4_ + auVar276._8_4_ + 1);
                    pfVar47[3] = (float)(auVar268._12_4_ + auVar276._12_4_ + 1);
                    pfVar47 = local_68 + lVar49 + 8;
                    pfVar53 = local_68 + lVar49 + 0xc;
                    auVar271._0_4_ = -(uint)((int)*pfVar47 == 0);
                    auVar271._4_4_ = -(uint)((int)pfVar47[1] == 0);
                    auVar271._8_4_ = -(uint)((int)pfVar47[2] == 0);
                    auVar271._12_4_ = -(uint)((int)pfVar47[3] == 0);
                    auVar277._0_4_ = -(uint)((int)*pfVar53 == 0);
                    auVar277._4_4_ = -(uint)((int)pfVar53[1] == 0);
                    auVar277._8_4_ = -(uint)((int)pfVar53[2] == 0);
                    auVar277._12_4_ = -(uint)((int)pfVar53[3] == 0);
                    auVar238 = auVar271 & auVar172;
                    auVar268 = auVar277 & auVar172;
                    pfVar47 = pfVar38 + lVar49 + 8;
                    *pfVar47 = (float)(auVar238._0_4_ + auVar271._0_4_ + 1);
                    pfVar47[1] = (float)(auVar238._4_4_ + auVar271._4_4_ + 1);
                    pfVar47[2] = (float)(auVar238._8_4_ + auVar271._8_4_ + 1);
                    pfVar47[3] = (float)(auVar238._12_4_ + auVar271._12_4_ + 1);
                    pfVar47 = pfVar38 + lVar49 + 0xc;
                    *pfVar47 = (float)(auVar268._0_4_ + auVar277._0_4_ + 1);
                    pfVar47[1] = (float)(auVar268._4_4_ + auVar277._4_4_ + 1);
                    pfVar47[2] = (float)(auVar268._8_4_ + auVar277._8_4_ + 1);
                    pfVar47[3] = (float)(auVar268._12_4_ + auVar277._12_4_ + 1);
                    lVar49 = lVar49 + 0x10;
                    uVar54 = uVar54 - 2;
                  } while (uVar54 != 0);
                }
                if ((uVar52 & 1) != 0) {
                  pfVar47 = local_68 + lVar49;
                  pfVar53 = local_68 + lVar49 + 4;
                  auVar158._0_4_ = -(uint)((int)*pfVar47 == 0);
                  auVar158._4_4_ = -(uint)((int)pfVar47[1] == 0);
                  auVar158._8_4_ = -(uint)((int)pfVar47[2] == 0);
                  auVar158._12_4_ = -(uint)((int)pfVar47[3] == 0);
                  auVar218._0_4_ = -(uint)((int)*pfVar53 == 0);
                  auVar218._4_4_ = -(uint)((int)pfVar53[1] == 0);
                  auVar218._8_4_ = -(uint)((int)pfVar53[2] == 0);
                  auVar218._12_4_ = -(uint)((int)pfVar53[3] == 0);
                  auVar238 = auVar158 & auVar67 & _DAT_0065a040;
                  auVar172 = auVar67 & auVar218 & _DAT_0065a040;
                  pfVar47 = pfVar38 + lVar49;
                  *pfVar47 = (float)(auVar238._0_4_ + auVar158._0_4_ + 1);
                  pfVar47[1] = (float)(auVar238._4_4_ + auVar158._4_4_ + 1);
                  pfVar47[2] = (float)(auVar238._8_4_ + auVar158._8_4_ + 1);
                  pfVar47[3] = (float)(auVar238._12_4_ + auVar158._12_4_ + 1);
                  pfVar47 = pfVar38 + lVar49 + 4;
                  *pfVar47 = (float)(auVar172._0_4_ + auVar218._0_4_ + 1);
                  pfVar47[1] = (float)(auVar172._4_4_ + auVar218._4_4_ + 1);
                  pfVar47[2] = (float)(auVar172._8_4_ + auVar218._8_4_ + 1);
                  pfVar47[3] = (float)(auVar172._12_4_ + auVar218._12_4_ + 1);
                }
                if (uVar57 + 1 == uVar44) goto LAB_005b73c2;
                pfVar38 = pfVar38 + uVar44;
                pfVar47 = local_68 + uVar44;
              }
              uVar50 = (uint)uVar44 + 1;
              uVar43 = (uint)uVar44;
              if ((uVar34 & 1) != 0) {
                if ((int)*pfVar47 == 0 && iVar40 == 0) {
                  fVar62 = 0.0;
                }
                else {
                  fVar62 = DAT_005d9038;
                }
                *pfVar38 = fVar62;
                pfVar38 = pfVar38 + 1;
                pfVar47 = pfVar47 + 1;
                uVar43 = uVar50;
              }
              fVar62 = DAT_005d9038;
              if (uVar34 != uVar50) {
                lVar49 = 0;
                do {
                  fVar232 = fVar62;
                  if ((int)pfVar47[lVar49] == 0 && iVar40 == 0) {
                    fVar232 = 0.0;
                  }
                  pfVar38[lVar49] = fVar232;
                  fVar232 = fVar62;
                  if ((int)pfVar47[lVar49 + 1] == 0 && iVar40 == 0) {
                    fVar232 = 0.0;
                  }
                  pfVar38[lVar49 + 1] = fVar232;
                  lVar49 = lVar49 + 2;
                } while (uVar34 - uVar43 != (int)lVar49);
              }
            }
            goto LAB_005b73c2;
          }
LAB_005b72b8:
          uVar46 = 0x54e;
          goto LAB_005b7339;
        }
        uVar34 = *(uint *)(param_7 + 0x28f8);
        if ((int)uVar34 < 1) goto LAB_005b73c2;
        pfVar47 = local_88;
        pfVar53 = local_68;
        if (uVar34 != 1) {
          lVar49 = 0;
          lVar45 = 0;
          do {
            bVar60 = true;
            bVar61 = true;
            if ((int)local_68[lVar49] == 0) {
              bVar61 = (int)local_88[lVar49] != 0;
            }
            pfVar38[lVar49] = (float)bVar61;
            if ((int)local_68[lVar49 + 1] == 0) {
              bVar60 = (int)local_88[lVar49 + 1] != 0;
            }
            pfVar38[lVar49 + 1] = (float)bVar60;
            lVar45 = lVar45 + -8;
            lVar49 = lVar49 + 2;
          } while ((uVar34 & 0xfffffffe) != (uint)lVar49);
          pfVar38 = (float *)((long)pfVar38 - lVar45);
          pfVar47 = (float *)((long)local_88 - lVar45);
          pfVar53 = (float *)((long)local_68 - lVar45);
        }
        if ((uVar34 & 1) == 0) goto LAB_005b73c2;
        iVar40 = (int)*pfVar53;
      }
      else {
        if (lStack_60 == 2) {
          if (1 < lStack_80 - 0xeU) {
            if (lStack_80 == 2) {
              if (*(long *)(param_9 + 2) == 0xf) {
                if ((int)local_88._0_4_ == 0 && (int)local_68._0_4_ == 0) {
                  fVar62 = 0.0;
                }
                else {
                  fVar62 = DAT_005d9038;
                }
                iVar40 = *(int *)(param_7 + 0x28f8);
                if (0 < iVar40) {
                  lVar49 = *(long *)param_9;
                  uVar44 = 0;
                  if (6 < iVar40 - 1U) {
                    uVar52 = (ulong)(iVar40 - 1U) + 1;
                    uVar44 = uVar52 & 0xfffffffffffffff8;
                    uVar54 = (uVar44 - 8 >> 3) + 1;
                    uVar57 = (ulong)((uint)uVar54 & 7);
                    if (uVar44 - 8 < 0x38) {
                      lVar45 = 0;
                    }
                    else {
                      uVar54 = uVar54 & 0xfffffffffffffff8;
                      lVar45 = 0;
                      do {
                        pfVar38 = (float *)(lVar49 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar45 = lVar45 + 0x40;
                        uVar54 = uVar54 - 8;
                      } while (uVar54 != 0);
                    }
                    if (uVar57 != 0) {
                      lVar45 = lVar49 + lVar45 * 4;
                      lVar48 = 0;
                      do {
                        pfVar38 = (float *)(lVar45 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar48 = lVar48 + 0x20;
                      } while (uVar57 * 0x20 != lVar48);
                    }
                    if (uVar52 == uVar44) goto LAB_005b73c2;
                    lVar49 = lVar49 + uVar44 * 4;
                  }
                  lVar45 = 0;
                  do {
                    *(float *)(lVar49 + lVar45 * 4) = fVar62;
                    lVar45 = lVar45 + 1;
                  } while (iVar40 - (int)uVar44 != (int)lVar45);
                }
                goto LAB_005b73c2;
              }
              param_9[2] = 2.8026e-45;
              param_9[3] = 0.0;
              if ((int)local_88._0_4_ == 0 && (int)local_68._0_4_ == 0) {
LAB_005bcc34:
                *param_9 = 0.0;
                goto LAB_005b73c2;
              }
            }
            else {
              if (lStack_80 != 1) goto LAB_005b72b8;
              if (*(long *)(param_9 + 2) == 0xf) {
                if ((int)local_68._0_4_ == 0 && local_88._0_4_ == 0.0) {
                  fVar62 = 0.0;
                }
                else {
                  fVar62 = DAT_005d9038;
                }
                iVar40 = *(int *)(param_7 + 0x28f8);
                if (0 < iVar40) {
                  lVar49 = *(long *)param_9;
                  uVar44 = 0;
                  if (6 < iVar40 - 1U) {
                    uVar52 = (ulong)(iVar40 - 1U) + 1;
                    uVar44 = uVar52 & 0xfffffffffffffff8;
                    uVar54 = (uVar44 - 8 >> 3) + 1;
                    uVar57 = (ulong)((uint)uVar54 & 7);
                    if (uVar44 - 8 < 0x38) {
                      lVar45 = 0;
                    }
                    else {
                      uVar54 = uVar54 & 0xfffffffffffffff8;
                      lVar45 = 0;
                      do {
                        pfVar38 = (float *)(lVar49 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar45 = lVar45 + 0x40;
                        uVar54 = uVar54 - 8;
                      } while (uVar54 != 0);
                    }
                    if (uVar57 != 0) {
                      lVar45 = lVar49 + lVar45 * 4;
                      lVar48 = 0;
                      do {
                        pfVar38 = (float *)(lVar45 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar48 = lVar48 + 0x20;
                      } while (uVar57 * 0x20 != lVar48);
                    }
                    if (uVar52 == uVar44) goto LAB_005b73c2;
                    lVar49 = lVar49 + uVar44 * 4;
                  }
                  lVar45 = 0;
                  do {
                    *(float *)(lVar49 + lVar45 * 4) = fVar62;
                    lVar45 = lVar45 + 1;
                  } while (iVar40 - (int)uVar44 != (int)lVar45);
                }
                goto LAB_005b73c2;
              }
              param_9[2] = 2.8026e-45;
              param_9[3] = 0.0;
              if ((int)local_68._0_4_ == 0 && local_88._0_4_ == 0.0) goto LAB_005bcc34;
            }
LAB_005bce5a:
            *param_9 = DAT_005d9038;
            goto LAB_005b73c2;
          }
          if (*(long *)(param_9 + 2) != 0xf) {
            if (*(long *)(param_9 + 2) == 0xe) goto LAB_005c5996;
            param_9[2] = 2.10195e-44;
            param_9[3] = 0.0;
            pvVar37 = malloc((long)*(int *)(param_7 + 0x28f8) << 2);
            *(void **)param_9 = pvVar37;
          }
          uVar34 = *(uint *)(param_7 + 0x28f8);
          if ((int)uVar34 < 1) goto LAB_005b73c2;
          pfVar38 = *(float **)param_9;
          iVar40 = (int)local_68._0_4_;
          pfVar47 = local_88;
          if (uVar34 != 1) {
            lVar49 = 0;
            lVar45 = 0;
            do {
              bVar60 = true;
              bVar61 = true;
              if (iVar40 == 0) {
                bVar61 = (int)local_88[lVar49] != 0;
              }
              pfVar38[lVar49] = (float)bVar61;
              if (iVar40 == 0) {
                bVar60 = (int)local_88[lVar49 + 1] != 0;
              }
              pfVar38[lVar49 + 1] = (float)bVar60;
              lVar45 = lVar45 + -8;
              lVar49 = lVar49 + 2;
            } while ((uVar34 & 0xfffffffe) != (uint)lVar49);
            pfVar38 = (float *)((long)pfVar38 - lVar45);
            pfVar47 = (float *)((long)local_88 - lVar45);
          }
        }
        else {
          if (lStack_60 != 1) {
            pcVar55 = "expr: ex_eval(%d): bad left type %ld\n";
            uVar46 = 0x54e;
            lVar49 = lStack_60;
            goto LAB_005b73bb;
          }
          if (1 < lStack_80 - 0xeU) {
            if (lStack_80 == 2) {
              if (*(long *)(param_9 + 2) == 0xf) {
                if ((int)local_88._0_4_ == 0 && (int)(float)(long)local_68 == 0) {
                  fVar62 = 0.0;
                }
                else {
                  fVar62 = DAT_005d9038;
                }
                iVar40 = *(int *)(param_7 + 0x28f8);
                if (0 < iVar40) {
                  lVar49 = *(long *)param_9;
                  uVar44 = 0;
                  if (6 < iVar40 - 1U) {
                    uVar52 = (ulong)(iVar40 - 1U) + 1;
                    uVar44 = uVar52 & 0xfffffffffffffff8;
                    uVar54 = (uVar44 - 8 >> 3) + 1;
                    uVar57 = (ulong)((uint)uVar54 & 7);
                    if (uVar44 - 8 < 0x38) {
                      lVar45 = 0;
                    }
                    else {
                      uVar54 = uVar54 & 0xfffffffffffffff8;
                      lVar45 = 0;
                      do {
                        pfVar38 = (float *)(lVar49 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar45 = lVar45 + 0x40;
                        uVar54 = uVar54 - 8;
                      } while (uVar54 != 0);
                    }
                    if (uVar57 != 0) {
                      lVar45 = lVar49 + lVar45 * 4;
                      lVar48 = 0;
                      do {
                        pfVar38 = (float *)(lVar45 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar48 = lVar48 + 0x20;
                      } while (uVar57 * 0x20 != lVar48);
                    }
                    if (uVar52 == uVar44) goto LAB_005b73c2;
                    lVar49 = lVar49 + uVar44 * 4;
                  }
                  lVar45 = 0;
                  do {
                    *(float *)(lVar49 + lVar45 * 4) = fVar62;
                    lVar45 = lVar45 + 1;
                  } while (iVar40 - (int)uVar44 != (int)lVar45);
                }
                goto LAB_005b73c2;
              }
              param_9[2] = 2.8026e-45;
              param_9[3] = 0.0;
              if ((int)local_88._0_4_ == 0 && (int)(float)(long)local_68 == 0) goto LAB_005bcc34;
              goto LAB_005bce5a;
            }
            if (lStack_80 == 1) {
              if (*(long *)(param_9 + 2) == 0xf) {
                if (local_68._0_4_ == 0.0 && local_88._0_4_ == 0.0) {
                  fVar62 = 0.0;
                }
                else {
                  fVar62 = DAT_005d9038;
                }
                iVar40 = *(int *)(param_7 + 0x28f8);
                if (0 < iVar40) {
                  lVar49 = *(long *)param_9;
                  uVar44 = 0;
                  if (6 < iVar40 - 1U) {
                    uVar52 = (ulong)(iVar40 - 1U) + 1;
                    uVar44 = uVar52 & 0xfffffffffffffff8;
                    uVar54 = (uVar44 - 8 >> 3) + 1;
                    uVar57 = (ulong)((uint)uVar54 & 7);
                    if (uVar44 - 8 < 0x38) {
                      lVar45 = 0;
                    }
                    else {
                      uVar54 = uVar54 & 0xfffffffffffffff8;
                      lVar45 = 0;
                      do {
                        pfVar38 = (float *)(lVar49 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar45 = lVar45 + 0x40;
                        uVar54 = uVar54 - 8;
                      } while (uVar54 != 0);
                    }
                    if (uVar57 != 0) {
                      lVar45 = lVar49 + lVar45 * 4;
                      lVar48 = 0;
                      do {
                        pfVar38 = (float *)(lVar45 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar48 = lVar48 + 0x20;
                      } while (uVar57 * 0x20 != lVar48);
                    }
                    if (uVar52 == uVar44) goto LAB_005b73c2;
                    lVar49 = lVar49 + uVar44 * 4;
                  }
                  lVar45 = 0;
                  do {
                    *(float *)(lVar49 + lVar45 * 4) = fVar62;
                    lVar45 = lVar45 + 1;
                  } while (iVar40 - (int)uVar44 != (int)lVar45);
                }
                goto LAB_005b73c2;
              }
              param_9[2] = 1.4013e-45;
              param_9[3] = 0.0;
              bVar60 = local_68._0_4_ == 0.0 && local_88._0_4_ == 0.0;
              goto LAB_005bcba7;
            }
            goto LAB_005b72b8;
          }
          if (*(long *)(param_9 + 2) != 0xf) {
            if (*(long *)(param_9 + 2) == 0xe) goto LAB_005c5996;
            param_9[2] = 2.10195e-44;
            param_9[3] = 0.0;
            pvVar37 = malloc((long)*(int *)(param_7 + 0x28f8) << 2);
            *(void **)param_9 = pvVar37;
          }
          uVar34 = *(uint *)(param_7 + 0x28f8);
          if ((int)uVar34 < 1) goto LAB_005b73c2;
          pfVar38 = *(float **)param_9;
          iVar40 = (int)(float)(long)local_68;
          pfVar47 = local_88;
          if (uVar34 != 1) {
            lVar49 = 0;
            lVar45 = 0;
            do {
              bVar60 = true;
              bVar61 = true;
              if (iVar40 == 0) {
                bVar61 = (int)local_88[lVar49] != 0;
              }
              pfVar38[lVar49] = (float)bVar61;
              if (iVar40 == 0) {
                bVar60 = (int)local_88[lVar49 + 1] != 0;
              }
              pfVar38[lVar49 + 1] = (float)bVar60;
              lVar45 = lVar45 + -8;
              lVar49 = lVar49 + 2;
            } while ((uVar34 & 0xfffffffe) != (uint)lVar49);
            pfVar38 = (float *)((long)pfVar38 - lVar45);
            pfVar47 = (float *)((long)local_88 - lVar45);
          }
        }
        if ((uVar34 & 1) == 0) goto LAB_005b73c2;
      }
      if (iVar40 != 0) goto LAB_005bc7e0;
      fVar62 = *pfVar47;
joined_r0x005bc7d9:
      if ((int)fVar62 != 0) goto LAB_005bc7e0;
LAB_005bc7db:
      fVar62 = 0.0;
    }
    else {
      if (uVar57 != 0x50004) goto code_r0x005b4c3c;
      puVar36 = ex_eval(0,param_2,param_3,param_4,param_5,param_6,param_7,puVar36,(float *)&local_68
                        ,puVar51,param_11,param_12);
      puVar36 = ex_eval(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,puVar36,
                        (float *)&local_88,(undefined *)((ulong)param_10 & 0xffffffff),param_11,
                        param_12);
      uVar236 = in_XMM3._0_8_;
      uVar63 = in_XMM2._0_8_;
      uVar44 = extraout_XMM0_Qa_00;
      if (1 < lStack_60 - 0xeU) {
        if (lStack_60 == 2) {
          if (1 < lStack_80 - 0xeU) {
            fVar62 = local_68._0_4_;
            if (lStack_80 == 2) {
              if (*(long *)(param_9 + 2) == 0xf) {
                iVar40 = *(int *)(param_7 + 0x28f8);
                if (0 < iVar40) {
                  fVar62 = (float)((int)local_68._0_4_ != 0 && (int)local_88._0_4_ != 0);
                  lVar49 = *(long *)param_9;
                  uVar44 = 0;
                  if (6 < iVar40 - 1U) {
                    uVar52 = (ulong)(iVar40 - 1U) + 1;
                    uVar44 = uVar52 & 0xfffffffffffffff8;
                    uVar54 = (uVar44 - 8 >> 3) + 1;
                    uVar57 = (ulong)((uint)uVar54 & 7);
                    if (uVar44 - 8 < 0x38) {
                      lVar45 = 0;
                    }
                    else {
                      uVar54 = uVar54 & 0xfffffffffffffff8;
                      lVar45 = 0;
                      do {
                        pfVar38 = (float *)(lVar49 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar45 = lVar45 + 0x40;
                        uVar54 = uVar54 - 8;
                      } while (uVar54 != 0);
                    }
                    if (uVar57 != 0) {
                      lVar45 = lVar49 + lVar45 * 4;
                      lVar48 = 0;
                      do {
                        pfVar38 = (float *)(lVar45 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar48 = lVar48 + 0x20;
                      } while (uVar57 * 0x20 != lVar48);
                    }
                    if (uVar52 == uVar44) goto LAB_005b73c2;
                    lVar49 = lVar49 + uVar44 * 4;
                  }
                  lVar45 = 0;
                  do {
                    *(float *)(lVar49 + lVar45 * 4) = fVar62;
                    lVar45 = lVar45 + 1;
                  } while (iVar40 - (int)uVar44 != (int)lVar45);
                }
                goto LAB_005b73c2;
              }
              param_9[2] = 2.8026e-45;
              param_9[3] = 0.0;
LAB_005bcfa1:
              fVar232 = (float)(int)local_88._0_4_;
            }
            else {
              if (lStack_80 != 1) goto LAB_005b724e;
              if (*(long *)(param_9 + 2) == 0xf) {
                iVar40 = *(int *)(param_7 + 0x28f8);
                if (0 < iVar40) {
                  fVar62 = (float)((int)local_68._0_4_ != 0 && local_88._0_4_ != 0.0);
                  lVar49 = *(long *)param_9;
                  uVar44 = 0;
                  if (6 < iVar40 - 1U) {
                    uVar52 = (ulong)(iVar40 - 1U) + 1;
                    uVar44 = uVar52 & 0xfffffffffffffff8;
                    uVar54 = (uVar44 - 8 >> 3) + 1;
                    uVar57 = (ulong)((uint)uVar54 & 7);
                    if (uVar44 - 8 < 0x38) {
                      lVar45 = 0;
                    }
                    else {
                      uVar54 = uVar54 & 0xfffffffffffffff8;
                      lVar45 = 0;
                      do {
                        pfVar38 = (float *)(lVar49 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar45 = lVar45 + 0x40;
                        uVar54 = uVar54 - 8;
                      } while (uVar54 != 0);
                    }
                    if (uVar57 != 0) {
                      lVar45 = lVar49 + lVar45 * 4;
                      lVar48 = 0;
                      do {
                        pfVar38 = (float *)(lVar45 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar48 = lVar48 + 0x20;
                      } while (uVar57 * 0x20 != lVar48);
                    }
                    if (uVar52 == uVar44) goto LAB_005b73c2;
                    lVar49 = lVar49 + uVar44 * 4;
                  }
                  lVar45 = 0;
                  do {
                    *(float *)(lVar49 + lVar45 * 4) = fVar62;
                    lVar45 = lVar45 + 1;
                  } while (iVar40 - (int)uVar44 != (int)lVar45);
                }
                goto LAB_005b73c2;
              }
              param_9[2] = 2.8026e-45;
              param_9[3] = 0.0;
              fVar232 = local_88._0_4_;
            }
            uVar34 = (uint)(fVar232 != 0.0 && (int)fVar62 != 0);
            goto LAB_005bd0bf;
          }
          if (*(long *)(param_9 + 2) != 0xf) {
            if (*(long *)(param_9 + 2) == 0xe) goto LAB_005c5996;
            param_9[2] = 2.10195e-44;
            param_9[3] = 0.0;
            pvVar37 = malloc((long)*(int *)(param_7 + 0x28f8) << 2);
            *(void **)param_9 = pvVar37;
          }
          uVar34 = *(uint *)(param_7 + 0x28f8);
          if ((int)uVar34 < 1) goto LAB_005b73c2;
          pfVar38 = *(float **)param_9;
          iVar40 = (int)local_68._0_4_;
          pfVar47 = local_88;
          if (uVar34 != 1) {
            lVar49 = 0;
            lVar45 = 0;
            do {
              if (iVar40 == 0) {
                bVar60 = false;
              }
              else {
                bVar60 = (int)local_88[lVar49] != 0;
              }
              pfVar38[lVar49] = (float)bVar60;
              if (iVar40 == 0) {
                bVar60 = false;
              }
              else {
                bVar60 = (int)local_88[lVar49 + 1] != 0;
              }
              pfVar38[lVar49 + 1] = (float)bVar60;
              lVar45 = lVar45 + -8;
              lVar49 = lVar49 + 2;
            } while ((uVar34 & 0xfffffffe) != (uint)lVar49);
            pfVar38 = (float *)((long)pfVar38 - lVar45);
            pfVar47 = (float *)((long)local_88 - lVar45);
          }
        }
        else {
          if (lStack_60 != 1) {
            pcVar55 = "expr: ex_eval(%d): bad left type %ld\n";
            uVar46 = 0x54c;
            lVar49 = lStack_60;
            goto LAB_005b73bb;
          }
          if (1 < lStack_80 - 0xeU) {
            if (lStack_80 == 2) {
              if (*(long *)(param_9 + 2) == 0xf) {
                iVar40 = *(int *)(param_7 + 0x28f8);
                if (0 < iVar40) {
                  fVar62 = (float)((int)(float)(long)local_68 != 0 && (int)local_88._0_4_ != 0);
                  lVar49 = *(long *)param_9;
                  uVar44 = 0;
                  if (6 < iVar40 - 1U) {
                    uVar52 = (ulong)(iVar40 - 1U) + 1;
                    uVar44 = uVar52 & 0xfffffffffffffff8;
                    uVar54 = (uVar44 - 8 >> 3) + 1;
                    uVar57 = (ulong)((uint)uVar54 & 7);
                    if (uVar44 - 8 < 0x38) {
                      lVar45 = 0;
                    }
                    else {
                      uVar54 = uVar54 & 0xfffffffffffffff8;
                      lVar45 = 0;
                      do {
                        pfVar38 = (float *)(lVar49 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar45 = lVar45 + 0x40;
                        uVar54 = uVar54 - 8;
                      } while (uVar54 != 0);
                    }
                    if (uVar57 != 0) {
                      lVar45 = lVar49 + lVar45 * 4;
                      lVar48 = 0;
                      do {
                        pfVar38 = (float *)(lVar45 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar48 = lVar48 + 0x20;
                      } while (uVar57 * 0x20 != lVar48);
                    }
                    if (uVar52 == uVar44) goto LAB_005b73c2;
                    lVar49 = lVar49 + uVar44 * 4;
                  }
                  lVar45 = 0;
                  do {
                    *(float *)(lVar49 + lVar45 * 4) = fVar62;
                    lVar45 = lVar45 + 1;
                  } while (iVar40 - (int)uVar44 != (int)lVar45);
                }
                goto LAB_005b73c2;
              }
              param_9[2] = 2.8026e-45;
              param_9[3] = 0.0;
              fVar62 = (float)(long)local_68;
              goto LAB_005bcfa1;
            }
            if (lStack_80 == 1) {
              if (*(long *)(param_9 + 2) == 0xf) {
                iVar40 = *(int *)(param_7 + 0x28f8);
                if (0 < iVar40) {
                  fVar62 = (float)(local_68._0_4_ != 0.0 && local_88._0_4_ != 0.0);
                  lVar49 = *(long *)param_9;
                  uVar44 = 0;
                  if (6 < iVar40 - 1U) {
                    uVar52 = (ulong)(iVar40 - 1U) + 1;
                    uVar44 = uVar52 & 0xfffffffffffffff8;
                    uVar54 = (uVar44 - 8 >> 3) + 1;
                    uVar57 = (ulong)((uint)uVar54 & 7);
                    if (uVar44 - 8 < 0x38) {
                      lVar45 = 0;
                    }
                    else {
                      uVar54 = uVar54 & 0xfffffffffffffff8;
                      lVar45 = 0;
                      do {
                        pfVar38 = (float *)(lVar49 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar45 = lVar45 + 0x40;
                        uVar54 = uVar54 - 8;
                      } while (uVar54 != 0);
                    }
                    if (uVar57 != 0) {
                      lVar45 = lVar49 + lVar45 * 4;
                      lVar48 = 0;
                      do {
                        pfVar38 = (float *)(lVar45 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
                        *pfVar38 = fVar62;
                        pfVar38[1] = fVar62;
                        pfVar38[2] = fVar62;
                        pfVar38[3] = fVar62;
                        lVar48 = lVar48 + 0x20;
                      } while (uVar57 * 0x20 != lVar48);
                    }
                    if (uVar52 == uVar44) goto LAB_005b73c2;
                    lVar49 = lVar49 + uVar44 * 4;
                  }
                  lVar45 = 0;
                  do {
                    *(float *)(lVar49 + lVar45 * 4) = fVar62;
                    lVar45 = lVar45 + 1;
                  } while (iVar40 - (int)uVar44 != (int)lVar45);
                }
              }
              else {
                param_9[2] = 1.4013e-45;
                param_9[3] = 0.0;
                *(ulong *)param_9 = (ulong)(local_88._0_4_ != 0.0 && local_68._0_4_ != 0.0);
              }
              goto LAB_005b73c2;
            }
            goto LAB_005b724e;
          }
          if (*(long *)(param_9 + 2) != 0xf) {
            if (*(long *)(param_9 + 2) == 0xe) goto LAB_005c5996;
            param_9[2] = 2.10195e-44;
            param_9[3] = 0.0;
            pvVar37 = malloc((long)*(int *)(param_7 + 0x28f8) << 2);
            *(void **)param_9 = pvVar37;
          }
          uVar34 = *(uint *)(param_7 + 0x28f8);
          if ((int)uVar34 < 1) goto LAB_005b73c2;
          pfVar38 = *(float **)param_9;
          iVar40 = (int)(float)(long)local_68;
          pfVar47 = local_88;
          if (uVar34 != 1) {
            lVar49 = 0;
            lVar45 = 0;
            do {
              if (iVar40 == 0) {
                bVar60 = false;
              }
              else {
                bVar60 = (int)local_88[lVar49] != 0;
              }
              pfVar38[lVar49] = (float)bVar60;
              if (iVar40 == 0) {
                bVar60 = false;
              }
              else {
                bVar60 = (int)local_88[lVar49 + 1] != 0;
              }
              pfVar38[lVar49 + 1] = (float)bVar60;
              lVar45 = lVar45 + -8;
              lVar49 = lVar49 + 2;
            } while ((uVar34 & 0xfffffffe) != (uint)lVar49);
            pfVar38 = (float *)((long)pfVar38 - lVar45);
            pfVar47 = (float *)((long)local_88 - lVar45);
          }
        }
        if ((uVar34 & 1) == 0) goto LAB_005b73c2;
        if (iVar40 != 0) {
          fVar62 = *pfVar47;
          goto joined_r0x005bc7d9;
        }
        goto LAB_005bc7db;
      }
      if (*(long *)(param_9 + 2) == 0xf) {
        pfVar38 = *(float **)param_9;
      }
      else {
        if (*(long *)(param_9 + 2) == 0xe) goto LAB_005c5996;
        param_9[2] = 2.10195e-44;
        param_9[3] = 0.0;
        pfVar38 = malloc((long)*(int *)(param_7 + 0x28f8) << 2);
        uVar236 = in_XMM3._0_8_;
        uVar63 = in_XMM2._0_8_;
        *(float **)param_9 = pfVar38;
        uVar44 = extraout_XMM0_Qa_21;
      }
      if (1 < lStack_80 - 0xeU) {
        if (lStack_80 == 2) {
          uVar34 = *(uint *)(param_7 + 0x28f8);
          if (0 < (int)uVar34) {
            iVar40 = (int)local_88._0_4_;
            uVar57 = (ulong)(uVar34 - 1);
            uVar44 = 0;
            pfVar47 = local_68;
            if ((6 < uVar34 - 1) &&
               ((local_68 + uVar57 + 1 <= pfVar38 || (pfVar38 + uVar57 + 1 <= local_68)))) {
              bVar60 = iVar40 != 0;
              uVar44 = uVar57 + 1 & 0xfffffffffffffff8;
              auVar81._1_3_ = 0;
              auVar81[0] = bVar60;
              auVar81[4] = bVar60;
              auVar81._5_3_ = 0;
              auVar81[8] = bVar60;
              auVar81._9_3_ = 0;
              auVar81[0xc] = bVar60;
              auVar81._13_3_ = 0;
              uVar52 = (uVar44 - 8 >> 3) + 1;
              if (uVar44 - 8 == 0) {
                lVar49 = 0;
              }
              else {
                uVar54 = uVar52 & 0x3ffffffffffffffe;
                lVar49 = 0;
                auVar172 = _DAT_0065a040 & auVar81;
                do {
                  pfVar47 = local_68 + lVar49;
                  pfVar53 = local_68 + lVar49 + 4;
                  auVar241._0_4_ = -(uint)((int)*pfVar47 == 0);
                  auVar241._4_4_ = -(uint)((int)pfVar47[1] == 0);
                  auVar241._8_4_ = -(uint)((int)pfVar47[2] == 0);
                  auVar241._12_4_ = -(uint)((int)pfVar47[3] == 0);
                  auVar272._0_4_ = -(uint)((int)*pfVar53 == 0);
                  auVar272._4_4_ = -(uint)((int)pfVar53[1] == 0);
                  auVar272._8_4_ = -(uint)((int)pfVar53[2] == 0);
                  auVar272._12_4_ = -(uint)((int)pfVar53[3] == 0);
                  auVar238 = ~auVar241 & auVar172;
                  auVar268 = ~auVar272 & auVar172;
                  pfVar47 = pfVar38 + lVar49;
                  *pfVar47 = (float)auVar238._0_4_;
                  pfVar47[1] = (float)auVar238._4_4_;
                  pfVar47[2] = (float)auVar238._8_4_;
                  pfVar47[3] = (float)auVar238._12_4_;
                  pfVar47 = pfVar38 + lVar49 + 4;
                  *pfVar47 = (float)auVar268._0_4_;
                  pfVar47[1] = (float)auVar268._4_4_;
                  pfVar47[2] = (float)auVar268._8_4_;
                  pfVar47[3] = (float)auVar268._12_4_;
                  pfVar47 = local_68 + lVar49 + 8;
                  pfVar53 = local_68 + lVar49 + 0xc;
                  auVar242._0_4_ = -(uint)((int)*pfVar47 == 0);
                  auVar242._4_4_ = -(uint)((int)pfVar47[1] == 0);
                  auVar242._8_4_ = -(uint)((int)pfVar47[2] == 0);
                  auVar242._12_4_ = -(uint)((int)pfVar47[3] == 0);
                  auVar273._0_4_ = -(uint)((int)*pfVar53 == 0);
                  auVar273._4_4_ = -(uint)((int)pfVar53[1] == 0);
                  auVar273._8_4_ = -(uint)((int)pfVar53[2] == 0);
                  auVar273._12_4_ = -(uint)((int)pfVar53[3] == 0);
                  auVar238 = ~auVar242 & auVar172;
                  auVar268 = ~auVar273 & auVar172;
                  pfVar47 = pfVar38 + lVar49 + 8;
                  *pfVar47 = (float)auVar238._0_4_;
                  pfVar47[1] = (float)auVar238._4_4_;
                  pfVar47[2] = (float)auVar238._8_4_;
                  pfVar47[3] = (float)auVar238._12_4_;
                  pfVar47 = pfVar38 + lVar49 + 0xc;
                  *pfVar47 = (float)auVar268._0_4_;
                  pfVar47[1] = (float)auVar268._4_4_;
                  pfVar47[2] = (float)auVar268._8_4_;
                  pfVar47[3] = (float)auVar268._12_4_;
                  lVar49 = lVar49 + 0x10;
                  uVar54 = uVar54 - 2;
                } while (uVar54 != 0);
              }
              if ((uVar52 & 1) != 0) {
                pfVar47 = local_68 + lVar49;
                pfVar53 = local_68 + lVar49 + 4;
                auVar167._0_4_ = -(uint)((int)*pfVar47 == 0);
                auVar167._4_4_ = -(uint)((int)pfVar47[1] == 0);
                auVar167._8_4_ = -(uint)((int)pfVar47[2] == 0);
                auVar167._12_4_ = -(uint)((int)pfVar47[3] == 0);
                auVar227._0_4_ = -(uint)((int)*pfVar53 == 0);
                auVar227._4_4_ = -(uint)((int)pfVar53[1] == 0);
                auVar227._8_4_ = -(uint)((int)pfVar53[2] == 0);
                auVar227._12_4_ = -(uint)((int)pfVar53[3] == 0);
                auVar172 = ~auVar167 & auVar81 & _DAT_0065a040;
                auVar238 = ~auVar227 & auVar81 & _DAT_0065a040;
                pfVar47 = pfVar38 + lVar49;
                *pfVar47 = (float)auVar172._0_4_;
                pfVar47[1] = (float)auVar172._4_4_;
                pfVar47[2] = (float)auVar172._8_4_;
                pfVar47[3] = (float)auVar172._12_4_;
                pfVar47 = pfVar38 + lVar49 + 4;
                *pfVar47 = (float)auVar238._0_4_;
                pfVar47[1] = (float)auVar238._4_4_;
                pfVar47[2] = (float)auVar238._8_4_;
                pfVar47[3] = (float)auVar238._12_4_;
              }
              if (uVar57 + 1 == uVar44) goto LAB_005b73c2;
              pfVar38 = pfVar38 + uVar44;
              pfVar47 = local_68 + uVar44;
            }
            uVar50 = (uint)uVar44 + 1;
            uVar43 = (uint)uVar44;
            if ((uVar34 & 1) != 0) {
              *pfVar38 = (float)((int)*pfVar47 != 0 && iVar40 != 0);
              pfVar38 = pfVar38 + 1;
              pfVar47 = pfVar47 + 1;
              uVar43 = uVar50;
            }
            if (uVar34 != uVar50) {
              lVar49 = 0;
              do {
                pfVar38[lVar49] = (float)((int)pfVar47[lVar49] != 0 && iVar40 != 0);
                pfVar38[lVar49 + 1] = (float)((int)pfVar47[lVar49 + 1] != 0 && iVar40 != 0);
                lVar49 = lVar49 + 2;
              } while (uVar34 - uVar43 != (int)lVar49);
            }
          }
          goto LAB_005b73c2;
        }
        if (lStack_80 == 1) {
          uVar34 = *(uint *)(param_7 + 0x28f8);
          if (0 < (int)uVar34) {
            iVar40 = (int)(float)(long)local_88;
            uVar57 = (ulong)(uVar34 - 1);
            uVar44 = 0;
            pfVar47 = local_68;
            if ((6 < uVar34 - 1) &&
               ((local_68 + uVar57 + 1 <= pfVar38 || (pfVar38 + uVar57 + 1 <= local_68)))) {
              bVar60 = iVar40 != 0;
              uVar44 = uVar57 + 1 & 0xfffffffffffffff8;
              auVar64._1_3_ = 0;
              auVar64[0] = bVar60;
              auVar64[4] = bVar60;
              auVar64._5_3_ = 0;
              auVar64[8] = bVar60;
              auVar64._9_3_ = 0;
              auVar64[0xc] = bVar60;
              auVar64._13_3_ = 0;
              uVar52 = (uVar44 - 8 >> 3) + 1;
              if (uVar44 - 8 == 0) {
                lVar49 = 0;
              }
              else {
                uVar54 = uVar52 & 0x3ffffffffffffffe;
                lVar49 = 0;
                auVar172 = _DAT_0065a040 & auVar64;
                do {
                  pfVar47 = local_68 + lVar49;
                  pfVar53 = local_68 + lVar49 + 4;
                  auVar237._0_4_ = -(uint)((int)*pfVar47 == 0);
                  auVar237._4_4_ = -(uint)((int)pfVar47[1] == 0);
                  auVar237._8_4_ = -(uint)((int)pfVar47[2] == 0);
                  auVar237._12_4_ = -(uint)((int)pfVar47[3] == 0);
                  auVar267._0_4_ = -(uint)((int)*pfVar53 == 0);
                  auVar267._4_4_ = -(uint)((int)pfVar53[1] == 0);
                  auVar267._8_4_ = -(uint)((int)pfVar53[2] == 0);
                  auVar267._12_4_ = -(uint)((int)pfVar53[3] == 0);
                  auVar238 = ~auVar237 & auVar172;
                  auVar268 = ~auVar267 & auVar172;
                  pfVar47 = pfVar38 + lVar49;
                  *pfVar47 = (float)auVar238._0_4_;
                  pfVar47[1] = (float)auVar238._4_4_;
                  pfVar47[2] = (float)auVar238._8_4_;
                  pfVar47[3] = (float)auVar238._12_4_;
                  pfVar47 = pfVar38 + lVar49 + 4;
                  *pfVar47 = (float)auVar268._0_4_;
                  pfVar47[1] = (float)auVar268._4_4_;
                  pfVar47[2] = (float)auVar268._8_4_;
                  pfVar47[3] = (float)auVar268._12_4_;
                  pfVar47 = local_68 + lVar49 + 8;
                  pfVar53 = local_68 + lVar49 + 0xc;
                  auVar239._0_4_ = -(uint)((int)*pfVar47 == 0);
                  auVar239._4_4_ = -(uint)((int)pfVar47[1] == 0);
                  auVar239._8_4_ = -(uint)((int)pfVar47[2] == 0);
                  auVar239._12_4_ = -(uint)((int)pfVar47[3] == 0);
                  auVar269._0_4_ = -(uint)((int)*pfVar53 == 0);
                  auVar269._4_4_ = -(uint)((int)pfVar53[1] == 0);
                  auVar269._8_4_ = -(uint)((int)pfVar53[2] == 0);
                  auVar269._12_4_ = -(uint)((int)pfVar53[3] == 0);
                  auVar238 = ~auVar239 & auVar172;
                  auVar268 = ~auVar269 & auVar172;
                  pfVar47 = pfVar38 + lVar49 + 8;
                  *pfVar47 = (float)auVar238._0_4_;
                  pfVar47[1] = (float)auVar238._4_4_;
                  pfVar47[2] = (float)auVar238._8_4_;
                  pfVar47[3] = (float)auVar238._12_4_;
                  pfVar47 = pfVar38 + lVar49 + 0xc;
                  *pfVar47 = (float)auVar268._0_4_;
                  pfVar47[1] = (float)auVar268._4_4_;
                  pfVar47[2] = (float)auVar268._8_4_;
                  pfVar47[3] = (float)auVar268._12_4_;
                  lVar49 = lVar49 + 0x10;
                  uVar54 = uVar54 - 2;
                } while (uVar54 != 0);
              }
              if ((uVar52 & 1) != 0) {
                pfVar47 = local_68 + lVar49;
                pfVar53 = local_68 + lVar49 + 4;
                auVar156._0_4_ = -(uint)((int)*pfVar47 == 0);
                auVar156._4_4_ = -(uint)((int)pfVar47[1] == 0);
                auVar156._8_4_ = -(uint)((int)pfVar47[2] == 0);
                auVar156._12_4_ = -(uint)((int)pfVar47[3] == 0);
                auVar216._0_4_ = -(uint)((int)*pfVar53 == 0);
                auVar216._4_4_ = -(uint)((int)pfVar53[1] == 0);
                auVar216._8_4_ = -(uint)((int)pfVar53[2] == 0);
                auVar216._12_4_ = -(uint)((int)pfVar53[3] == 0);
                auVar172 = ~auVar156 & auVar64 & _DAT_0065a040;
                auVar238 = ~auVar216 & auVar64 & _DAT_0065a040;
                pfVar47 = pfVar38 + lVar49;
                *pfVar47 = (float)auVar172._0_4_;
                pfVar47[1] = (float)auVar172._4_4_;
                pfVar47[2] = (float)auVar172._8_4_;
                pfVar47[3] = (float)auVar172._12_4_;
                pfVar47 = pfVar38 + lVar49 + 4;
                *pfVar47 = (float)auVar238._0_4_;
                pfVar47[1] = (float)auVar238._4_4_;
                pfVar47[2] = (float)auVar238._8_4_;
                pfVar47[3] = (float)auVar238._12_4_;
              }
              if (uVar57 + 1 == uVar44) goto LAB_005b73c2;
              pfVar38 = pfVar38 + uVar44;
              pfVar47 = local_68 + uVar44;
            }
            uVar50 = (uint)uVar44 + 1;
            uVar43 = (uint)uVar44;
            if ((uVar34 & 1) != 0) {
              *pfVar38 = (float)((int)*pfVar47 != 0 && iVar40 != 0);
              pfVar38 = pfVar38 + 1;
              pfVar47 = pfVar47 + 1;
              uVar43 = uVar50;
            }
            if (uVar34 != uVar50) {
              lVar49 = 0;
              do {
                pfVar38[lVar49] = (float)((int)pfVar47[lVar49] != 0 && iVar40 != 0);
                pfVar38[lVar49 + 1] = (float)((int)pfVar47[lVar49 + 1] != 0 && iVar40 != 0);
                lVar49 = lVar49 + 2;
              } while (uVar34 - uVar43 != (int)lVar49);
            }
          }
          goto LAB_005b73c2;
        }
LAB_005b724e:
        uVar46 = 0x54c;
        goto LAB_005b7339;
      }
      uVar34 = *(uint *)(param_7 + 0x28f8);
      if ((int)uVar34 < 1) goto LAB_005b73c2;
      pfVar47 = local_68;
      pfVar53 = local_88;
      if (uVar34 != 1) {
        lVar49 = 0;
        lVar45 = 0;
        do {
          if ((int)local_68[lVar49] == 0) {
            bVar60 = false;
          }
          else {
            bVar60 = (int)local_88[lVar49] != 0;
          }
          pfVar38[lVar49] = (float)bVar60;
          if ((int)local_68[lVar49 + 1] == 0) {
            bVar60 = false;
          }
          else {
            bVar60 = (int)local_88[lVar49 + 1] != 0;
          }
          pfVar38[lVar49 + 1] = (float)bVar60;
          lVar45 = lVar45 + -8;
          lVar49 = lVar49 + 2;
        } while ((uVar34 & 0xfffffffe) != (uint)lVar49);
        pfVar38 = (float *)((long)pfVar38 - lVar45);
        pfVar53 = (float *)((long)local_88 - lVar45);
        pfVar47 = (float *)((long)local_68 - lVar45);
      }
      if ((uVar34 & 1) == 0) goto LAB_005b73c2;
      if (((int)*pfVar47 == 0) || ((int)*pfVar53 == 0)) goto LAB_005bc7db;
LAB_005bc7e0:
      fVar62 = DAT_005d9038;
    }
    *pfVar38 = fVar62;
LAB_005b73c2:
    if (lStack_60 == 0xf) {
      free(local_68);
    }
    if (lStack_80 == 0xf) {
      free(local_88);
      return puVar36;
    }
    return puVar36;
  default:
    goto LAB_005b34ed;
  case 5:
    goto code_r0x005b37e8;
  case 6:
    puVar36 = eval_func(0,param_2,uVar63,uVar236,param_3,param_4,param_5,param_6,param_7,
                        (long *)param_8,(long *)param_9,uVar34,param_11,param_12);
    return puVar36;
  case 7:
    if (*(long *)(param_9 + 2) == 0xf) {
      if ((*(uint *)(param_7 + 0x34) & 0x20) == 0) {
        *(uint *)(param_7 + 0x34) = *(uint *)(param_7 + 0x34) | 0x20;
        uVar63 = pd_error(0,param_2,uVar63,uVar236,param_3,param_4,param_5,param_6,param_7,
                          "expr~: \'%s\': cannot convert string to vector\n",
                          *(undefined8 *)(param_7 + 0x40),&DAT_0065f0c4,param_11,param_12);
        uVar63 = pd_error(uVar63,extraout_XMM1_Qa,in_XMM2._0_8_,in_XMM3._0_8_,param_3,param_4,
                          param_5,param_6,param_7,
                          "expr~: No more symbol-vector errors will be reported",extraout_RDX,
                          puVar41,param_11,param_12);
        pd_error(uVar63,extraout_XMM1_Qa_00,in_XMM2._0_8_,in_XMM3._0_8_,param_3,param_4,param_5,
                 param_6,param_7,"expr~: till the next reset",extraout_RDX_00,puVar41,param_11,
                 param_12);
      }
      if ((ulong)*(uint *)(param_7 + 0x28f8) != 0) {
        memset(*(void **)param_9,0,(ulong)*(uint *)(param_7 + 0x28f8) << 2);
        return param_8 + 4;
      }
      goto LAB_005b34e4;
    }
    break;
  case 8:
    if (*(long *)(param_9 + 2) == 0xf) {
      pcVar55 = "expr: IntErr. vsym in for vec out\n";
      goto code_r0x005b3b65;
    }
    if (*param_8 != 0xffffffffffffffff) {
      param_9[2] = 9.80909e-45;
      param_9[3] = 0.0;
      *(byte *)(param_9 + 6) = *(byte *)(param_9 + 6) & 0xfe;
      *(undefined8 *)param_9 = *(undefined8 *)(param_7 + 0x698 + *param_8 * 0x20);
      return param_8 + 4;
    }
    goto code_r0x005b3917;
  case 0xb:
    if (*param_8 == 0xffffffffffffffff) {
      pd_error(0,param_2,uVar63,uVar236,param_3,param_4,param_5,param_6,param_7,
               "expr: \'%s\': inlet number not set\n",*(undefined8 *)(param_7 + 0x40),&DAT_0065f0c4,
               param_11,param_12);
      return (ulong *)0x0;
    }
    if (*(long *)(param_9 + 2) == 0xf) {
      iVar40 = *(int *)(param_7 + 0x28f8);
      if (iVar40 != 0) {
        fVar62 = (float)*(long *)(param_7 + 0x698 + *param_8 * 0x20);
        lVar49 = *(long *)param_9;
        if (6 < iVar40 - 1U) {
          uVar44 = (ulong)(iVar40 - 1U) + 1;
          uVar52 = uVar44 & 0xfffffffffffffff8;
          uVar54 = (uVar52 - 8 >> 3) + 1;
          uVar57 = (ulong)((uint)uVar54 & 7);
          if (uVar52 - 8 < 0x38) {
            lVar45 = 0;
          }
          else {
            uVar54 = uVar54 & 0xfffffffffffffff8;
            lVar45 = 0;
            do {
              pfVar38 = (float *)(lVar49 + lVar45 * 4);
              *pfVar38 = fVar62;
              pfVar38[1] = fVar62;
              pfVar38[2] = fVar62;
              pfVar38[3] = fVar62;
              pfVar38 = (float *)(lVar49 + 0x10 + lVar45 * 4);
              *pfVar38 = fVar62;
              pfVar38[1] = fVar62;
              pfVar38[2] = fVar62;
              pfVar38[3] = fVar62;
              pfVar38 = (float *)(lVar49 + 0x20 + lVar45 * 4);
              *pfVar38 = fVar62;
              pfVar38[1] = fVar62;
              pfVar38[2] = fVar62;
              pfVar38[3] = fVar62;
              pfVar38 = (float *)(lVar49 + 0x30 + lVar45 * 4);
              *pfVar38 = fVar62;
              pfVar38[1] = fVar62;
              pfVar38[2] = fVar62;
              pfVar38[3] = fVar62;
              pfVar38 = (float *)(lVar49 + 0x40 + lVar45 * 4);
              *pfVar38 = fVar62;
              pfVar38[1] = fVar62;
              pfVar38[2] = fVar62;
              pfVar38[3] = fVar62;
              pfVar38 = (float *)(lVar49 + 0x50 + lVar45 * 4);
              *pfVar38 = fVar62;
              pfVar38[1] = fVar62;
              pfVar38[2] = fVar62;
              pfVar38[3] = fVar62;
              pfVar38 = (float *)(lVar49 + 0x60 + lVar45 * 4);
              *pfVar38 = fVar62;
              pfVar38[1] = fVar62;
              pfVar38[2] = fVar62;
              pfVar38[3] = fVar62;
              pfVar38 = (float *)(lVar49 + 0x70 + lVar45 * 4);
              *pfVar38 = fVar62;
              pfVar38[1] = fVar62;
              pfVar38[2] = fVar62;
              pfVar38[3] = fVar62;
              pfVar38 = (float *)(lVar49 + 0x80 + lVar45 * 4);
              *pfVar38 = fVar62;
              pfVar38[1] = fVar62;
              pfVar38[2] = fVar62;
              pfVar38[3] = fVar62;
              pfVar38 = (float *)(lVar49 + 0x90 + lVar45 * 4);
              *pfVar38 = fVar62;
              pfVar38[1] = fVar62;
              pfVar38[2] = fVar62;
              pfVar38[3] = fVar62;
              pfVar38 = (float *)(lVar49 + 0xa0 + lVar45 * 4);
              *pfVar38 = fVar62;
              pfVar38[1] = fVar62;
              pfVar38[2] = fVar62;
              pfVar38[3] = fVar62;
              pfVar38 = (float *)(lVar49 + 0xb0 + lVar45 * 4);
              *pfVar38 = fVar62;
              pfVar38[1] = fVar62;
              pfVar38[2] = fVar62;
              pfVar38[3] = fVar62;
              pfVar38 = (float *)(lVar49 + 0xc0 + lVar45 * 4);
              *pfVar38 = fVar62;
              pfVar38[1] = fVar62;
              pfVar38[2] = fVar62;
              pfVar38[3] = fVar62;
              pfVar38 = (float *)(lVar49 + 0xd0 + lVar45 * 4);
              *pfVar38 = fVar62;
              pfVar38[1] = fVar62;
              pfVar38[2] = fVar62;
              pfVar38[3] = fVar62;
              pfVar38 = (float *)(lVar49 + 0xe0 + lVar45 * 4);
              *pfVar38 = fVar62;
              pfVar38[1] = fVar62;
              pfVar38[2] = fVar62;
              pfVar38[3] = fVar62;
              pfVar38 = (float *)(lVar49 + 0xf0 + lVar45 * 4);
              *pfVar38 = fVar62;
              pfVar38[1] = fVar62;
              pfVar38[2] = fVar62;
              pfVar38[3] = fVar62;
              lVar45 = lVar45 + 0x40;
              uVar54 = uVar54 - 8;
            } while (uVar54 != 0);
          }
          if (uVar57 != 0) {
            lVar45 = lVar49 + lVar45 * 4;
            lVar48 = 0;
            do {
              pfVar38 = (float *)(lVar45 + lVar48);
              *pfVar38 = fVar62;
              pfVar38[1] = fVar62;
              pfVar38[2] = fVar62;
              pfVar38[3] = fVar62;
              pfVar38 = (float *)(lVar45 + 0x10 + lVar48);
              *pfVar38 = fVar62;
              pfVar38[1] = fVar62;
              pfVar38[2] = fVar62;
              pfVar38[3] = fVar62;
              lVar48 = lVar48 + 0x20;
            } while (uVar57 * 0x20 != lVar48);
          }
          if (uVar44 == uVar52) goto LAB_005b34e4;
          iVar40 = iVar40 - (int)uVar52;
          lVar49 = lVar49 + uVar52 * 4;
        }
        lVar45 = 0;
        do {
          *(float *)(lVar49 + lVar45 * 4) = fVar62;
          lVar45 = lVar45 + 1;
        } while (iVar40 != (int)lVar45);
      }
    }
    else {
      param_9[2] = 1.4013e-45;
      param_9[3] = 0.0;
      *(undefined8 *)param_9 = *(undefined8 *)(param_7 + 0x698 + *param_8 * 0x20);
    }
    goto LAB_005b34e4;
  case 0xc:
    if (*param_8 != 0xffffffffffffffff) {
      if (*(long *)(param_9 + 2) == 0xf) {
        iVar40 = *(int *)(param_7 + 0x28f8);
        if (iVar40 != 0) {
          uVar6 = *(undefined4 *)(param_7 + 0x698 + *param_8 * 0x20);
          lVar49 = *(long *)param_9;
          if (6 < iVar40 - 1U) {
            uVar44 = (ulong)(iVar40 - 1U) + 1;
            uVar52 = uVar44 & 0xfffffffffffffff8;
            uVar54 = (uVar52 - 8 >> 3) + 1;
            uVar57 = (ulong)((uint)uVar54 & 7);
            if (uVar52 - 8 < 0x38) {
              lVar45 = 0;
            }
            else {
              uVar54 = uVar54 & 0xfffffffffffffff8;
              lVar45 = 0;
              do {
                puVar1 = (undefined4 *)(lVar49 + lVar45 * 4);
                *puVar1 = uVar6;
                puVar1[1] = uVar6;
                puVar1[2] = uVar6;
                puVar1[3] = uVar6;
                puVar1 = (undefined4 *)(lVar49 + 0x10 + lVar45 * 4);
                *puVar1 = uVar6;
                puVar1[1] = uVar6;
                puVar1[2] = uVar6;
                puVar1[3] = uVar6;
                puVar1 = (undefined4 *)(lVar49 + 0x20 + lVar45 * 4);
                *puVar1 = uVar6;
                puVar1[1] = uVar6;
                puVar1[2] = uVar6;
                puVar1[3] = uVar6;
                puVar1 = (undefined4 *)(lVar49 + 0x30 + lVar45 * 4);
                *puVar1 = uVar6;
                puVar1[1] = uVar6;
                puVar1[2] = uVar6;
                puVar1[3] = uVar6;
                puVar1 = (undefined4 *)(lVar49 + 0x40 + lVar45 * 4);
                *puVar1 = uVar6;
                puVar1[1] = uVar6;
                puVar1[2] = uVar6;
                puVar1[3] = uVar6;
                puVar1 = (undefined4 *)(lVar49 + 0x50 + lVar45 * 4);
                *puVar1 = uVar6;
                puVar1[1] = uVar6;
                puVar1[2] = uVar6;
                puVar1[3] = uVar6;
                puVar1 = (undefined4 *)(lVar49 + 0x60 + lVar45 * 4);
                *puVar1 = uVar6;
                puVar1[1] = uVar6;
                puVar1[2] = uVar6;
                puVar1[3] = uVar6;
                puVar1 = (undefined4 *)(lVar49 + 0x70 + lVar45 * 4);
                *puVar1 = uVar6;
                puVar1[1] = uVar6;
                puVar1[2] = uVar6;
                puVar1[3] = uVar6;
                puVar1 = (undefined4 *)(lVar49 + 0x80 + lVar45 * 4);
                *puVar1 = uVar6;
                puVar1[1] = uVar6;
                puVar1[2] = uVar6;
                puVar1[3] = uVar6;
                puVar1 = (undefined4 *)(lVar49 + 0x90 + lVar45 * 4);
                *puVar1 = uVar6;
                puVar1[1] = uVar6;
                puVar1[2] = uVar6;
                puVar1[3] = uVar6;
                puVar1 = (undefined4 *)(lVar49 + 0xa0 + lVar45 * 4);
                *puVar1 = uVar6;
                puVar1[1] = uVar6;
                puVar1[2] = uVar6;
                puVar1[3] = uVar6;
                puVar1 = (undefined4 *)(lVar49 + 0xb0 + lVar45 * 4);
                *puVar1 = uVar6;
                puVar1[1] = uVar6;
                puVar1[2] = uVar6;
                puVar1[3] = uVar6;
                puVar1 = (undefined4 *)(lVar49 + 0xc0 + lVar45 * 4);
                *puVar1 = uVar6;
                puVar1[1] = uVar6;
                puVar1[2] = uVar6;
                puVar1[3] = uVar6;
                puVar1 = (undefined4 *)(lVar49 + 0xd0 + lVar45 * 4);
                *puVar1 = uVar6;
                puVar1[1] = uVar6;
                puVar1[2] = uVar6;
                puVar1[3] = uVar6;
                puVar1 = (undefined4 *)(lVar49 + 0xe0 + lVar45 * 4);
                *puVar1 = uVar6;
                puVar1[1] = uVar6;
                puVar1[2] = uVar6;
                puVar1[3] = uVar6;
                puVar1 = (undefined4 *)(lVar49 + 0xf0 + lVar45 * 4);
                *puVar1 = uVar6;
                puVar1[1] = uVar6;
                puVar1[2] = uVar6;
                puVar1[3] = uVar6;
                lVar45 = lVar45 + 0x40;
                uVar54 = uVar54 - 8;
              } while (uVar54 != 0);
            }
            if (uVar57 != 0) {
              lVar45 = lVar49 + lVar45 * 4;
              lVar48 = 0;
              do {
                puVar1 = (undefined4 *)(lVar45 + lVar48);
                *puVar1 = uVar6;
                puVar1[1] = uVar6;
                puVar1[2] = uVar6;
                puVar1[3] = uVar6;
                puVar1 = (undefined4 *)(lVar45 + 0x10 + lVar48);
                *puVar1 = uVar6;
                puVar1[1] = uVar6;
                puVar1[2] = uVar6;
                puVar1[3] = uVar6;
                lVar48 = lVar48 + 0x20;
              } while (uVar57 * 0x20 != lVar48);
            }
            if (uVar44 == uVar52) goto LAB_005b34e4;
            iVar40 = iVar40 - (int)uVar52;
            lVar49 = lVar49 + uVar52 * 4;
          }
          lVar45 = 0;
          do {
            *(undefined4 *)(lVar49 + lVar45 * 4) = uVar6;
            lVar45 = lVar45 + 1;
          } while (iVar40 != (int)lVar45);
        }
      }
      else {
        param_9[2] = 2.8026e-45;
        param_9[3] = 0.0;
        *param_9 = *(float *)(param_7 + 0x698 + *param_8 * 0x20);
      }
      goto LAB_005b34e4;
    }
code_r0x005b3917:
    pcVar55 = "expr: ex_eval: inlet number not set\n";
code_r0x005b3b65:
    pd_error(0,param_2,uVar63,uVar236,param_3,param_4,param_5,param_6,param_7,pcVar55,uVar44,puVar41
             ,param_11,param_12);
    return (ulong *)0x0;
  case 0xd:
    if ((param_8[3] & 2) == 0) {
      if (*(long *)(param_9 + 2) != 0xf) {
        uVar44 = *param_8;
        uVar57 = param_8[1];
        uVar52 = param_8[3];
        *(ulong *)(param_9 + 4) = param_8[2];
        *(ulong *)(param_9 + 6) = uVar52;
        *(ulong *)param_9 = uVar44;
        *(ulong *)(param_9 + 2) = uVar57;
        return param_8 + 4;
      }
      if ((*(uint *)(param_7 + 0x34) & 0x20) == 0) {
        *(uint *)(param_7 + 0x34) = *(uint *)(param_7 + 0x34) | 0x20;
        uVar63 = pd_error(0,param_2,uVar63,uVar236,param_3,param_4,param_5,param_6,param_7,
                          "expr~: \'%s\': cannot convert string inlet to vector\n",
                          *(undefined8 *)(param_7 + 0x40),&DAT_0065f0c4,param_11,param_12);
        uVar63 = pd_error(uVar63,extraout_XMM1_Qa_01,in_XMM2._0_8_,in_XMM3._0_8_,param_3,param_4,
                          param_5,param_6,param_7,
                          "expr~: No more symbol-vector errors will be reported",extraout_RDX_01,
                          puVar41,param_11,param_12);
        pd_error(uVar63,extraout_XMM1_Qa_02,in_XMM2._0_8_,in_XMM3._0_8_,param_3,param_4,param_5,
                 param_6,param_7,"expr~: till the next reset",extraout_RDX_02,puVar41,param_11,
                 param_12);
      }
      if ((ulong)*(uint *)(param_7 + 0x28f8) == 0) {
        return (ulong *)0x0;
      }
      memset(*(void **)param_9,0,(ulong)*(uint *)(param_7 + 0x28f8) << 2);
      return (ulong *)0x0;
    }
    goto code_r0x005b37e8;
  case 0xe:
    if (*(long *)(param_9 + 2) != 0xf) {
      puVar5 = (undefined8 *)(param_7 + 0x698 + *param_8 * 0x20);
      uVar63 = *puVar5;
      uVar236 = puVar5[1];
      puVar5 = (undefined8 *)(param_7 + 0x6a8 + *param_8 * 0x20);
      uVar46 = puVar5[1];
      *(undefined8 *)(param_9 + 4) = *puVar5;
      *(undefined8 *)(param_9 + 6) = uVar46;
      *(undefined8 *)param_9 = uVar63;
      *(undefined8 *)(param_9 + 2) = uVar236;
      return param_8 + 4;
    }
    pvVar37 = *(void **)(param_7 + 0x698 + *param_8 * 0x20);
    if (*(void **)param_9 != pvVar37) {
      memcpy(*(void **)param_9,pvVar37,(long)*(int *)(param_7 + 0x28f8) << 2);
    }
    goto LAB_005b34e4;
  case 0xf:
    if (*(long *)(param_9 + 2) != 0xf) {
      param_9[2] = 2.10195e-44;
      param_9[3] = 0.0;
      *(ulong *)param_9 = *param_8;
      uVar44 = _UNK_005d99f8;
      *param_8 = _DAT_005d99f0;
      param_8[1] = uVar44;
      return param_8 + 4;
    }
    if (*(void **)param_9 == (void *)*param_8) {
      post(0,param_2,uVar63,uVar236,param_3,param_4,param_5,param_6,
           "expr int. error, optr->ex_vec = %d");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    memcpy(*(void **)param_9,(void *)*param_8,(long)*(int *)(param_7 + 0x28f8) << 2);
    free((void *)*param_8);
    return param_8 + 4;
  case 0x10:
  case 0x12:
    if (((*(uint *)(param_7 + 0x30) & 3) == 0) && (*(long *)(param_9 + 2) != 0xf)) {
      puVar36 = eval_sigidx(0,param_2,uVar63,uVar236,param_3,param_4,param_5,param_6,param_7,
                            (long *)param_8,param_9,puVar51,param_11,param_12);
      return puVar36;
    }
    pcVar55 = "%d:expr->exp_flags = %d";
    goto code_r0x005c5862;
  case 0x11:
    param_9[2] = 2.8026e-45;
    param_9[3] = 0.0;
    if (uVar34 == 0) {
      plVar35 = (long *)(param_7 + *param_8 * 8 + 0x22b8);
      uVar34 = *(uint *)(param_7 + 0x28f8);
    }
    else {
      plVar35 = (long *)(param_7 + *param_8 * 8 + 0x25d8);
    }
    fVar62 = *(float *)(*plVar35 + -4 + (long)(int)uVar34 * 4);
LAB_005b3969:
    *param_9 = fVar62;
    return param_8 + 4;
  case 0x14:
    if (((*(uint *)(param_7 + 0x30) & 3) == 0) && (*(long *)(param_9 + 2) != 0xf)) {
      param_9[2] = 2.8026e-45;
      param_9[3] = 0.0;
      fVar62 = *(float *)(*(long *)(param_7 + 0x698 + *param_8 * 0x20) + (long)(int)uVar34 * 4);
      goto LAB_005b3969;
    }
    pcVar55 = "%d:exp->exp_flags = %d";
code_r0x005c5862:
    post(0,param_2,uVar63,uVar236,param_3,param_4,param_5,param_6,pcVar55);
                    /* WARNING: Subroutine does not return */
    abort();
  case 0x15:
    puVar36 = (ulong *)eval_var(0,param_2,uVar63,uVar236,param_3,param_4,param_5,param_6,param_7,
                                (long *)param_8,param_9,puVar51,param_11,param_12);
    return puVar36;
  }
  uVar44 = *param_8;
  uVar57 = param_8[1];
  uVar52 = param_8[3];
  *(ulong *)(param_9 + 4) = param_8[2];
  *(ulong *)(param_9 + 6) = uVar52;
  *(ulong *)param_9 = uVar44;
  *(ulong *)(param_9 + 2) = uVar57;
LAB_005b34e4:
  return param_8 + 4;
code_r0x005b37e8:
  puVar36 = eval_tab(0,param_2,uVar63,uVar236,param_3,param_4,param_5,param_6,param_7,
                     (long *)param_8,(long *)param_9,(ulong)puVar51,param_11,param_12);
  return puVar36;
}


