import sys
from sys import argv
import struct
from struct import *
import time
import os
from typing import Sized
import numpy as np

def encoder(data, max_tam):
    #iniciando dicionario
    inicio = time.time()
    dicionario_tam = 256                   
    dicionario = {chr(i): i for i in range(dicionario_tam)}    
    string = ""             
    dados_comprimido = []   #armazena os dados comprimidos.


    #comeca LZW | Interando por cada indice no arquivo de entrada
    for indices in data:                     
        concat_indices = string + indices #concatena os indices
        if concat_indices in dicionario:  #verifica se tem o indice atual no dicionario
            string = concat_indices       #armazena o indice atual em string
        else:
            dados_comprimido.append(dicionario[string]) #adiciona a saida o indice atual 
            if(len(dicionario) <= max_tam):  #verifica se o dicionario esta cheio
                dicionario[concat_indices] = dicionario_tam #adiciona ao dicionario o novo simbolo caso o dicionario nao esteja cheio
                dicionario_tam += 1 
            string = indices

    if string in dicionario:
        dados_comprimido.append(dicionario[string])

    #armazenando a string comprimida no arquivo de saida byte a byte
    out = input_file.split(".")[0]
    output_file = open(out + "_" + str(max_tam) + "_saida.lzw", "wb")
    for data in dados_comprimido:
        output_file.write(pack('>H',int(data)))
    saida = str(dados_comprimido)
    print("\n" + "k = " + str(k))
    print("Total de indices no arquivo comprimido com " + str(k) + "bits :" + str(len(saida)))
    print("RC para " + str(k) +  " Bits ", len(str(input_file)) / len(str(output_file)))
    fim = time.time()
    file_size = output_file.tell()
    print("Tempo de processamento para " + str(k) +  " Bits " +  str(fim - inicio) + " segundos")
    print("Tamanho do arquivo comprimido para " + str(k) + "bits " + str(file_size) + " KB")
    output_file.close()
    file.close()
    return output_file



#------------------------------#------------------------------# MAIN #------------------------------#------------------------------#
input_file = argv[1]
file = open(input_file, "rb") 
data = str(file.read())  
tamanho_or = file.tell()

print("Quantidade de indices no arquivo de entrada: " + str(len(data)))
print("Tamanho do arquivo de entrada:  " + str(tamanho_or) + " KB")
for k in range(9,16):
    max_tam = pow(2,int(k))                 
    encoder(data, max_tam)
