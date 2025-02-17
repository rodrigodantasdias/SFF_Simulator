%%GuiamentoOrbital_Harness inputs

clear all
clc

run constantes.m
inp = readtable('GuiamentoDinamicaCinematicaOrbital_Entradas.xlsx');

%iterations

[ite,~] = size(inp);

step_modelo = 0.1;

for i = 1:ite
    %inputs
    verificar = inp.verificar(i);
    e0_ini = inp.e0(i);
    r0_ini = inp.r0_ini(i);                                   %[m]
    r0_dot_ini = inp.r0_dot_ini(i);                           %[m/s]
    i0_ini = inp.i0_ini(i);                                   %[rad]
    h0_ini = inp.h0_ini(i);                                   %[m^2s^-1]
    a0_ini = (h0_ini^2)/(mi*(1-e0_ini^2));                    %[m]
    theta0_ini = inp.theta0_ini(i);                           %[rad]
    ohm0_ini = inp.ohm0_ini(i);                               %[rad]
    f0_ini = 0;                                               %[rad]
    omega0_ini = theta0_ini - f0_ini;                         %[rad]
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

    tf = inp.orb(i)*round(2*pi*sqrt(a0_ini^3/mi));
    t_man = round(tf/2);
    
    tic
    if verificar
        % Run model
        run('artifacticsFolder.m')
        sim('GuiamentoOrbital.slx');

        %outputs
        Out(i) = struct('Simulation',ans);
    end
    toc
    
end

load gong.mat
sound(y)
display('Done!')