%%GuiamentoOrbital_Harness inputs

clear all
clc

run constantes.m
inp = readtable('DinamicaCinematicaAtitude_Entradas.xlsx');

%iterations

[ite,~] = size(inp);

step_modelo = 0.1;

for i = 1:ite
    %inputs
    verificar = inp.verificar(i);
    e0 = inp.e0(i);
    r0_ini = inp.r0_ini(i);                                   %[m]
    r0_dot_ini = inp.r0_dot_ini(i);                           %[m/s]
    i0_ini = inp.i0_ini(i);                                   %[rad]
    h0_ini = inp.h0_ini(i);                                   %[m^2s^-1]
    theta0_ini = inp.theta0_ini(i);                           %[rad]
    ohm0_ini = inp.ohm0_ini(i);                               %[rad]
    x0_ini = inp.x0_ini(i);                                   %[m]
    y0_ini = inp.y0_ini(i);                                   %[m]
    z0_ini = inp.z0_ini(i);                                   %[m]
    x0_dot_ini = inp.x0_dot_ini(i);                           %[m/s]
    y0_dot_ini = inp.y0_dot_ini(i);                           %[m/s]
    z0_dot_ini = inp.z0_dot_ini(i);                           %[m/s]
    man = inp.man(i);                                         
    pcoRad = inp.pcoRad(i);                                   %[m]
    J2_dist = inp.J2_dist(i);
    drag = inp.drag(i);                                       
    Cd0 = inp.Cd0(i);
    L0 = inp.L0(i);                                           %[m]
    m0 = inp.m0(i);                                           %[kg]
    Cd1 = inp.Cd1(i);
    L1 = inp.L1(i);                                           %[m]
    m1  = inp.m1(i);                                          %[kg]
    Ixx = inp.Ixx(i);                                         %[kg m^2]
    Iyy = inp.Iyy(i);                                         %[kg m^2]
    Izz = inp.Izz(i);                                         %[kg m^2]
    AttKp_x = inp.AttKp_x(i);
    AttKp_y = inp.AttKp_y(i);
    AttKp_z = inp.AttKp_z(i);
    AttKd_x = inp.AttKd_x(i);
    AttKd_y = inp.AttKd_y(i);
    AttKd_z = inp.AttKd_z(i);
    q1_rel_ini = inp.q1_rel_ini(i);                           
    q2_rel_ini = inp.q2_rel_ini(i);                           
    q3_rel_ini = inp.q3_rel_ini(i);                          
    q4_rel_ini = inp.q4_rel_ini(i);                              
    omega1_rel_ini = inp.omega1_rel_ini(i);                   %[rad/s]   
    omega2_rel_ini = inp.omega2_rel_ini(i);                   %[rad/s]   
    omega3_rel_ini = inp.omega3_rel_ini(i);                   %[rad/s] 

    tf = inp.orb(i)*round(2*pi*sqrt(((h0_ini^2)/(mi*(1-inp.e0(i)^2)))^3/mi));
    t_man = tf/2;
    
    if verificar
        % Run model
        run('artifacticsFolder.m')
        sim('DinamicaCinematicaAtitude.slx');

        %outputs
        Out(i) = struct('Simulation',ans);
    end
    
end

load gong.mat
sound(y)
display('Done!')