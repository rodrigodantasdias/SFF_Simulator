function [a,e,I,Ohm,omega,f,theta,orbita] = orb_elem(mi,r_vec,v_vec)

tol = 10e-10;

r_vec = (r_vec);
v_vec = (v_vec);
mi = (mi);

%Vetores unitários
i_vec = ([1 0 0]);
j_vec = ([0 1 0]);
k_vec = ([0 0 1]);

%1. Determinação de r e v
r = norm(r_vec);                                                  
v = norm(v_vec);                                                  

%2. Determinação das integrais primeiras
h_vec = cross(r_vec,v_vec);
B_vec = cross(v_vec,h_vec)-(mi/r).*r_vec;
h = norm(h_vec);
B = norm(B_vec);

%3. Determinação do vetor nodal N
N_vec = cross(k_vec,h_vec);
N = norm(N_vec);

%4. Determinação do parâmetro adimensional Q                        
Q = r*v^2/mi;

%5. Determinação do semi-eixo maior                                 
a = r/(2-Q);

%6. Determinação da excentricidade
e_vec = (1/mi)*((v^2-mi/r).*r_vec-dot(r_vec,v_vec).*v_vec);
e = B/mi;

if e >= -tol && e <= tol
    e = 0;
end

%7. Determinação da inclinação do plano da órbita
I = acos((dot(k_vec,h_vec))/h);

%Elementos que podem não estar disponíveis de acordo com a órbita:
omega = NaN;    %Argumento do perigeu
f = NaN;        %Anomalia verdadeira
l = NaN;        %latitude média
omega_t = NaN;  %longitude do perigeu
lambda = NaN;   %longitude média


%8. Demais elementos orbitais

if N ~= 0 && e ~= 0         %Órbita não-equatorial e não-circular

    %Tipo de órbita
    orbita = "Órbita não-equatorial e não-circular";

    %Longitude do nodo ascendente OK
        if dot(j_vec,N_vec) > 0
            Ohm = acos((dot(i_vec,N_vec))/(N));
        elseif dot(j_vec,N_vec) < 0
            Ohm = 2*pi - acos((dot(i_vec,N_vec))/(N));  
        else
            Ohm = 0;
        end

    %Argumento do pericentro OK
        if dot(k_vec,e_vec) > 10e-5
            omega = acos((dot(e_vec,N_vec))/(e*N));
        elseif dot(k_vec,e_vec) < -10e-5
            omega = 2*pi - acos((dot(e_vec,N_vec))/(e*N));
        else
            omega = 0;
        end

    %Anomalia verdadeira OK
        if dot(r_vec,v_vec) >= 10e-5
            f = acos((dot(e_vec,r_vec))/(e*r));
        elseif dot(r_vec,v_vec) <= -10e-5
            f = 2*pi - acos((dot(e_vec,r_vec))/(e*r));
        else
            f = 0;
        end

    %Latitude verdadeira OK
        theta = wrapTo2Pi(f + omega);

elseif N ~= 0 && e == 0     %Órbita não-equatorial e circular
    
    %Tipo de órbita
    orbita = "Órbita não-equatorial e circular";

    %Longitude do nodo ascendente OK
        if dot(j_vec,N_vec) > 0
            Ohm = acos((dot(i_vec,N_vec))/(N));
        elseif dot(j_vec,N_vec) < 0
            Ohm = 2*pi - acos((dot(i_vec,N_vec))/(N));  
        else
            Ohm = 0;
        end
    
    %Latitude média OK
        if dot(k_vec,r_vec) > 0
            l = acos((dot(r_vec,N_vec))/(r*N));
        elseif dot(k_vec,r_vec) < 0
            l = 2*pi - acos((dot(r_vec,N_vec))/(r*N));
        else
            l = 0;
        end 

        %Latitude verdadeira OK
        theta = l;

elseif N == 0 && e ~= 0     %Órbita equatorial e não-circular
    
    %Tipo de órbita
    orbita = "Órbita equatorial e não-circular";
    
    %Anomalia verdadeira OK
        if dot(r_vec,v_vec) > 0
            f = acos((dot(e_vec,r_vec))/(e*r));
        elseif dot(r_vec,v_vec) < 0
            f = 2*pi - acos((dot(e_vec,r_vec))/(e*r));
        else
            f = 0;
        end

    %Longitude do pericentro OK
        if dot(j_vec,e_vec) > 0
            omega_t = acos((dot(i_vec,e_vec))/(e));
        elseif dot(j_vec,e_vec) < 0
            omega_t = 2*pi - acos((dot(i_vec,e_vec))/(e));
        else
            omega_t = 0;
        end

        %Latitude verdadeira OK
        theta = wrapTo2Pi(omega_t  + f);

        Ohm = omega_t;

else %N == 0 e e == 0        Órbita equatorial e circular
   
   %Tipo de órbita
   orbita = "Órbita equatorial e circular";   

    %Longitude média OK
        if dot(j_vec,r_vec) > 0
            lambda = acos(dot(i_vec,r_vec)/r);
        elseif dot(j_vec,r_vec) < 0
            lambda = 2*pi - acos(dot(i_vec,r_vec)/r);
        else
            lambda = 0;
        end

        %Latitude verdadeira OK
        theta = lambda;

        Ohm = lambda;
    
end

end
