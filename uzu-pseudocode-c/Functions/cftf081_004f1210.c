// Function : cftf081
// Namespace: 
// Entry    : 004f1210
// Prototype: undefined cftf081(double param_1, double * param_2)
// Body     : 004f1210 - 004f13ad


void cftf081(double param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  dVar16 = param_2[8] + *param_2;
  dVar17 = param_2[9] + param_2[1];
  dVar3 = *param_2 - param_2[8];
  dVar5 = param_2[1] - param_2[9];
  dVar12 = param_2[0xc] + param_2[4];
  dVar14 = param_2[0xd] + param_2[5];
  dVar1 = param_2[4] - param_2[0xc];
  dVar2 = param_2[5] - param_2[0xd];
  dVar7 = param_2[0xe] + param_2[6];
  dVar8 = param_2[0xf] + param_2[7];
  dVar13 = dVar12 + dVar16;
  dVar15 = dVar14 + dVar17;
  dVar20 = dVar5 - dVar1;
  dVar21 = dVar3 - dVar2;
  dVar1 = dVar1 + dVar5;
  dVar2 = dVar2 + dVar3;
  dVar4 = param_2[10] + param_2[2];
  dVar6 = param_2[0xb] + param_2[3];
  dVar3 = param_2[2] - param_2[10];
  dVar9 = param_2[3] - param_2[0xb];
  dVar18 = param_2[6] - param_2[0xe];
  dVar19 = param_2[7] - param_2[0xf];
  dVar10 = dVar7 + dVar4;
  dVar11 = dVar8 + dVar6;
  dVar16 = dVar16 - dVar12;
  dVar4 = dVar4 - dVar7;
  dVar6 = dVar6 - dVar8;
  dVar17 = dVar17 - dVar14;
  dVar5 = dVar3 + dVar19;
  dVar8 = dVar9 + dVar18;
  dVar3 = dVar3 - dVar19;
  dVar9 = dVar9 - dVar18;
  dVar7 = (dVar3 - dVar8) * param_1;
  dVar12 = (dVar5 - dVar9) * param_1;
  dVar3 = param_1 * (dVar8 + dVar3);
  dVar5 = param_1 * (dVar9 + dVar5);
  param_2[8] = dVar7 + dVar21;
  param_2[9] = dVar3 + dVar1;
  param_2[10] = dVar21 - dVar7;
  param_2[0xb] = dVar1 - dVar3;
  param_2[0xc] = dVar2 - dVar5;
  param_2[0xd] = dVar20 + dVar12;
  param_2[0xe] = dVar2 + dVar5;
  param_2[0xf] = dVar20 - dVar12;
  *param_2 = dVar10 + dVar13;
  param_2[1] = dVar11 + dVar15;
  param_2[2] = dVar13 - dVar10;
  param_2[3] = dVar15 - dVar11;
  param_2[4] = dVar16 - dVar6;
  param_2[5] = dVar4 + dVar17;
  param_2[6] = dVar16 + dVar6;
  param_2[7] = dVar17 - dVar4;
  return;
}


