Esse repositório está sendo utilizado para aprimoramento do sistema acadêmico em RAD, da matéria Técnicas de Programação.

O antigo monitor que havia elaborado o sistema original(que pode ser acessado na branch "original"), deixou de cabeçalho as principais informações:
" 
// Data: 15/05/2017 - 1o Semestre de 2018
// Prof. Dr. Jean M. Simao - DAINF/UTFPR Curitiba-Central
// Autor: Monitor Vitor C. M. Correa
// UNIVERSIDADE TECNOLOGICA FEDERAL DO PARANA - Campus de Curitiba Central
// Departamento Academico de Informatica (DAINF)
// Disciplina: Tecnicas de Programacao - CSE20
// Sistema Academico - Slides 1 ao 8
// Exemplo de referencia para os exercicios e atividades propostos em sala
// Curso: Engenharia da Computacao / Sistemas de Informacao
// Turma: S71 / S02. "

Dito isso, reenforçando algumas informações:
Me chamo Daniel I. Zagroba e sou o monitor atual(2o semestre de 2024) de TecProg e estou sob orientação do: Prof. Dr. Jean M. Simao.

Objetivos principais:
- Melhorar funcionalidades gerais, como informar quando apropriadamente o usuário quando uma universidade, departamento etc for cadastrado;
  (Feito)
- Não permitir q o usuário insira algo sem nome.
  (Feito)
- Avisar usuário nas falhas durante os cadastros.
  (Feito)
- Tirar o texto quando o botão ou enter é apertado de forma que não necessite ficar apagando e escrevendo de novo;
  (Feito)
- Consertar o "listar tudo" que não lista nada aparentemente;
  (Feito)
- Não permitir que mais de uma universidade com mesmo nome seja inserida, e o mesmo para com seus departamentos e disciplinas;
  (Feito)
- Não permitir que alunos com mesmo RA sejam inseridos
  (Feito)
- Fazer com que possa ser adicionados departamentos e disciplinas de mesmo nome em universidades diferentes;
  (Creio melhor não fazer por enquanto)
- Deixar privado os atributos das listas
  (Feito)
- Corrigir para que quando o texto da caixa estiver vazio ele n dê erro acessando memória indevida;
  (Feito)
- Se tentar recuperar o tudo tendo salvado outra opção dá erro;
  (Resolvido tirando as outras opções de recuperar e salvar, que feriam a persistência de relacionamento dos objetos)
- Consertar o salvar do departamento, pois ainda não funciona nem o de disciplina e o de aluno, ou respectivamente seus "recuperar".
  (Resolvido tirando as outras opções de recuperar e salvar, que feriam a persistência de relacionamento dos objetos)
- Olhar mais melhorias que podem ser feitas
  (Não feito)