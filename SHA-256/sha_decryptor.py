from typing import Tuple
import hashlib
from argparse import ArgumentParser
from tqdm import tqdm

def gen_plain_cipher(root, extention) -> Tuple[str, str]:
    text_list = []
    for root_text in root:
        text_list.extend([root_text+extention_text for extention_text in extention])
    i = 1
    n = len(text_list)
    for plain_text in tqdm(text_list):
        cipher_text = hashlib.sha256(plain_text.encode("ascii")).hexdigest()

        if cipher_text == '0956f358df15f90dad8bfaca6efb98792f42c44eaf7f80792e33ee310650392e':
            print('Found the text!!! It is {}'.format(plain_text))
            break
        else:
            i += 1
    else:
        print('Plain Text not found')

parser = ArgumentParser()
parser.add_argument('start_index')

args = parser.parse_args()

st_idx = 2197 * int(args.start_index)

text_list = []

with open('./answer-list.txt') as file:
    for line in file:
        text_list.append(line.rstrip())

gen_plain_cipher(text_list[st_idx:st_idx+2197], text_list)