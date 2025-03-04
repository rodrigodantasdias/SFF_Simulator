%%SFF_Simulator_Harness entradas

%% Deletar variáveis do workspace e informações da command window
%clear all
%clc
tic
clock
%% Carregar arquivo de constantes
run constantes.m

%% Determinar a simulação de acordo com a planilha de entradas (excel)
simulacao = 'Simulacao1';

%% Carregando valores da tabela de entradas

%Configurações iniciais
inp = readtable('SFF_Simulator_Entradas.xlsx','Sheet',simulacao,'Range','B6:C7');
step_modelo =   inp(1,2).Var2;
orb =           inp(2,2).Var2;

%Órbita Satélite Líder
inp = readtable('SFF_Simulator_Entradas.xlsx','Sheet',simulacao,'Range','E6:F11');
e0_ini =        inp(1,2).Var2;
a0_ini =        inp(2,2).Var2;
i0_ini =        inp(3,2).Var2;
omega0_ini =    inp(4,2).Var2;
ohm0_ini =      inp(5,2).Var2;
f0_ini =        inp(6,2).Var2;

%Estados Relativos do Seguidor - Guiamento
inp = readtable('SFF_Simulator_Entradas.xlsx','Sheet',simulacao,'Range','H6:I11');
x0_ini =        inp(1,2).Var2;
y0_ini =        inp(2,2).Var2;
z0_ini =        inp(3,2).Var2;
x0_dot_ini =    inp(4,2).Var2;
y0_dot_ini =    inp(5,2).Var2;
z0_dot_ini =    inp(6,2).Var2;

%Valores Iniciais de Atitude		
inp = readtable('SFF_Simulator_Entradas.xlsx','Sheet',simulacao,'Range','K6:L11');
phi_i =             inp(1,2).Var2;
theta_i =           inp(2,2).Var2;
psi_i =             inp(3,2).Var2;
omega1_rel_ini =    inp(4,2).Var2;
omega2_rel_ini =    inp(5,2).Var2;
omega3_rel_ini =    inp(6,2).Var2;

%Manobra orbital	
inp = readtable('SFF_Simulator_Entradas.xlsx','Sheet',simulacao,'Range','N6:O7');
man =       inp(1,2).Var2;
pcoRad =    inp(2,2).Var2;

%Disturbios Orbitais	
inp = readtable('SFF_Simulator_Entradas.xlsx','Sheet',simulacao,'Range','Q6:R7');
J2_dist =   inp(1,2).Var2;
drag =      inp(2,2).Var2;

%Caracteristicas dos Satelites	
inp = readtable('SFF_Simulator_Entradas.xlsx','Sheet',simulacao,'Range','T6:U14');
Cd0 =   inp(1,2).Var2;
L0 =    inp(2,2).Var2;
m0 =    inp(3,2).Var2;
Cd1 =   inp(4,2).Var2;
L1 =    inp(5,2).Var2;
m1 =    inp(6,2).Var2;
Ixx =   inp(7,2).Var2;
Iyy =   inp(8,2).Var2;
Izz =   inp(9,2).Var2;

%Ganhos Controlador Orbital		
inp = readtable('SFF_Simulator_Entradas.xlsx','Sheet',simulacao,'Range','B18:C26');
OrbKp_x = inp(1,2).Var2;
OrbKi_x = inp(2,2).Var2;
OrbKd_x = inp(3,2).Var2;
OrbKp_y = inp(4,2).Var2;
OrbKi_y = inp(5,2).Var2;
OrbKd_y = inp(6,2).Var2;
OrbKp_z = inp(7,2).Var2;
OrbKi_z = inp(8,2).Var2;
OrbKd_z = inp(9,2).Var2;

%Condições iniciais de órbita do Seguidor		
inp = readtable('SFF_Simulator_Entradas.xlsx','Sheet',simulacao,'Range','K18:L23');
x0_i = inp(1,2).Var2;
y0_i = inp(2,2).Var2;
z0_i = inp(3,2).Var2;
x0_dot_i = inp(4,2).Var2;
y0_dot_i = inp(5,2).Var2;
z0_dot_i = inp(6,2).Var2;

%Ganhos Controlador Roda de Reação		
inp = readtable('SFF_Simulator_Entradas.xlsx','Sheet',simulacao,'Range','H18:I18');
RodKi = inp(1,2).Var2;

inp = readtable('SFF_Simulator_Entradas.xlsx','Sheet',simulacao,'Range','E18:F23');
AttKp_x = inp(1,2).Var2;
AttKp_y = inp(2,2).Var2;
AttKp_z = inp(3,2).Var2;
AttKd_x = inp(4,2).Var2;
AttKd_y = inp(5,2).Var2;
AttKd_z = inp(6,2).Var2;

%Configuracoes do Propulsor		
inp = readtable('SFF_Simulator_Entradas.xlsx','Sheet',simulacao,'Range','B30:C38');
propForcaAtivo =        inp(1,2).Var2;
Fn =                    inp(2,2).Var2;
rb =                    inp(3,2).Var2;
mib =                   inp(4,2).Var2;
tc =                    inp(5,2).Var2;
Tpulse =                inp(6,2).Var2;
Td =                    inp(7,2).Var2;
peak_prop =             inp(8,2).Var2;   

%Configuracoes das Rodas de Reacao		
inp = readtable('SFF_Simulator_Entradas.xlsx','Sheet',simulacao,'Range','E30:F42');
rodaAtivo =     inp(1,2).Var2;
beta =          inp(2,2).Var2;
Km =            inp(3,2).Var2;
limCorrente =   inp(4,2).Var2;
limVolt =       inp(5,2).Var2;
Rm =            inp(6,2).Var2;
Iw =            inp(7,2).Var2;
B =             inp(8,2).Var2;
Kv =            inp(9,2).Var2;    
Tmax =          inp(10,2).Var2;  
RotMax =        inp(11,2).Var2;  
TpulseRod =     inp(12,2).Var2;  
TdRod =         inp(13,2).Var2; 

%Configuracoes do 2 Torqrod + Roda de Reação		
inp = readtable('SFF_Simulator_Entradas.xlsx','Sheet',simulacao,'Range','H30:I45');
torqrodAtivo =     inp(1,2).Var2;

if torqrodAtivo
    beta =             inp(2,2).Var2;
    Km =               inp(3,2).Var2;
    limCorrente =      inp(4,2).Var2;
    limVolt =          inp(5,2).Var2;
    Rm =               inp(6,2).Var2;
    Iw =               inp(7,2).Var2;
    B =                inp(8,2).Var2;
    Kv =               inp(9,2).Var2;    
    Tmax =             inp(10,2).Var2;  
    RotMax =           inp(11,2).Var2;  
    TpulseRod =        inp(12,2).Var2;  
    TdRod =            inp(13,2).Var2; 
end
sat_torquerod =    inp(14,2).Var2; 
TpulseTorq =       inp(15,2).Var2; 
TdTorq =           inp(16,2).Var2; 

%Configuracoes sensores		
inp = readtable('SFF_Simulator_Entradas.xlsx','Sheet',simulacao,'Range','K30:L41');
cdgps =             inp(1,2).Var2;
gps_ruido =         inp(2,2).Var2;
gps_bias =          inp(3,2).Var2;
estrelas =          inp(4,2).Var2;
estrelas_ruido =    inp(5,2).Var2;
estrelas_bias =     inp(6,2).Var2;
giro =              inp(7,2).Var2;
giro_ruido =        inp(8,2).Var2;
giro_bias =         inp(9,2).Var2;
magne =             inp(10,2).Var2;
magne_ruido =       inp(11,2).Var2;
magne_bias =        inp(12,2).Var2;


%% Tempos
% Tempo de simulação
tf = orb*round(2*pi*sqrt(a0_ini^3/mi));

%Tempo de início da manobra
t_man = tf/2;

%% Configuração dos artefatos gerados
run('artifacticsFolder.m')

%% Rodar simulação
sim('SFF_Simulator.slx');

%% Saídas
Out = struct('Simulation',ans);

%% Salvar os dados
save(sprintf('Simulador/Resultados/resultados_%s.mat',simulacao),'Out')

%% Som final de simulação concluída
load gong.mat
sound(y)
display('Done!')

%% Tempo total de simulação
sim_time = toc;
min = fix(sim_time/60);
seg = rem(sim_time,1)*60;
temp_form = sprintf('Tempo de simulação: %0.0f min %0.01f seg',[min seg])