# rarg examples

This project shows an example commands tree that uses `lwt`.
(Note that there is a fake `500ms` delay added in commands execution to simulate async activity)

To try the commands:

```
esy examplelwt
```

To try the commands and autocompletion:

- run

```sh
esy release && cd _release && npm install && bin/examplelwt --rarg-add-path
```

- follow the install instruction
- open a new terminal window - you will have the command `examplelwt` installed with autocompletion
